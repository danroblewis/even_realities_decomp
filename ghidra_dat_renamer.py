#!/usr/bin/env python3
# Ghidra Jython script for mass renaming DAT labels
# Usage: Run this script in Ghidra's Script Manager

from ghidra.program.model.symbol import Symbol
from ghidra.program.model.symbol import SymbolType
from ghidra.util.task import TaskMonitor
from ghidra.util.task import ConsoleTaskMonitor
import re

def get_user_input():
    """
    Get space-separated list of old_name,new_name pairs from user
    Returns a list of tuples: [(old_name, new_name), ...]
    """
    # Get the current program
    program = getCurrentProgram()
    
    # Show input dialog with instructions
    input_text = askString("DAT Label Renamer", 
                          "Enter pairs of old_name,new_name separated by spaces\n" +
                          "Example:\n" +
                          "FUN_0000c358,button_init FUN_0000d588,power_init FUN_0000d58c,imu_init\n\n" +
                          "Each pair should be comma-separated, and pairs should be space-separated")
    
    if not input_text:
        return []
    
    # Parse the input
    pairs = []
    try:
        # Split by spaces
        parts = input_text.split()
        
        for part in parts:
            part = part.strip()
            if not part:  # Skip empty parts
                continue
                
            # Split each part by comma
            name_parts = part.split(',')
            if len(name_parts) != 2:
                print("Warning: Skipping invalid part '{}' - must have exactly 2 comma-separated values".format(part))
                continue
            
            old_name = name_parts[0].strip()
            new_name = name_parts[1].strip()
            if old_name and new_name:
                pairs.append((old_name, new_name))
                
    except Exception as e:
        printerr("Error parsing input: " + str(e))
        return []
    
    return pairs

def find_dat_symbols(program, old_name):
    """
    Find all symbols that match the old DAT name pattern
    Returns a list of matching symbols
    """
    symbol_table = program.getSymbolTable()
    symbols = []
    
    # Get all symbols
    all_symbols = symbol_table.getAllSymbols(True)
    
    for symbol in all_symbols:
        if symbol.getSymbolType() == SymbolType.LABEL:
            symbol_name = symbol.getName()
            # Check if symbol name matches the old name exactly
            if symbol_name == old_name:
                symbols.append(symbol)
    
    return symbols

def rename_dat_labels(program, rename_pairs):
    """
    Rename all DAT labels according to the provided mapping
    """
    if not rename_pairs:
        print("No rename pairs provided")
        return
    
    total_renamed = 0
    total_errors = 0
    
    print("Starting DAT label renaming...")
    print("=" * 50)
    
    for old_name, new_name in rename_pairs:
        print("Processing: {} -> {}".format(old_name, new_name))
        
        # Find all symbols matching the old name
        matching_symbols = find_dat_symbols(program, old_name)
        
        if not matching_symbols:
            print("  Warning: No symbols found matching '{}'".format(old_name))
            continue
        
        # Rename each matching symbol
        for symbol in matching_symbols:
            try:
                # Check if new name already exists at the same address
                # Use getAllSymbols and filter by name to check for conflicts
                symbol_table = program.getSymbolTable()
                all_symbols = symbol_table.getAllSymbols(True)
                name_conflict = False
                
                for existing_symbol in all_symbols:
                    if existing_symbol.getName() == new_name and existing_symbol.getAddress() == symbol.getAddress():
                        print("  Warning: Symbol '{}' already exists at {}".format(new_name, symbol.getAddress()))
                        name_conflict = True
                        break
                
                if name_conflict:
                    continue
                
                # Perform the rename
                old_symbol_name = symbol.getName()
                # setName() expects (name, source) where source indicates who is making the change
                symbol.setName(new_name, ghidra.program.model.symbol.SourceType.USER_DEFINED)
                
                print("  Renamed: {} -> {} at {}".format(old_symbol_name, new_name, symbol.getAddress()))
                total_renamed += 1
                
            except Exception as e:
                print("  Error renaming symbol {}: {}".format(symbol.getName(), str(e)))
                total_errors += 1
        
        print()
    
    print("=" * 50)
    print("Renaming complete!")
    print("Total symbols renamed: {}".format(total_renamed))
    if total_errors > 0:
        print("Total errors: {}".format(total_errors))
    
    # Refresh the UI
    program.getSymbolTable().refresh()

def main():
    """
    Main function to run the DAT label renamer
    """
    try:
        # Get current program
        program = getCurrentProgram()
        if not program:
            printerr("No program is currently open")
            return
        
        print("DAT Label Renamer")
        print("=" * 30)
        print("Current program: {}".format(program.getName()))
        print()
        
        # Get user input
        rename_pairs = get_user_input()
        
        if not rename_pairs:
            print("No rename pairs provided. Exiting.")
            return
        
        # Show what will be renamed
        print("The following renames will be performed:")
        for old_name, new_name in rename_pairs:
            print("  {} -> {}".format(old_name, new_name))
        
        print()
        confirm = askYesNo("Confirm Rename", 
                          "Proceed with renaming {} label(s)?".format(len(rename_pairs)))
        
        if not confirm:
            print("Operation cancelled by user")
            return
        
        # Perform the renaming
        rename_dat_labels(program, rename_pairs)
        
    except Exception as e:
        printerr("Unexpected error: {}".format(str(e)))
        import traceback
        traceback.print_exc()

# Run the script
if __name__ == "__main__":
    main()
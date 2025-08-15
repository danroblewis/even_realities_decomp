/*
 * Function: search_for_matching_data_structure_entry
 * Entry:    0007f570
 * Prototype: undefined __stdcall search_for_matching_data_structure_entry(undefined4 search_context, undefined4 current_entry, undefined4 comparison_data)
 */


undefined4 *
search_for_matching_data_structure_entry
          (undefined4 search_context,undefined4 *current_entry,undefined4 comparison_data)

{
  int iVar1;
  
  do {
    current_entry =
         (undefined4 *)
         get_next_data_structure_entry_with_pattern_validation(search_context,current_entry);
    if (current_entry == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    iVar1 = compare_data_structures(comparison_data,*current_entry);
  } while (iVar1 != 0);
  return current_entry;
}



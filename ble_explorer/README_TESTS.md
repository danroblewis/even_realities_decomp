# BLE Message Matcher Test Suite

This directory contains comprehensive tests for the BLE message matcher functionality.

## Test Files

### 1. `test_message_matcher.py` - Full Test Suite
Comprehensive test suite that validates all three test cases and analyzes message types.

**Run with:**
```bash
cd ble_explorer
python test_message_matcher.py
```

**What it tests:**
- ✅ **Clear Screen Command**: `18000100` → `clear_screen` message type
- ✅ **Text Command**: `4e00010030000001010a0a68656c6c6f20776f726c640a0a` → `text_4e` message type  
- ✅ **Heartbeat Command**: `250600010402` → `heartbeat` message type

### 2. `test_single_packet.py` - Individual Packet Tester
Quick test runner for testing individual packets.

**Run with:**
```bash
cd ble_explorer
python test_single_packet.py <hex_packet>
```

**Examples:**
```bash
# Test clear screen command
python test_single_packet.py 18000100

# Test text command
python test_single_packet.py 4e00010030000001010a0a68656c6c6f20776f726c640a0a

# Test heartbeat command
python test_single_packet.py 250600010402
```

## Expected Results

### Test Case 1: Clear Screen (`18000100`)
- **Command**: `18`
- **Length**: 4 bytes
- **Expected Match**: `clear_screen` message type
- **Parsed Data**: 
  - `command`: `0x18`
  - `length`: `0x0001` (1)
  - `data`: `0x00` (0)

### Test Case 2: Text Command (`4e00010030000001010a0a68656c6c6f20776f726c640a0a`)
- **Command**: `4e`
- **Length**: 32 bytes
- **Expected Match**: `text_4e` message type
- **Parsed Data**:
  - `command`: `0x4e`
  - `length`: `0x0001` (1)
  - `flags`: `0x00` (0)
  - `width`: `0x3000` (12288)
  - `height`: `0x0001` (1)
  - `xpos`: `0x010a` (266)
  - `ypos`: `0x0a0a` (2570)
  - `text_data`: `"hello world\n\n"`

### Test Case 3: Heartbeat (`250600010402`)
- **Command**: `25`
- **Length**: 6 bytes
- **Expected Match**: `heartbeat` message type
- **Parsed Data**:
  - `command`: `0x25`
  - `unknown_1`: `0x06` (6)
  - `unknown_2`: `0x00` (0)
  - `seq_1`: `0x01` (1)
  - `constant`: `0x04` (4)
  - `seq_2`: `0x02` (2)

## What the Tests Validate

1. **Command Code Matching**: Correctly identifies packets by their first byte
2. **Length Validation**: Properly handles fixed-width vs. max-width fields
3. **Message Type Selection**: Chooses the best matching message type
4. **Deserialization**: Correctly parses packets into attribute-value pairs
5. **Edge Cases**: Handles invalid packets gracefully

## Debug Output

The tests include detailed logging that shows:
- How each message type is analyzed
- Why certain matches succeed or fail
- Expected vs. actual packet lengths
- Attribute-by-attribute breakdown

## Running Tests During Development

Use the individual packet tester to quickly validate changes:

```bash
# After making changes to the matching algorithm
python test_single_packet.py 18000100

# Test multiple packets
for packet in "18000100" "4e00010030000001010a0a68656c6c6f20776f726c640a0a" "250600010402"; do
    echo "Testing $packet"
    python test_single_packet.py $packet
    echo "---"
done
```

## Troubleshooting

If tests fail:

1. **Check message type definitions** in `ble_message_types.json`
2. **Verify attribute widths** are correctly specified
3. **Check computed fields** are properly marked
4. **Review max_width flags** for variable-length fields
5. **Examine debug output** for detailed matching information

## Adding New Test Cases

To add a new test case:

1. Add the packet to `test_message_type_matching()` in `test_message_matcher.py`
2. Create the expected message type in `ble_message_types.json`
3. Run the full test suite to validate
4. Add the packet to the examples in `test_single_packet.py`

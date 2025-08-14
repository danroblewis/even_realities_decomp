/*
 * Function: dump_hex_data
 * Entry:    0004a424
 * Prototype: undefined __stdcall dump_hex_data(undefined4 label, undefined4 data_buffer, undefined4 data_length)
 */


void dump_hex_data(undefined4 label,int data_buffer,int data_length)

{
  uint byte_index;
  
  DEBUG_PRINT("dump_hex(%s):",label);
  for (byte_index = 0; (int)byte_index < data_length; byte_index = byte_index + 1) {
    if ((byte_index & 7) == 0) {
      DEBUG_PRINT(&DAT_000f5400);
    }
    DEBUG_PRINT("0x%02x,",(uint)*(byte *)(data_buffer + byte_index));
  }
  DEBUG_PRINT(&DAT_000f5400);
  return;
}



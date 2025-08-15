/*
 * Function: convert_to_byte_format
 * Entry:    00080eb8
 * Prototype: undefined __stdcall convert_to_byte_format(undefined4 value1, undefined4 value2, undefined4 output_buffer)
 */


void convert_to_byte_format(undefined4 value1,undefined4 value2,undefined1 *output_buffer)

{
  output_buffer[1] = (char)((uint)value1 >> 8);
  *output_buffer = (char)value1;
  output_buffer[3] = (char)((uint)value1 >> 0x18);
  output_buffer[2] = 0;
  output_buffer[4] = 0;
  output_buffer[5] = (char)((uint)value2 >> 8);
  output_buffer[6] = 0;
  output_buffer[7] = (char)((uint)value2 >> 0x18);
  return;
}



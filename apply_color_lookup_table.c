/*
 * Function: apply_color_lookup_table
 * Entry:    0004790c
 * Prototype: undefined __stdcall apply_color_lookup_table(undefined4 source_data, undefined4 data_length, undefined4 destination_buffer)
 */


void apply_color_lookup_table(int source_data,int data_length,int destination_buffer)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < data_length; iVar1 = iVar1 + 1) {
    *(undefined4 *)(destination_buffer + iVar1 * 4) =
         *(undefined4 *)(&DAT_000d753a + (uint)*(byte *)(source_data + iVar1) * 4);
  }
  return;
}



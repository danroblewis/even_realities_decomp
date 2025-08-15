/*
 * Function: format_data_by_size
 * Entry:    00080d9a
 * Prototype: undefined __stdcall format_data_by_size(undefined4 output_buffer, undefined4 input_data, undefined4 data_size)
 */


undefined4 format_data_by_size(undefined1 *output_buffer,undefined4 *input_data,int data_size)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (data_size == 4) {
    *output_buffer = 1;
    *(undefined4 *)(output_buffer + 4) = *input_data;
  }
  else if (data_size == 0x10) {
    *output_buffer = 2;
    puVar1 = (undefined4 *)(output_buffer + 1);
    puVar2 = input_data;
    do {
      puVar3 = puVar2 + 1;
      *puVar1 = *puVar2;
      puVar1 = puVar1 + 1;
      puVar2 = puVar3;
    } while (puVar3 != input_data + 4);
  }
  else {
    if (data_size != 2) {
      return 0;
    }
    *output_buffer = 0;
    *(undefined2 *)(output_buffer + 2) = *(undefined2 *)input_data;
  }
  return 1;
}



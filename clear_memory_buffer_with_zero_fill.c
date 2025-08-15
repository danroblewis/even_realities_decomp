/*
 * Function: clear_memory_buffer_with_zero_fill
 * Entry:    00079808
 * Prototype: undefined __stdcall clear_memory_buffer_with_zero_fill(undefined4 buffer_pointer, undefined4 param_2)
 */


void clear_memory_buffer_with_zero_fill(undefined1 *buffer_pointer,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if ((buffer_pointer != (undefined1 *)0x0) && (param_2 != 0)) {
    puVar1 = buffer_pointer;
    do {
      puVar2 = puVar1 + 1;
      *puVar1 = 0;
      puVar1 = puVar2;
    } while (puVar2 != buffer_pointer + param_2);
  }
  return;
}



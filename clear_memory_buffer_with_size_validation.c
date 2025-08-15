/*
 * Function: clear_memory_buffer_with_size_validation
 * Entry:    000797f4
 * Prototype: undefined clear_memory_buffer_with_size_validation()
 */


void clear_memory_buffer_with_size_validation(undefined1 *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if ((param_1 != (undefined1 *)0x0) && (param_2 != 0)) {
    puVar1 = param_1;
    do {
      puVar2 = puVar1 + 1;
      *puVar1 = 0;
      puVar1 = puVar2;
    } while (param_1 + param_2 != puVar2);
  }
  return;
}



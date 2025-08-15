/*
 * Function: copy_memory_short_and_word
 * Entry:    00080fba
 * Prototype: undefined copy_memory_short_and_word()
 */


void copy_memory_short_and_word(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  return;
}



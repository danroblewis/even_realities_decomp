/*
 * Function: copy_memory_word_short_and_byte_alt
 * Entry:    00081196
 * Prototype: undefined copy_memory_word_short_and_byte_alt()
 */


void copy_memory_word_short_and_byte_alt(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)((int)param_2 + 6);
  return;
}



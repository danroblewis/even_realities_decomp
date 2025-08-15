/*
 * Function: initialize_memory_structure_with_word_and_short
 * Entry:    000836ec
 * Prototype: undefined initialize_memory_structure_with_word_and_short()
 */


void initialize_memory_structure_with_word_and_short
               (undefined4 *param_1,undefined4 param_2,undefined2 param_3)

{
  param_1[2] = param_2;
  *param_1 = param_2;
  *(undefined2 *)((int)param_1 + 6) = param_3;
  *(undefined2 *)(param_1 + 1) = param_3;
  return;
}



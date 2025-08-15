/*
 * Function: cleanup_reference_and_set_null
 * Entry:    000813d6
 * Prototype: undefined cleanup_reference_and_set_null()
 */


void cleanup_reference_and_set_null(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    decrement_reference_count_and_cleanup_memory();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



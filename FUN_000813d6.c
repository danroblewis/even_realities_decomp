/*
 * Function: FUN_000813d6
 * Entry:    000813d6
 * Prototype: undefined FUN_000813d6()
 */


void FUN_000813d6(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    decrement_reference_count_and_cleanup_memory();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



/*
 * Function: FUN_0007ef3e
 * Entry:    0007ef3e
 * Prototype: undefined FUN_0007ef3e()
 */


void FUN_0007ef3e(int param_1)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x14) + 4);
    *puVar1 = *puVar1 | 1;
  }
  return;
}



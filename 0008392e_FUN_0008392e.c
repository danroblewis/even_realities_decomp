/*
 * Function: FUN_0008392e
 * Entry:    0008392e
 * Prototype: undefined FUN_0008392e()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008392e(int param_1)

{
  uint *puVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x10) + 0x60) == '\0') {
    _DAT_500055b8 = 2;
  }
  z_spin_lock_valid(*(int *)(param_1 + 0x10) + 0x18);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x14) + 4);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  return;
}



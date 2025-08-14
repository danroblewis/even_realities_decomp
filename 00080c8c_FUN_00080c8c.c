/*
 * Function: FUN_00080c8c
 * Entry:    00080c8c
 * Prototype: undefined FUN_00080c8c()
 */


void FUN_00080c8c(void)

{
  undefined4 extraout_r2;
  undefined4 in_r3;
  undefined8 uVar1;
  
  uVar1 = FUN_000527dc();
  if ((int)uVar1 != 0) {
    z_spin_lock_valid((int)uVar1 + 0x6c,(int)((ulonglong)uVar1 >> 0x20),extraout_r2,in_r3);
    return;
  }
  return;
}



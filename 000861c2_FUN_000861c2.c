/*
 * Function: FUN_000861c2
 * Entry:    000861c2
 * Prototype: undefined FUN_000861c2()
 */


void FUN_000861c2(int param_1)

{
  int extraout_r2;
  undefined8 uVar1;
  
  uVar1 = FUN_000861ae(*(undefined4 *)(param_1 + 0x14));
  if (((int)uVar1 != 0) && (extraout_r2 != 0)) {
    *(int *)(extraout_r2 + 0xc) = (int)((ulonglong)uVar1 >> 0x20);
  }
  return;
}



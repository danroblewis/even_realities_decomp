/*
 * Function: FUN_00085d70
 * Entry:    00085d70
 * Prototype: undefined FUN_00085d70()
 */


void FUN_00085d70(int param_1)

{
  int extraout_r2;
  undefined8 uVar1;
  
  uVar1 = FUN_00085d5c(*(undefined4 *)(param_1 + 0x14));
  if (((int)uVar1 != 0) && (extraout_r2 != 0)) {
    *(int *)(extraout_r2 + 0xc) = (int)((ulonglong)uVar1 >> 0x20);
  }
  return;
}



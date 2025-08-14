/*
 * Function: FUN_00085c26
 * Entry:    00085c26
 * Prototype: undefined FUN_00085c26()
 */


void FUN_00085c26(int param_1)

{
  int extraout_r2;
  undefined8 uVar1;
  
  uVar1 = FUN_00085c12(*(undefined4 *)(param_1 + 0x14));
  if (((int)uVar1 != 0) && (extraout_r2 != 0)) {
    *(int *)(extraout_r2 + 0xc) = (int)((ulonglong)uVar1 >> 0x20);
  }
  return;
}



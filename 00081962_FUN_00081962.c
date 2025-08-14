/*
 * Function: FUN_00081962
 * Entry:    00081962
 * Prototype: undefined FUN_00081962()
 */


void FUN_00081962(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00081820(*param_1,5,param_2,0,0,param_2,param_3);
  if ((int)uVar1 != 0) {
    FUN_0005f24c(param_2);
    return;
  }
  FUN_0007350c(param_1 + 0x30,(int)((ulonglong)uVar1 >> 0x20),param_3,param_4);
  return;
}



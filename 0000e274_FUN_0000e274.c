/*
 * Function: FUN_0000e274
 * Entry:    0000e274
 * Prototype: undefined FUN_0000e274()
 */


void FUN_0000e274(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  FUN_0000d8f8(param_1,param_2,0,0x3df00000);
  FUN_0000dea8();
  uVar1 = FUN_0000d804();
  uVar1 = FUN_0000d8f8((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0,0x41f00000);
  FUN_0000d588(param_1,param_2,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  FUN_0000dea8();
  return;
}



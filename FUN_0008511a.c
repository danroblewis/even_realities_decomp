/*
 * Function: FUN_0008511a
 * Entry:    0008511a
 * Prototype: undefined FUN_0008511a()
 */


uint FUN_0008511a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00065494(param_1,param_1,param_3,param_4,param_4);
  uVar1 = (uint)uVar2;
  if (uVar1 != 0) {
    uVar1 = FUN_00065460((int)((ulonglong)uVar2 >> 0x20));
  }
  return uVar1 & 1;
}



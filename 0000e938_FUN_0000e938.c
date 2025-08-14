/*
 * Function: FUN_0000e938
 * Entry:    0000e938
 * Prototype: undefined FUN_0000e938()
 */


int FUN_0000e938(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined8 uVar3;
  
  uVar3 = FUN_0000d848(param_1);
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  iVar1 = FUN_0000de2c((int)uVar3,uVar2,(int)uVar3,uVar2,in_r3);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}



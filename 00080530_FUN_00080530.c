/*
 * Function: FUN_00080530
 * Entry:    00080530
 * Prototype: undefined FUN_00080530(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void FUN_00080530(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_2c [3];
  undefined1 local_29;
  int iStack_28;
  
  iVar2 = param_1 + 0xf0;
  _auStack_2c = CONCAT13(1,(uint3)param_2 & 0xffff);
  iVar1 = param_1 + 0x110;
  iStack_28 = param_3;
  FUN_00080452(param_1,iVar2,0x20,0,param_1);
  FUN_000804ba(param_1);
  FUN_000804d4(param_1,iVar1,0x20);
  FUN_000804d4(param_1,auStack_2c + 2,1);
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_000804d4(param_1,param_2,param_3);
  }
  if ((param_4 != 0) && (param_5 != 0)) {
    FUN_000804d4(param_1,param_4,param_5);
  }
  FUN_000804e0(iVar2,0x20,param_1);
  FUN_00080452(param_1,iVar2,0x20);
  FUN_000804ba(param_1);
  FUN_000804d4(param_1,iVar1,0x20);
  FUN_000804e0(iVar1,0x20,param_1);
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_00080452(param_1,iVar2,0x20);
    FUN_000804ba(param_1);
    FUN_000804d4(param_1,iVar1,0x20);
    FUN_000804d4(param_1,&local_29,1);
    FUN_000804d4(param_1,param_2,param_3);
    if ((param_4 != 0) && (param_5 != 0)) {
      FUN_000804d4(param_1,param_4,param_5);
    }
    FUN_000804e0(iVar2,0x20,param_1);
    FUN_00080452(param_1,iVar2,0x20);
    FUN_000804ba(param_1);
    FUN_000804d4(param_1,iVar1,0x20);
    FUN_000804e0(iVar1,0x20,param_1);
  }
  return;
}



/*
 * Function: FUN_00024fe8
 * Entry:    00024fe8
 * Prototype: undefined FUN_00024fe8()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00024fe8(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0007c3d0(param_2,param_1);
  if (iVar1 == -1) {
    _DAT_20007a14 = 0x14040e1;
    uVar2 = FUN_00024f78();
    FUN_0007c3d0(param_2,param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



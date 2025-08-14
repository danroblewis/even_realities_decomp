/*
 * Function: FUN_00024d50
 * Entry:    00024d50
 * Prototype: undefined FUN_00024d50()
 */


int FUN_00024d50(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  FUN_0007c968(DAT_20007a44,&local_c,param_3,&DAT_20007a44,param_1);
  iVar1 = (local_c >> 0x10) + 1;
  return (local_c & 0xff) * iVar1 + iVar1;
}



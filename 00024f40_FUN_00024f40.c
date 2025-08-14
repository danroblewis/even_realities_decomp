/*
 * Function: FUN_00024f40
 * Entry:    00024f40
 * Prototype: undefined FUN_00024f40()
 */


void FUN_00024f40(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0007c8d0(DAT_20007a44,param_1 & 0xff,param_3,param_4,param_1,param_2);
  if ((iVar1 == 0) && (iVar1 = FUN_0007c8e8(DAT_20007a44,&stack0xffffffef), iVar1 == 0)) {
    FUN_0007c8fa(DAT_20007a44);
  }
  return;
}



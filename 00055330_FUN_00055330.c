/*
 * Function: FUN_00055330
 * Entry:    00055330
 * Prototype: undefined FUN_00055330()
 */


void FUN_00055330(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  iVar1 = FUN_000552ac(&uStack_10);
  DAT_20002007 = (undefined1)iVar1;
  if (iVar1 != 0) {
    FUN_00054d18(0,&uStack_10);
  }
  return;
}



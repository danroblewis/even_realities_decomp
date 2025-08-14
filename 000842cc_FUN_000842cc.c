/*
 * Function: FUN_000842cc
 * Entry:    000842cc
 * Prototype: undefined FUN_000842cc()
 */


void FUN_000842cc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = param_2;
  uStack_10 = param_3;
  iVar1 = FUN_00062070(param_3,param_4,(int)&uStack_14 + 2,param_4,param_1);
  if (iVar1 != -0x16) {
    FUN_00083dc8(*(undefined4 *)(param_1 + 0x1c),8,param_2 + 0xcU & 0xff,uStack_14._2_1_);
    return;
  }
  return;
}



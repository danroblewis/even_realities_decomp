/*
 * Function: FUN_0004def8
 * Entry:    0004def8
 * Prototype: undefined FUN_0004def8()
 */


void FUN_0004def8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  iVar1 = FUN_0007ef1c(&DAT_00087bc0,(int)&uStack_c + 3,param_3,param_4,param_1);
  if ((iVar1 == 0) && (uStack_c._3_1_ == '\x01')) {
    FUN_0004dfb8(&DAT_00087bc0);
  }
  DAT_2001d44e = 1;
  FUN_0007eece(&DAT_0008ad08);
  return;
}



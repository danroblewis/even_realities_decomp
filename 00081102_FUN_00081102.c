/*
 * Function: FUN_00081102
 * Entry:    00081102
 * Prototype: undefined FUN_00081102()
 */


int FUN_00081102(int param_1,uint param_2)

{
  int iVar1;
  int iStack_10;
  uint uStack_c;
  
  if (param_1 == 0) {
    iVar1 = -0x16;
  }
  else {
    iStack_10 = param_1;
    uStack_c = param_2;
    iVar1 = FUN_00055cb4(&iStack_10,6);
    if (iVar1 == 0) {
      uStack_c = uStack_c & 0xffff3fff;
      iVar1 = FUN_000810f2(param_1,&iStack_10);
    }
  }
  return iVar1;
}



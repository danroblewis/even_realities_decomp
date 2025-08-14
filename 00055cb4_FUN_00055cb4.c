/*
 * Function: FUN_00055cb4
 * Entry:    00055cb4
 * Prototype: undefined FUN_00055cb4()
 */


int FUN_00055cb4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = FUN_000806c4(param_1,param_2,&DAT_20006000,param_4,param_4);
    if (iVar1 == -1) {
      iVar1 = FUN_00055bf8();
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_000806c4(param_1,param_2,&DAT_20006000);
    }
    if (iVar1 == 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = -5;
    }
  }
  return iVar1;
}



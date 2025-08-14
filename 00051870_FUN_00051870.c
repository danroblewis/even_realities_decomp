/*
 * Function: FUN_00051870
 * Entry:    00051870
 * Prototype: undefined FUN_00051870()
 */


int FUN_00051870(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 == 0) && (iVar1 = FUN_0007f150(&DAT_2000a954,(undefined1)DAT_2000ab7c), iVar1 != 0))
  {
    iVar1 = 10;
  }
  else {
    iVar1 = FUN_0007f110(&DAT_2000a954,param_2,param_3,param_4);
    if (iVar1 != 0) {
      iVar1 = 0xc;
    }
  }
  return iVar1;
}



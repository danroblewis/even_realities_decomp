/*
 * Function: FUN_0002563c
 * Entry:    0002563c
 * Prototype: undefined FUN_0002563c()
 */


int FUN_0002563c(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == 0) || (DAT_20007a44 == 0)) {
    DEBUG_PRINT("input param valid \n");
    iVar1 = -1;
  }
  else {
    iVar2 = 10;
    do {
      iVar1 = FUN_0007ca18(DAT_20007a44,param_1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar1;
}



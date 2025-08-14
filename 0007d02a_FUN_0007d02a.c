/*
 * Function: FUN_0007d02a
 * Entry:    0007d02a
 * Prototype: undefined FUN_0007d02a()
 */


int FUN_0007d02a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00030288(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_0007cfdc(param_1,param_2), iVar1 == 0)) {
    iVar1 = FUN_00030178(0x4820,4);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
    iVar1 = -iVar1;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/*
 * Function: FUN_0007abf4
 * Entry:    0007abf4
 * Prototype: undefined FUN_0007abf4()
 */


undefined4 FUN_0007abf4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = FUN_0007acb8(param_1,1,param_3,param_4,param_4);
  }
  else {
    if (param_2 != 1) {
      return 0xffffffc9;
    }
    iVar1 = FUN_0007acb8(param_1,2,param_3,param_4,param_4);
  }
  if (iVar1 != 0) {
    return 0xffffffc9;
  }
  return 0;
}



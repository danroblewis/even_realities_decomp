/*
 * Function: FUN_000876ec
 * Entry:    000876ec
 * Prototype: undefined FUN_000876ec()
 */


int FUN_000876ec(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_00076e20(param_1,param_3,param_3,param_4);
    return iVar1;
  }
  if (param_3 == 0) {
    FUN_00076d8c();
  }
  else {
    uVar2 = FUN_00087996();
    if (param_3 <= uVar2) {
      return param_2;
    }
    iVar1 = FUN_00076e20(param_1,param_3);
    if (iVar1 != 0) {
      memcpy(iVar1,param_2,param_3);
      FUN_00076d8c(param_1,param_2);
      return iVar1;
    }
  }
  return 0;
}



/*
 * Function: FUN_0008669c
 * Entry:    0008669c
 * Prototype: undefined FUN_0008669c()
 */


longlong * FUN_0008669c(longlong *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (param_4 == -1 && param_3 == 0xffffffff) {
    lVar2 = -1;
  }
  else if (param_3 == 0 && param_4 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = (-1 - param_4) - (uint)(0xfffffffe < param_3);
    lVar2 = CONCAT44(iVar1,-2 - param_3);
    if (iVar1 < 0) {
      lVar2 = FUN_00074f68();
      lVar2 = lVar2 + CONCAT44(param_4,param_3);
    }
  }
  *param_1 = lVar2;
  return param_1;
}



/*
 * Function: FUN_0008633e
 * Entry:    0008633e
 * Prototype: undefined FUN_0008633e()
 */


int FUN_0008633e(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *param_1;
  uVar4 = param_1[3];
  if (((uVar2 < uVar4) && (uVar3 = param_2[1], uVar3 <= uVar4 - uVar2)) &&
     ((*param_2 == 0 || (iVar1 = FUN_0007158c(param_2 + 1,4), uVar2 + uVar3 + 1 + iVar1 <= uVar4))))
  {
    iVar1 = FUN_00086208(param_1,3,param_2 + 1,4);
    if (iVar1 != 0) {
      if (*param_1 != *param_2) {
        FUN_00086c44(*param_1,*param_2,param_2[1]);
      }
      *param_1 = *param_1 + param_2[1];
      return iVar1;
    }
  }
  else {
    FUN_000861c2(param_1,8);
  }
  return 0;
}



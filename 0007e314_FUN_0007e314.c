/*
 * Function: FUN_0007e314
 * Entry:    0007e314
 * Prototype: undefined FUN_0007e314()
 */


int FUN_0007e314(uint *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_1[4] & 8) == 0) {
    uVar2 = *param_1;
    if (uVar2 < param_1[3]) {
      iVar1 = 0;
      iVar3 = param_1[3] - uVar2;
    }
    else {
      iVar1 = 1;
      iVar3 = param_1[9] - uVar2;
    }
  }
  else {
    iVar1 = 0;
    iVar3 = iVar1;
  }
  *param_2 = iVar3;
  return iVar1;
}



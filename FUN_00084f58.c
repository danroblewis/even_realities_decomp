/*
 * Function: FUN_00084f58
 * Entry:    00084f58
 * Prototype: undefined FUN_00084f58()
 */


int FUN_00084f58(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (uVar2 <= (uint)param_1[2])) {
    return 0;
  }
  if (param_2 < 0) {
    return 0;
  }
  iVar4 = param_1[2];
  uVar3 = param_2 + iVar4 + 1;
  if (uVar2 < uVar3) {
    if (param_1[4] != 0) {
      return 0;
    }
    if (uVar3 < 0x40000000) {
      iVar5 = param_2 + iVar4 + 2;
    }
    else {
      if ((int)uVar3 < 0) {
        return 0;
      }
      iVar5 = 0x7fffffff;
    }
    if ((code *)param_1[8] == (code *)0x0) {
      iVar4 = (*(code *)param_1[6])(iVar5);
      if (iVar4 == 0) goto LAB_00084f9e;
      memcpy(iVar4,*param_1,param_1[2] + 1);
      (*(code *)param_1[7])(*param_1);
    }
    else {
      iVar4 = (*(code *)param_1[8])(iVar1,iVar5);
      if (iVar4 == 0) {
LAB_00084f9e:
        (*(code *)param_1[7])(*param_1);
        *param_1 = iVar4;
        param_1[1] = iVar4;
        return 0;
      }
    }
    *param_1 = iVar4;
    param_1[1] = iVar5;
    iVar1 = param_1[2];
  }
  return iVar1 + iVar4;
}



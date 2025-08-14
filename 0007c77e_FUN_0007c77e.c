/*
 * Function: FUN_0007c77e
 * Entry:    0007c77e
 * Prototype: undefined FUN_0007c77e()
 */


int FUN_0007c77e(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *local_28;
  int *piStack_24;
  int local_20;
  int *local_1c;
  
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    iVar2 = 7;
  }
  else {
    local_28 = param_1;
    piStack_24 = param_2;
    local_20 = param_3;
    local_1c = (int *)param_4;
    iVar2 = FUN_0007c754(param_1,&local_28);
    piVar1 = local_28;
    if ((iVar2 == 0) && (piVar5 = (int *)param_2[1], local_28 <= piVar5)) {
      piVar4 = param_1;
      if (param_1 != (int *)0x0) {
        piVar4 = (int *)0x0;
        for (iVar2 = *param_1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
          local_20 = *param_2 + (int)piVar4;
          local_1c = piVar5;
          iVar3 = FUN_0007c6a0(iVar2,&local_20);
          if (iVar3 != 0) {
            param_2[1] = (int)piVar1;
            return iVar3;
          }
          piVar4 = (int *)((int)piVar4 + (int)local_1c);
          piVar5 = (int *)((int)piVar5 - (int)local_1c);
        }
      }
      iVar2 = 0;
      param_2[1] = (int)piVar4;
    }
    else {
      iVar2 = 1;
      param_2[1] = (int)local_28;
    }
  }
  return iVar2;
}



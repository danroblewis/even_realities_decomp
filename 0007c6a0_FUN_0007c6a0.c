/*
 * Function: FUN_0007c6a0
 * Entry:    0007c6a0
 * Prototype: undefined FUN_0007c6a0()
 */


int FUN_0007c6a0(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  if (((param_1 == 0) || (param_2 == (int *)0x0)) || (*param_2 == 0)) {
    return 7;
  }
  uVar6 = param_2[1];
  uVar1 = FUN_0007c41c();
  if (uVar6 < uVar1) {
    iVar2 = FUN_0007c41c(param_1);
    param_2[1] = iVar2;
  }
  else {
    local_30 = *param_2;
    local_2c = param_2[1];
    iVar3 = FUN_0007c5ba(param_1,&local_30);
    iVar2 = local_2c;
    if (iVar3 != 0) {
      return iVar3;
    }
    if (*(char *)(param_1 + 1) != '\0') {
      memcpy(*param_2 + local_2c,*(undefined4 *)(param_1 + 4));
      iVar2 = iVar2 + (uint)*(byte *)(param_1 + 1);
    }
    if (*(char *)(param_1 + 2) != '\0') {
      memcpy(*param_2 + iVar2,*(undefined4 *)(param_1 + 8));
      iVar2 = iVar2 + (uint)*(byte *)(param_1 + 2);
    }
    iVar7 = *param_2;
    iVar3 = param_2[1];
    uVar1 = FUN_0007c408(param_1);
    if (uVar1 <= (uint)(iVar3 - iVar2)) {
      uVar5 = 1;
      iVar3 = 0;
      while (iVar4 = FUN_0007c670(param_1,&local_28,uVar5), iVar4 != 0) {
        if (local_24 != 0) {
          memcpy(iVar2 + iVar3 + iVar7,local_28);
        }
        uVar5 = 0;
        iVar3 = iVar3 + local_24;
      }
      param_2[1] = iVar2 + iVar3;
      return 0;
    }
  }
  return 1;
}



/*
 * Function: FUN_000840cc
 * Entry:    000840cc
 * Prototype: undefined FUN_000840cc()
 */


int FUN_000840cc(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_1c;
  
  piVar5 = *(int **)(param_1 + 4);
  puVar4 = *(undefined4 **)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x10);
  local_1c = param_2;
  if ((*(char *)((int)piVar5 + 0x19) != -1) && (iVar1 = FUN_00084090(), iVar1 < 0)) {
    return iVar1;
  }
  if ((piVar5[2] != -0x80000000) && (iVar1 = FUN_00084068(param_1,piVar5[2]), iVar1 < 0)) {
    return iVar1;
  }
  if ((*piVar5 != -0x80000000) || (piVar5[1] != 0x7fffffff)) {
    pcVar2 = *(code **)(*(int *)(param_1 + 8) + 0x14);
    if (pcVar2 == (code *)0x0) {
      return -0x58;
    }
    iVar1 = (*pcVar2)(param_1,&local_1c);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = *piVar5;
    if (((local_1c < iVar1) || (iVar1 = piVar5[1], iVar1 < local_1c)) &&
       (iVar1 = FUN_00084068(param_1,iVar1), iVar1 < 0)) {
      return iVar1;
    }
  }
  if (param_2 == 0) {
    if ((*(byte *)((int)piVar5 + 0x1a) & 3) == 0) {
      return 0;
    }
    iVar1 = (*(code *)*puVar4)(param_1);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
  return 0;
}



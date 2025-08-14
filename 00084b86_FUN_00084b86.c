/*
 * Function: FUN_00084b86
 * Entry:    00084b86
 * Prototype: undefined FUN_00084b86()
 */


void FUN_00084b86(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  
  piVar6 = *(int **)(param_1 + 0x34);
  if (*(char *)(piVar6[3] + 0xce) != '\0') {
    return;
  }
  iVar7 = *piVar6;
  *(undefined4 *)(**(int **)(iVar7 + 4) + 0x308) = 0x10;
  iVar5 = piVar6[3];
  iVar3 = *(int *)(iVar5 + 0xb8);
  bVar8 = *(int *)(iVar5 + 0x6c) != iVar3;
  if (bVar8) {
    *(int *)(iVar5 + 0x6c) = iVar3;
    iVar5 = piVar6[3];
    iVar3 = *(int *)(iVar5 + 0x74);
  }
  if (bVar8) {
    *(int *)(iVar5 + 0x7c) = iVar3;
  }
  iVar3 = piVar6[3];
  iVar5 = *(int *)(iVar3 + 0x6c) - *(int *)(iVar3 + 0x70);
  if (iVar5 < 0) {
    *(int *)(iVar3 + 0xb8) = *(int *)(iVar3 + 0x70);
    iVar3 = piVar6[3];
    uVar1 = *(uint *)(iVar3 + 0x5c);
    uVar2 = *(uint *)(iVar3 + 0x60);
    if (uVar2 <= uVar1) goto LAB_00084bd2;
LAB_00084bea:
    if ((int)(uVar1 - uVar2) < 1) goto LAB_00084bd2;
    bVar8 = true;
    iVar4 = iVar5;
    iVar5 = uVar1 - uVar2;
  }
  else {
    uVar1 = *(uint *)(iVar3 + 0x5c);
    uVar2 = *(uint *)(iVar3 + 0x60);
    if (uVar1 < iVar5 + uVar2) goto LAB_00084bea;
    if (iVar5 == 0) goto LAB_00084bd2;
    iVar4 = *(int *)(iVar3 + 0x7c);
    bVar8 = false;
    if (*(int *)(iVar3 + 0x78) <= iVar4) {
      *(int *)(iVar3 + 0x7c) = iVar4 - *(int *)(iVar3 + 0x78);
      goto LAB_00084bd2;
    }
  }
  FUN_0008484e(iVar7,iVar5,iVar4,iVar3,param_4);
  *(int *)(piVar6[3] + 0x60) = *(int *)(piVar6[3] + 0x60) + iVar5;
  *(int *)(piVar6[3] + 0x70) = *(int *)(piVar6[3] + 0x70) + iVar5;
  if (bVar8) {
    FUN_0008673e(piVar6[3] + 0x80);
  }
LAB_00084bd2:
  *(undefined4 *)(**(int **)(iVar7 + 4) + 0x304) = 0x10;
  return;
}



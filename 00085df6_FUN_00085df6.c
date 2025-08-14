/*
 * Function: FUN_00085df6
 * Entry:    00085df6
 * Prototype: undefined FUN_00085df6()
 */


int FUN_00085df6(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint extraout_r2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 unaff_r4;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined8 uVar12;
  
  uVar3 = (uint)*(byte *)(param_1 + 4);
  if (uVar3 != 0) {
    iVar1 = FUN_00085dd2();
    if (iVar1 == 0) {
      return 0;
    }
    param_4 = 0;
    uVar3 = 0xffffffff;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  piVar9 = (int *)param_1[5];
  uVar12 = FUN_00085c12(piVar9,7,uVar3,param_4,param_4,unaff_r4);
  iVar2 = (int)((ulonglong)uVar12 >> 0x20);
  iVar1 = (int)uVar12;
  if (iVar1 != 0) {
    uVar10 = *param_1;
    uVar3 = param_1[2];
    if (piVar9[1] == 0) {
      uVar10 = 2;
    }
    else {
      puVar4 = (undefined4 *)(iVar2 << 0x1f);
      if ((int)puVar4 < 0) {
        puVar5 = (undefined4 *)((piVar9[1] + -1) * 0x18 + *piVar9);
        if ((-1 < iVar2 << 0x1d) && (*(char *)((int)puVar5 + 0x11) != '\0')) {
          return 0;
        }
        puVar6 = puVar5;
        puVar7 = param_1;
        do {
          puVar4 = puVar6 + 1;
          *puVar7 = *puVar6;
          puVar6 = puVar4;
          puVar7 = puVar7 + 1;
        } while (puVar4 != puVar5 + 6);
      }
      iVar8 = iVar2 << 0x1e;
      bVar11 = iVar8 < 0;
      if (bVar11) {
        iVar8 = param_1[5];
        puVar4 = (undefined4 *)(*(int *)(iVar8 + 4) + -1);
      }
      if (bVar11) {
        *(undefined4 **)(iVar8 + 4) = puVar4;
      }
      if (uVar3 <= extraout_r2) {
        if (iVar2 << 0x1d < 0) {
          *param_1 = uVar10;
          return iVar1;
        }
        return iVar1;
      }
      uVar10 = 4;
    }
    FUN_00085c26(param_1,uVar10);
  }
  return 0;
}



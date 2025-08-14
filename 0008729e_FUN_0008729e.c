/*
 * Function: FUN_0008729e
 * Entry:    0008729e
 * Prototype: undefined FUN_0008729e()
 */


void FUN_0008729e(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = (int)param_2 >> 5;
  if (iVar2 < iVar3) {
    puVar5 = (uint *)(param_1 + 0x14);
    param_2 = param_2 & 0x1f;
    puVar6 = puVar5 + iVar3;
    puVar4 = puVar5 + iVar2;
    if (param_2 == 0) {
      puVar7 = (uint *)(param_1 + 0x10);
      for (puVar1 = puVar4; puVar1 < puVar6; puVar1 = puVar1 + 1) {
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar1;
      }
      iVar2 = (iVar3 - iVar2) * 4;
      if (puVar6 < (uint *)((int)puVar4 - 3U)) {
        iVar2 = 0;
      }
      puVar4 = (uint *)(iVar2 + (int)puVar5);
    }
    else {
      uVar8 = puVar5[iVar2];
      puVar1 = puVar5;
      puVar7 = puVar4;
      while( true ) {
        uVar8 = uVar8 >> param_2;
        puVar7 = puVar7 + 1;
        if (puVar6 <= puVar7) break;
        *puVar1 = *puVar7 << (0x20 - param_2 & 0xff) | uVar8;
        uVar8 = *puVar7;
        puVar1 = puVar1 + 1;
      }
      iVar2 = (iVar3 - iVar2) * 4 + -4;
      if (puVar6 < (uint *)((int)puVar4 + 1U)) {
        iVar2 = 0;
      }
      puVar4 = (uint *)((int)puVar5 + iVar2);
      *(uint *)((int)puVar5 + iVar2) = uVar8;
      if (uVar8 != 0) {
        puVar4 = puVar4 + 1;
      }
    }
    *(int *)(param_1 + 0x10) = (int)puVar4 - (int)puVar5 >> 2;
    if (puVar4 != puVar5) {
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



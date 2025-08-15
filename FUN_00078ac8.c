/*
 * Function: FUN_00078ac8
 * Entry:    00078ac8
 * Prototype: undefined FUN_00078ac8()
 */


int FUN_00078ac8(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int extraout_r2;
  int extraout_r3;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  
  iVar1 = format_float_exponent(param_2,param_3,param_3,param_4,param_1,param_2,param_3);
  bVar16 = iVar1 < 0;
  if (iVar1 == 0) {
    iVar2 = FUN_000785d4(param_1,0);
    iVar3 = iVar2;
    if (iVar2 != 0) goto LAB_00078af6;
    uVar4 = 0x232;
  }
  else {
    iVar3 = extraout_r3;
    if (bVar16) {
      iVar1 = 1;
      iVar3 = param_2;
      param_2 = param_3;
    }
    if (!bVar16) {
      iVar1 = 0;
      iVar3 = param_3;
    }
    iVar2 = FUN_000785d4(param_1,*(undefined4 *)(param_2 + 4));
    if (iVar2 != 0) {
      iVar13 = *(int *)(param_2 + 0x10);
      iVar11 = *(int *)(iVar3 + 0x10);
      *(int *)(iVar2 + 0xc) = iVar1;
      puVar6 = (uint *)(param_2 + 0x10);
      puVar10 = (uint *)(iVar3 + 0x14) + iVar11;
      puVar14 = (uint *)(param_2 + 0x14 + iVar13 * 4);
      iVar1 = 0;
      puVar12 = (uint *)(iVar2 + 0x14);
      puVar8 = (uint *)(iVar3 + 0x14);
      do {
        puVar15 = puVar8 + 1;
        puVar6 = puVar6 + 1;
        uVar7 = ((*puVar6 & 0xffff) - (*puVar8 & 0xffff)) + iVar1;
        iVar11 = ((*puVar6 >> 0x10) - (*puVar8 >> 0x10)) + ((int)uVar7 >> 0x10);
        iVar1 = iVar11 >> 0x10;
        *puVar12 = uVar7 & 0xffff | iVar11 * 0x10000;
        puVar12 = puVar12 + 1;
        puVar8 = puVar15;
      } while (puVar15 < puVar10);
      iVar11 = ((int)puVar10 + (-0x15 - iVar3) & 0xfffffffcU) + 4;
      if (puVar10 < (uint *)(iVar3 + 0x15)) {
        iVar11 = 4;
      }
      puVar8 = (uint *)(iVar11 + iVar2 + 0x14);
      puVar10 = (uint *)(param_2 + 0x14 + iVar11);
      puVar12 = puVar8;
      for (puVar6 = puVar10; puVar6 < puVar14; puVar6 = puVar6 + 1) {
        uVar7 = *puVar6;
        uVar5 = uVar7 + iVar1;
        iVar3 = (uVar7 >> 0x10) + ((int)((uVar7 & 0xffff) + iVar1) >> 0x10);
        iVar1 = iVar3 >> 0x10;
        *puVar12 = uVar5 & 0xffff | iVar3 * 0x10000;
        puVar12 = puVar12 + 1;
      }
      uVar7 = (int)puVar14 + (3 - (int)puVar10) & 0xfffffffc;
      if (puVar14 < (uint *)((int)puVar10 + -3)) {
        uVar7 = 0;
      }
      piVar9 = (int *)((int)puVar8 + uVar7);
      while (piVar9 = piVar9 + -1, *piVar9 == 0) {
        iVar13 = iVar13 + -1;
      }
      *(int *)(iVar2 + 0x10) = iVar13;
      return iVar2;
    }
    uVar4 = 0x240;
  }
  iVar2 = FUN_00076a94("/__w/_temp/workspace/build/.build/HOST-x86_64-w64-mingw32/arm-zephyr-eabi/src/newlib-nano/newlib/libc/stdlib/mprec.c"
                       ,uVar4,0,"Balloc succeeded");
  iVar3 = extraout_r2;
LAB_00078af6:
  *(undefined4 *)(iVar2 + 0x10) = 1;
  *(int *)(iVar2 + 0x14) = iVar1;
  return iVar3;
}



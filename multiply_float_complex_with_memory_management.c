/*
 * Function: multiply_float_complex_with_memory_management
 * Entry:    000787e8
 * Prototype: undefined multiply_float_complex_with_memory_management()
 */


void multiply_float_complex_with_memory_management(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  
  iVar5 = param_2;
  if (*(int *)(param_3 + 0x10) <= *(int *)(param_2 + 0x10)) {
    iVar5 = param_3;
    param_3 = param_2;
  }
  iVar13 = *(int *)(param_3 + 0x10);
  iVar11 = *(int *)(iVar5 + 0x10);
  iVar1 = *(int *)(param_3 + 4);
  iVar8 = iVar13 + iVar11;
  if (*(int *)(param_3 + 8) < iVar8) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = manage_float_context_with_memory_allocation(param_1,iVar1);
  if (iVar1 == 0) {
    iVar1 = process_data_loop_with_validation_and_retry
                      ("/__w/_temp/workspace/build/.build/HOST-x86_64-w64-mingw32/arm-zephyr-eabi/src/newlib-nano/newlib/libc/stdlib/mprec.c"
                       ,0x15d,0,"Balloc succeeded");
  }
  puVar7 = (uint *)(iVar1 + 0x14);
  puVar10 = puVar7 + iVar8;
  for (puVar3 = puVar7; puVar3 < puVar10; puVar3 = puVar3 + 1) {
    *puVar3 = 0;
  }
  puVar2 = (ushort *)(iVar5 + 0x14);
  puVar3 = (uint *)(param_3 + 0x14 + iVar13 * 4);
  puVar4 = puVar2 + iVar11 * 2;
  iVar5 = ((int)puVar3 + (-0x15 - param_3) & 0xfffffffcU) + 4;
  if (puVar3 < (uint *)(param_3 + 0x15)) {
    iVar5 = 4;
  }
  while (puVar2 < puVar4) {
    uVar14 = (uint)*puVar2;
    if (uVar14 != 0) {
      uVar15 = 0;
      puVar12 = puVar7;
      puVar17 = (uint *)(param_3 + 0x14);
      do {
        puVar16 = puVar17 + 1;
        uVar6 = uVar14 * (*puVar17 & 0xffff) + (*puVar12 & 0xffff) + uVar15;
        uVar9 = uVar14 * (*puVar17 >> 0x10) + (*puVar12 >> 0x10) + (uVar6 >> 0x10);
        uVar15 = uVar9 >> 0x10;
        *puVar12 = uVar6 & 0xffff | uVar9 * 0x10000;
        puVar12 = puVar12 + 1;
        puVar17 = puVar16;
      } while (puVar16 < puVar3);
      *(uint *)((int)puVar7 + iVar5) = uVar15;
    }
    uVar14 = (uint)puVar2[1];
    if (uVar14 != 0) {
      uVar15 = *puVar7;
      uVar6 = 0;
      puVar12 = (uint *)(param_3 + 0x14);
      puVar17 = puVar7;
      do {
        uVar6 = uVar14 * (ushort)*puVar12 + (uint)*(ushort *)((int)puVar17 + 2) + uVar6;
        *puVar17 = uVar15 & 0xffff | uVar6 * 0x10000;
        puVar16 = puVar12 + 1;
        uVar15 = uVar14 * (*puVar12 >> 0x10) + (uint)(ushort)puVar17[1] + (uVar6 >> 0x10);
        uVar6 = uVar15 >> 0x10;
        puVar12 = puVar16;
        puVar17 = puVar17 + 1;
      } while (puVar16 < puVar3);
      *(uint *)((int)puVar7 + iVar5) = uVar15;
    }
    puVar7 = puVar7 + 1;
    puVar2 = puVar2 + 2;
  }
  while ((0 < iVar8 && (puVar10 = puVar10 + -1, *puVar10 == 0))) {
    iVar8 = iVar8 + -1;
  }
  *(int *)(iVar1 + 0x10) = iVar8;
  return;
}



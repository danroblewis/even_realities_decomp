/*
 * Function: shift_float_left_with_memory_management
 * Entry:    000789f0
 * Prototype: undefined shift_float_left_with_memory_management()
 */


int shift_float_left_with_memory_management(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  int extraout_r1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int extraout_r3;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  
  uVar4 = (int)param_3 >> 5;
  iVar1 = *(int *)(param_2 + 4);
  iVar9 = *(int *)(param_2 + 0x10) + uVar4;
  iVar5 = *(int *)(param_2 + 8);
  iVar8 = iVar9 + 1;
  do {
    if (iVar8 <= iVar5) {
      iVar1 = manage_float_context_with_memory_allocation(param_1,iVar1);
      if (iVar1 != 0) {
        puVar3 = (undefined4 *)(iVar1 + 0x10);
        for (iVar5 = 0; iVar5 < (int)uVar4; iVar5 = iVar5 + 1) {
          puVar3 = puVar3 + 1;
          *puVar3 = 0;
        }
        puVar6 = (uint *)(param_2 + 0x14);
        uVar10 = param_3 & 0x1f;
        puVar2 = (uint *)(iVar1 + 0x14 + (uVar4 & ~((int)param_3 >> 0x1f)) * 4);
        puVar12 = puVar6 + *(int *)(param_2 + 0x10);
        if (uVar10 == 0) {
          puVar2 = puVar2 + -1;
          do {
            puVar11 = puVar6 + 1;
            puVar2 = puVar2 + 1;
            *puVar2 = *puVar6;
            puVar6 = puVar11;
          } while (puVar11 < puVar12);
        }
        else {
          uVar4 = 0;
          puVar11 = puVar2;
          do {
            *puVar11 = *puVar6 << uVar10 | uVar4;
            puVar7 = puVar6 + 1;
            uVar4 = *puVar6 >> (0x20 - uVar10 & 0xff);
            puVar6 = puVar7;
            puVar11 = puVar11 + 1;
          } while (puVar7 < puVar12);
          iVar5 = ((int)puVar12 + (-0x15 - param_2) & 0xfffffffcU) + 4;
          if (puVar12 < (uint *)(param_2 + 0x15)) {
            iVar5 = 4;
          }
          *(uint *)((int)puVar2 + iVar5) = uVar4;
          if (uVar4 != 0) {
            iVar8 = iVar9 + 2;
          }
        }
        *(int *)(iVar1 + 0x10) = iVar8 + -1;
        cleanup_float_context_with_memory_management(param_1,param_2);
        return iVar1;
      }
      process_data_loop_with_validation_and_retry
                ("/__w/_temp/workspace/build/.build/HOST-x86_64-w64-mingw32/arm-zephyr-eabi/src/newlib-nano/newlib/libc/stdlib/mprec.c"
                 ,0x1d9,0,"Balloc succeeded");
      iVar1 = extraout_r1;
      iVar5 = extraout_r3;
    }
    iVar1 = iVar1 + 1;
    iVar5 = iVar5 << 1;
  } while( true );
}



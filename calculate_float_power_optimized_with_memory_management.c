/*
 * Function: calculate_float_power_optimized_with_memory_management
 * Entry:    0007893c
 * Prototype: undefined calculate_float_power_optimized_with_memory_management()
 */


undefined4
calculate_float_power_optimized_with_memory_management
          (int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((param_3 & 3) != 0) {
    param_2 = multiply_float_with_memory_management
                        (param_1,param_2,*(undefined4 *)(&DAT_00098774 + ((param_3 & 3) - 1) * 4),0,
                         param_4);
  }
  iVar3 = (int)param_3 >> 2;
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      puVar1 = (undefined4 *)malloc_maybe(0x10);
      *(undefined4 **)(param_1 + 0x24) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)
                 process_data_loop_with_validation_and_retry
                           ("/__w/_temp/workspace/build/.build/HOST-x86_64-w64-mingw32/arm-zephyr-eabi/src/newlib-nano/newlib/libc/stdlib/mprec.c"
                            ,0x1ae,0,"REENT malloc succeeded");
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
    }
    iVar5 = *(int *)(param_1 + 0x24);
    puVar1 = *(undefined4 **)(iVar5 + 8);
    uVar4 = param_2;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)initialize_float_context_simple(param_1,0x271);
      *(undefined4 **)(iVar5 + 8) = puVar1;
      *puVar1 = 0;
    }
    while( true ) {
      puVar2 = puVar1;
      param_2 = uVar4;
      if (iVar3 << 0x1f < 0) {
        param_2 = multiply_float_complex_with_memory_management(param_1,uVar4,puVar2);
        cleanup_float_context_with_memory_management(param_1,uVar4);
      }
      iVar3 = iVar3 >> 1;
      if (iVar3 == 0) break;
      puVar1 = (undefined4 *)*puVar2;
      uVar4 = param_2;
      if ((undefined4 *)*puVar2 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)multiply_float_complex_with_memory_management(param_1,puVar2,puVar2);
        *puVar2 = puVar1;
        *puVar1 = 0;
      }
    }
  }
  return param_2;
}



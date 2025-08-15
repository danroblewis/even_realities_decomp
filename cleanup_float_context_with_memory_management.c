/*
 * Function: cleanup_float_context_with_memory_management
 * Entry:    00078654
 * Prototype: undefined cleanup_float_context_with_memory_management()
 */


void cleanup_float_context_with_memory_management(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    puVar1 = (undefined4 *)malloc_maybe(0x10);
    *(undefined4 **)(param_1 + 0x24) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)
               process_data_loop_with_validation_and_retry
                         ("/__w/_temp/workspace/build/.build/HOST-x86_64-w64-mingw32/arm-zephyr-eabi/src/newlib-nano/newlib/libc/stdlib/mprec.c"
                          ,0x8a,0,"REENT malloc succeeded");
    }
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0xc);
    *param_2 = *(undefined4 *)(iVar2 + param_2[1] * 4);
    *(undefined4 **)(iVar2 + param_2[1] * 4) = param_2;
  }
  return;
}



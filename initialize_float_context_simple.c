/*
 * Function: initialize_float_context_simple
 * Entry:    000787bc
 * Prototype: undefined initialize_float_context_simple()
 */


void initialize_float_context_simple(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = manage_float_context_with_memory_allocation(param_1,1);
  if (iVar1 == 0) {
    iVar1 = process_data_loop_with_validation_and_retry
                      ("/__w/_temp/workspace/build/.build/HOST-x86_64-w64-mingw32/arm-zephyr-eabi/src/newlib-nano/newlib/libc/stdlib/mprec.c"
                       ,0x140,0,"Balloc succeeded");
  }
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = 1;
  return;
}



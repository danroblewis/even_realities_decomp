/*
 * Function: initialize_memory_buffer_with_zero_fill
 * Entry:    000730b4
 * Prototype: undefined initialize_memory_buffer_with_zero_fill()
 */


void initialize_memory_buffer_with_zero_fill
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","queue != ((void *)0)",
                 "WEST_TOPDIR/zephyr/kernel/work.c",0x2b9);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/kernel/work.c",0x2b9);
  }
  fill_memory_buffer(param_1,0,0xf8,param_4,param_4);
  return;
}



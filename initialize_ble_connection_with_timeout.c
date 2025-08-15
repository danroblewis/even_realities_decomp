/*
 * Function: initialize_ble_connection_with_timeout
 * Entry:    00071eac
 * Prototype: undefined initialize_ble_connection_with_timeout(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined param_10, undefined4 param_11)
 */


int initialize_ble_connection_with_timeout(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1f;
  }
  if (uVar2 != 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!arch_is_in_isr()",
                 "WEST_TOPDIR/zephyr/kernel/thread.c",0x28c);
    DEBUG_PRINT2("\tThreads may not be created in ISRs\n");
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/kernel/thread.c",0x28c);
  }
  initialize_ble_connection_structure();
  if (in_stack_0000001c != -1 || in_stack_00000018 != -1) {
    if (in_stack_0000001c == 0 && in_stack_00000018 == 0) {
      update_ble_connection_state_flags(param_1);
    }
    else {
      schedule_ble_connection_timeout_with_priority
                (param_1 + 0x18,&LAB_00086660_1,in_stack_00000018,in_stack_0000001c,
                 in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                 in_stack_00000010,uVar2);
    }
  }
  return param_1;
}



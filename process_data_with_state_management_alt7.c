/*
 * Function: process_data_with_state_management_alt7
 * Entry:    00052c40
 * Prototype: undefined process_data_with_state_management_alt7()
 */


undefined4 process_data_with_state_management_alt7(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = param_2;
  iVar1 = check_driver_ready(&DAT_00087b90);
  if (iVar1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","device_is_ready(entropy_dev)",
                 "WEST_TOPDIR/zephyr/subsys/random/rand32_entropy_device.c",0x15,param_1);
    DEBUG_PRINT2("\tEntropy device %s not ready\n","crypto@50844000");
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/random/rand32_entropy_device.c",0x15);
  }
  iVar1 = process_data_with_callback_execution_alt6(&local_c);
  if (iVar1 < 0) {
    local_c = get_high_resolution_timer_wrapper();
  }
  return local_c;
}



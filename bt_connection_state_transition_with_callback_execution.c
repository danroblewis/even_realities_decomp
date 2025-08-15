/*
 * Function: bt_connection_state_transition_with_callback_execution
 * Entry:    000569ec
 * Prototype: undefined bt_connection_state_transition_with_callback_execution()
 */


int bt_connection_state_transition_with_callback_execution
              (undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_20;
  char *local_1c;
  
  iVar1 = check_privilege_level();
  if (iVar1 != 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!k_is_in_isr()",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x55f);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x55f);
  }
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_20003a7c;
  }
  iVar1 = process_ble_connection_data(param_1,&DAT_20003a7c,param_3,param_4);
  if (iVar1 == 0) {
    local_1c = "Unable to allocate buffer within timeout";
    local_20 = 2;
    bt_log_connection_error(&DAT_00088108,0x1080,&local_20);
  }
  else {
    calculate_buffer_offset(iVar1 + 0xc,param_2 + 5);
  }
  return iVar1;
}



/*
 * Function: process_data_and_send_response
 * Entry:    00033abc
 * Prototype: undefined process_data_and_send_response()
 */


void process_data_and_send_response(int param_1,undefined1 *param_2,int param_3)

{
  FUN_0007c1fe(param_1,param_2,1,0x1e);
  *(undefined1 *)(param_3 + 1) = 0xc9;
  *(undefined1 *)(param_3 + 2) = *param_2;
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): BLE_REQ_GET_ESB_CHANNEL: %d\n","get_notification_counts_cmd_process");
    }
    else {
      handle_heartbeat();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00033af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xc))(param_3,0x14);
  return;
}



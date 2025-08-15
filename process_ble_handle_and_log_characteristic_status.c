/*
 * Function: process_ble_handle_and_log_characteristic_status
 * Entry:    00082fd2
 * Prototype: undefined process_ble_handle_and_log_characteristic_status()
 */


void process_ble_handle_and_log_characteristic_status
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  
  if (param_2 != 0) {
    process_ble_handle_mapping_and_log(*(undefined1 *)(param_1 + 8),param_1 + 0x90);
    log_ble_characteristic_status(*(undefined1 *)(param_1 + 8),param_1 + 0x90,extraout_r2,param_4);
    return;
  }
  return;
}



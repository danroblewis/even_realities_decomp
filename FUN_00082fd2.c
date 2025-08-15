/*
 * Function: FUN_00082fd2
 * Entry:    00082fd2
 * Prototype: undefined FUN_00082fd2()
 */


void FUN_00082fd2(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  
  if (param_2 != 0) {
    process_ble_handle_mapping_and_log(*(undefined1 *)(param_1 + 8),param_1 + 0x90);
    log_ble_characteristic_status(*(undefined1 *)(param_1 + 8),param_1 + 0x90,extraout_r2,param_4);
    return;
  }
  return;
}



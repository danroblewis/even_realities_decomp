/*
 * Function: initialize_ble_characteristic_value_buffer
 * Entry:    00059e78
 * Prototype: undefined initialize_ble_characteristic_value_buffer()
 */


void initialize_ble_characteristic_value_buffer
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 8) != 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","gatt_sub_is_empty(sub)",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0xd5c);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0xd5c);
  }
  copy_data_structure_fields(param_1 + 1,&DAT_000f2b3a,param_3,param_4);
  return;
}



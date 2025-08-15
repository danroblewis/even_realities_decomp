/*
 * Function: process_ble_characteristic_value_change_with_callback_execution_and_parameter
 * Entry:    00059344
 * Prototype: undefined process_ble_characteristic_value_change_with_callback_execution_and_parameter()
 */


undefined4
process_ble_characteristic_value_change_with_callback_execution_and_parameter
          (undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *local_30 [2];
  int local_28;
  char local_24;
  
  iVar1 = FUN_00082ec8(*(undefined4 *)*param_1,1);
  if (iVar1 == 0) {
    iVar1 = FUN_00082236(param_1 + 0x48,5);
    if (iVar1 == 0) {
      return 0x12;
    }
  }
  else {
    fill_memory_buffer(local_30,0,0x10);
    local_28 = process_ble_characteristic_value_change_with_validation_and_callback(param_1,0xf,0);
    if (local_28 == 0) {
      return 0x11;
    }
    local_30[0] = param_1;
    do {
      if (*(ushort *)(param_2 + 0x10) < 2) {
        FUN_000821a4(param_1,local_28);
        return 0;
      }
      uVar2 = read_ble_data_uint16(param_2 + 0xc);
      local_24 = '\x01';
      FUN_00081cee(uVar2,uVar2,&LAB_00081f78_1,local_30);
    } while (local_24 == '\0');
    bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation_and_callback_execution
              (*(undefined4 *)(local_28 + 0x18));
    decrement_reference_count_and_cleanup_memory(local_28);
    FUN_000821f4(param_1,0xe,uVar2,local_24);
  }
  return 0;
}



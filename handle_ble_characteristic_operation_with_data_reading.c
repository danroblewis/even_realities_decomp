/*
 * Function: handle_ble_characteristic_operation_with_data_reading
 * Entry:    00081c02
 * Prototype: undefined handle_ble_characteristic_operation_with_data_reading()
 */


undefined4
handle_ble_characteristic_operation_with_data_reading
          (undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = read_ble_data_uint16(param_2 + 0xc);
  handle_ble_characteristic_operation_with_handle_validation
            (*(undefined4 *)*param_1,uVar1,*(undefined4 *)(param_2 + 0xc),
             *(undefined2 *)(param_2 + 0x10),param_4);
  return 0;
}



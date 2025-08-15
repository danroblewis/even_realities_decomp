/*
 * Function: initialize_ble_attribute_data
 * Entry:    0005a540
 * Prototype: undefined initialize_ble_attribute_data()
 */


void initialize_ble_attribute_data
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  set_bits_in_value(param_2 + 0x14,8,param_3,param_4,param_1,param_2,param_3);
  handle_ble_connection_state_change_with_characteristic_processing
            (param_1,0x5a1b1,param_2,0x82b6f,0x12,4);
  return;
}



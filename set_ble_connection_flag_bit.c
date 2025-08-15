/*
 * Function: set_ble_connection_flag_bit
 * Entry:    000830a4
 * Prototype: undefined set_ble_connection_flag_bit()
 */


undefined4
set_ble_connection_flag_bit
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  set_bit_in_value(param_1,0xe,param_3,param_4,param_4);
  return 0;
}



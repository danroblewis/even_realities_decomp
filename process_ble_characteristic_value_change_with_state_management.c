/*
 * Function: process_ble_characteristic_value_change_with_state_management
 * Entry:    00058c34
 * Prototype: undefined process_ble_characteristic_value_change_with_state_management(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined2 param_5, undefined4 param_6, undefined2 param_7)
 */


char process_ble_characteristic_value_change_with_state_management
               (undefined4 *param_1,int param_2,int param_3,int param_4,undefined2 param_5,
               undefined4 param_6,undefined2 param_7)

{
  int iVar1;
  undefined4 local_30;
  int local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  char local_1c;
  
  iVar1 = param_2;
  if (param_2 != 0) {
    iVar1 = 1;
  }
  iVar1 = FUN_00082ec8(*(undefined4 *)*param_1,iVar1);
  if (iVar1 == 0) {
    iVar1 = FUN_00082236(param_1 + 0x48,5);
    if (iVar1 == 0) {
      return '\x12';
    }
  }
  else {
    if (param_4 == 0) {
      return '\x01';
    }
    fill_memory_buffer(&local_30,0,0x18);
    if ((param_3 != 0) &&
       (local_2c = bt_connection_disconnect_with_callback_and_parameter_and_state_validation_and_callback_execution_and_parameter_and_state_management
                             (param_1,param_3,0), local_2c == 0)) {
      return '\x11';
    }
    local_30 = *(undefined4 *)*param_1;
    local_1e = param_5;
    local_28 = (undefined1)param_2;
    local_24 = param_6;
    local_20 = param_7;
    local_1c = '\x01';
    FUN_00081cee(param_4,param_4,0x81c8d,&local_30);
    if (local_1c == '\0') {
      if (local_2c != 0) {
        FUN_000821a4(param_1);
      }
    }
    else {
      if (param_3 != 0) {
        bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation_and_callback_execution
                  (*(undefined4 *)(local_2c + 0x18));
        decrement_reference_count_and_cleanup_memory(local_2c);
        FUN_000821f4(param_1,param_2,param_4,local_1c);
      }
      if (param_2 == 0x18) {
        return local_1c;
      }
    }
  }
  return '\0';
}



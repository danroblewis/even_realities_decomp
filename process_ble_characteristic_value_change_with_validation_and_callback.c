/*
 * Function: process_ble_characteristic_value_change_with_validation_and_callback
 * Entry:    00058f34
 * Prototype: undefined process_ble_characteristic_value_change_with_validation_and_callback()
 */


undefined4
process_ble_characteristic_value_change_with_validation_and_callback
          (int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_30;
  char *local_2c;
  int iStack_28;
  uint local_24;
  uint uStack_20;
  undefined4 uStack_18;
  
  uStack_20 = param_3 + 1;
  local_24 = (uint)*(ushort *)(param_1 + 0x2e);
  if ((uint)*(ushort *)(param_1 + 0x1e) <= (uint)*(ushort *)(param_1 + 0x2e)) {
    local_24 = (uint)*(ushort *)(param_1 + 0x1e);
  }
  uStack_18 = param_4;
  if (local_24 < uStack_20) {
    local_2c = "ATT channel %p MTU too small for RSP (%u < %u)";
    local_30 = 5;
    iStack_28 = param_1;
    FUN_00081ddc(&DAT_00088100,0x2880,&local_30);
    uVar1 = 0;
  }
  else {
    uVar1 = bt_connection_disconnect_with_callback_and_parameter_and_state_validation_and_callback_execution_and_parameter_and_state_management
                      ();
  }
  return uVar1;
}



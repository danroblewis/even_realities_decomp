/*
 * Function: clear_all_ble_connection_fields
 * Entry:    0008539a
 * Prototype: undefined clear_all_ble_connection_fields()
 */


undefined4 clear_all_ble_connection_fields(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_c;
  
  local_c = 0;
  uVar1 = clear_ble_connection_field(param_1,param_2,0x148,&local_c,param_1);
  uVar1 = clear_ble_connection_field(uVar1,param_2,0x104);
  uVar1 = clear_ble_connection_field(uVar1,param_2,0x124);
  uVar1 = clear_ble_connection_field(uVar1,param_2,0x150);
  uVar1 = clear_ble_connection_field(uVar1,param_2,0x14c);
  uVar1 = clear_ble_connection_field(uVar1,param_2,0x160);
  clear_ble_connection_field(uVar1,param_2,0x15c);
  return local_c;
}



/*
 * Function: FUN_00082282
 * Entry:    00082282
 * Prototype: undefined FUN_00082282()
 */


void FUN_00082282(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = read_ble_data_uint16(param_2 + 0xc);
  process_ble_characteristic_value_change_with_state_management
            (param_1,0x12,0x13,uVar1,0,*(undefined4 *)(param_2 + 0xc),
             *(undefined2 *)(param_2 + 0x10));
  return;
}



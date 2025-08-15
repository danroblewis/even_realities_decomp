/*
 * Function: FUN_000821a4
 * Entry:    000821a4
 * Prototype: undefined FUN_000821a4()
 */


void FUN_000821a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  
  iVar1 = process_ble_characteristic_value_change();
  if (iVar1 != 0) {
    initialize_debug_system_with_validation(param_1 + 0x128,param_2,extraout_r2,param_4);
    return;
  }
  return;
}



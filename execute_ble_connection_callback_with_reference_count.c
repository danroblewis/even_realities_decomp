/*
 * Function: execute_ble_connection_callback_with_reference_count
 * Entry:    000825d4
 * Prototype: undefined execute_ble_connection_callback_with_reference_count(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void execute_ble_connection_callback_with_reference_count
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               int param_5)

{
  char cVar1;
  
  if (*(code **)(param_5 + 8) != (code *)0x0) {
    (**(code **)(param_5 + 8))(param_1,param_5,param_2);
  }
  cVar1 = *(char *)(param_5 + 0x16) + -1;
  *(char *)(param_5 + 0x16) = cVar1;
  if ((*(code **)(param_5 + 0xc) != (code *)0x0) && (cVar1 == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000825f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0xc))(param_5);
    return;
  }
  return;
}



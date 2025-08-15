/*
 * Function: bt_connection_disconnect_with_callback_execution
 * Entry:    00056e34
 * Prototype: undefined bt_connection_disconnect_with_callback_execution()
 */


void bt_connection_disconnect_with_callback_execution
               (undefined1 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = validate_and_process_ble_characteristics_with_parameter_validation_and_callback
                    (&DAT_20006138,1,param_3,param_4,param_4);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 8) = param_1;
    *(undefined4 *)(iVar1 + 0x90) = *param_2;
    *(undefined2 *)(iVar1 + 0x94) = *(undefined2 *)(param_2 + 1);
    *(undefined1 *)(iVar1 + 0x96) = *(undefined1 *)((int)param_2 + 6);
    *(undefined1 *)(iVar1 + 9) = 2;
    *(undefined1 *)(iVar1 + 10) = 2;
    *(undefined1 *)(iVar1 + 2) = 1;
    *(undefined4 *)(iVar1 + 0xa8) = 0x280018;
  }
  return;
}



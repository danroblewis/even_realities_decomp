/*
 * Function: bt_connection_disconnect_with_callback_and_parameter_and_state_validation_and_callback_execution
 * Entry:    000579b4
 * Prototype: undefined bt_connection_disconnect_with_callback_and_parameter_and_state_validation_and_callback_execution()
 */


void bt_connection_disconnect_with_callback_and_parameter_and_state_validation_and_callback_execution
               (uint param_1)

{
  int *piVar1;
  
  for (piVar1 = (int *)DAT_2000ad2c; (piVar1 != (int *)0x0 && (*(ushort *)(piVar1 + -2) != param_1))
      ; piVar1 = (int *)*piVar1) {
  }
  return;
}



/*
 * Function: cleanup_ble_connection_list
 * Entry:    00082572
 * Prototype: undefined cleanup_ble_connection_list()
 */


void cleanup_ble_connection_list(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation_and_callback_execution_and_parameter
                    ();
  if (iVar1 != 0) {
    for (piVar2 = *(int **)(iVar1 + 0x30); piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      FUN_00081e14(piVar2 + -0x1c,5);
    }
  }
  return;
}



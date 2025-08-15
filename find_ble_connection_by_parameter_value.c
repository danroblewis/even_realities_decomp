/*
 * Function: find_ble_connection_by_parameter_value
 * Entry:    0008253a
 * Prototype: undefined find_ble_connection_by_parameter_value()
 */


int find_ble_connection_by_parameter_value(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation_and_callback_execution_and_parameter
                            ();
  if (piVar1 != (int *)0x0) {
    for (piVar2 = *(int **)((int)piVar1 + 0x30); piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      if (*(int *)(piVar2[-0x1b] + 0x18) == param_2) {
        return piVar2[-0x1b];
      }
    }
    for (piVar1 = *(int **)((int)piVar1 + 4); (piVar1 != (int *)0x0 && (piVar1[6] != param_2));
        piVar1 = (int *)*piVar1) {
    }
  }
  return (int)piVar1;
}



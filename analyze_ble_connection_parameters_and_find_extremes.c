/*
 * Function: analyze_ble_connection_parameters_and_find_extremes
 * Entry:    000823fa
 * Prototype: undefined analyze_ble_connection_parameters_and_find_extremes()
 */


int * analyze_ble_connection_parameters_and_find_extremes(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation_and_callback_execution_and_parameter
                            ();
  if ((piVar1 != (int *)0x0) && (piVar2 = (int *)piVar1[0xc], piVar1 = piVar2, piVar2 != (int *)0x0)
     ) {
    iVar3 = *piVar2;
    if (iVar3 != 0) {
      iVar3 = iVar3 + -400;
    }
    piVar1 = (int *)(uint)*(ushort *)((int)piVar2 - 0x172);
    if ((int *)(uint)*(ushort *)((int)piVar2 - 0x162) <=
        (int *)(uint)*(ushort *)((int)piVar2 - 0x172)) {
      piVar1 = (int *)(uint)*(ushort *)((int)piVar2 - 0x162);
    }
    if (iVar3 != 0) {
      while( true ) {
        piVar2 = (int *)(uint)*(ushort *)(iVar3 + 0x1e);
        piVar4 = (int *)(uint)*(ushort *)(iVar3 + 0x2e);
        if (*(int *)(iVar3 + 400) == 0) break;
        if (piVar2 <= piVar4) {
          piVar4 = piVar2;
        }
        if (piVar1 < piVar4) {
          piVar1 = piVar4;
        }
        iVar3 = *(int *)(iVar3 + 400) + -400;
      }
      if (piVar4 <= piVar2) {
        piVar2 = piVar4;
      }
      if (piVar1 < piVar2) {
        piVar1 = piVar2;
      }
    }
  }
  return piVar1;
}



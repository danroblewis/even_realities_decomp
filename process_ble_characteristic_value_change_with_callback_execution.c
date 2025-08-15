/*
 * Function: process_ble_characteristic_value_change_with_callback_execution
 * Entry:    00058eb0
 * Prototype: undefined process_ble_characteristic_value_change_with_callback_execution()
 */


undefined4
process_ble_characteristic_value_change_with_callback_execution
          (undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_28;
  char *local_24;
  uint uStack_20;
  
  iVar1 = bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation_and_callback_execution_and_parameter
                    ();
  if (iVar1 != 0) {
    piVar5 = *(int **)(iVar1 + 0x30);
    if (piVar5 == (int *)0x0) {
      piVar2 = (int *)0x0;
      piVar5 = (int *)0x0;
    }
    else {
      piVar2 = piVar5 + -100;
      piVar5 = (int *)*piVar5;
      if (piVar5 != (int *)0x0) {
        piVar5 = piVar5 + -100;
      }
    }
    uStack_20 = param_3 + 1;
    if (piVar2 != (int *)0x0) {
      while( true ) {
        piVar6 = piVar5;
        uVar4 = (uint)*(ushort *)((int)piVar2 + 0x1e);
        if ((uint)*(ushort *)((int)piVar2 + 0x2e) <= (uint)*(ushort *)((int)piVar2 + 0x1e)) {
          uVar4 = (uint)*(ushort *)((int)piVar2 + 0x2e);
        }
        if (uStack_20 <= uVar4) {
          uVar3 = bt_connection_disconnect_with_callback_and_parameter_and_state_validation_and_callback_execution_and_parameter_and_state_management
                            (piVar2,param_2,param_3);
          return uVar3;
        }
        if (piVar6 == (int *)0x0) break;
        piVar5 = (int *)piVar6[100];
        piVar2 = piVar6;
        if (piVar5 != (int *)0x0) {
          piVar5 = piVar5 + -100;
        }
      }
    }
    local_24 = "No ATT channel for MTU %zu";
    local_28 = 3;
    FUN_00081ddc(&DAT_00088100,0x1880,&local_28);
  }
  return 0;
}



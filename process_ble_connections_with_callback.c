/*
 * Function: process_ble_connections_with_callback
 * Entry:    000819ea
 * Prototype: undefined process_ble_connections_with_callback()
 */


void process_ble_connections_with_callback(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar3 = *(undefined4 **)(param_1 + 0x54);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*puVar3;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4 = puVar4 + -2;
    }
    puVar3 = puVar3 + -2;
    while( true ) {
      puVar5 = puVar4;
      uVar2 = puVar3[4];
      puVar3[4] = uVar2 & 0xfffffffb;
      if (((int)(uVar2 << 0x1d) < 0) &&
         ((param_2 != 0 ||
          (iVar1 = handle_ble_connection_disconnect_with_parameter_validation_and_state_transition
                             (puVar3), iVar1 != 0)))) {
        remove_element_from_linked_list_by_pointer(*puVar3,puVar3);
        bt_connection_cleanup_and_notify(puVar3);
      }
      if (*(code **)(puVar3[1] + 8) != (code *)0x0) {
        (**(code **)(puVar3[1] + 8))(puVar3,param_2);
      }
      if (puVar5 == (undefined4 *)0x0) break;
      puVar4 = (undefined4 *)puVar5[2];
      puVar3 = puVar5;
      if (puVar4 != (undefined4 *)0x0) {
        puVar4 = puVar4 + -2;
      }
    }
  }
  return;
}



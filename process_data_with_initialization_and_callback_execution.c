/*
 * Function: process_data_with_initialization_and_callback_execution
 * Entry:    00054260
 * Prototype: undefined process_data_with_initialization_and_callback_execution()
 */


void process_data_with_initialization_and_callback_execution(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_40;
  char *local_3c;
  uint uStack_38;
  undefined4 local_20;
  char *local_1c;
  
  uVar5 = (uint)*(ushort *)(*(char **)(param_1 + 0xc) + 1);
  cVar1 = **(char **)(param_1 + 0xc);
  iVar2 = bt_connection_state_transition_with_validation(uVar5,0xf);
  if (iVar2 == 0) {
    local_3c = "Unable to look up conn with handle %u";
    local_40 = 3;
    uStack_38 = uVar5;
    call_system_cleanup_alt(&DAT_00088138,0x1840,&local_40);
    return;
  }
  if ((cVar1 == '\0') && (*(char *)(iVar2 + 2) == '\x01')) {
    initialize_ble_attribute_with_properties();
    iVar4 = determine_priority_level(iVar2);
    if (iVar4 == 0) {
      uVar3 = process_data_with_initialization_and_parameter_validation(5);
      bt_connection_disconnect_with_parameter_validation(iVar2,5,uVar3);
      local_1c = "Failed to set required security level";
      local_20 = 2;
      call_system_cleanup_alt(&DAT_00088138,0x1040,&local_20);
      bt_connection_disconnect(iVar2,5);
      goto LAB_000542b0;
    }
  }
  uVar3 = process_data_with_initialization_and_parameter_validation(cVar1);
  bt_connection_disconnect_with_parameter_validation(iVar2,cVar1,uVar3);
LAB_000542b0:
  validate_and_process_ble_characteristics_with_callback_validation_and_state_management(iVar2);
  return;
}



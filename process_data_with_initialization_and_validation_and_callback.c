/*
 * Function: process_data_with_initialization_and_validation_and_callback
 * Entry:    00054308
 * Prototype: undefined process_data_with_initialization_and_validation_and_callback()
 */


void process_data_with_initialization_and_validation_and_callback(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  char *pcVar6;
  undefined4 local_40;
  char *local_3c;
  uint uStack_38;
  undefined4 local_20;
  char *local_1c;
  
  pcVar6 = *(char **)(param_1 + 0xc);
  uVar1 = *(ushort *)(pcVar6 + 1);
  cVar5 = *pcVar6;
  iVar2 = bt_connection_state_transition_with_validation((uint)uVar1,0xf);
  if (iVar2 == 0) {
    local_3c = "Unable to look up conn with handle %u";
    local_40 = 3;
    uStack_38 = (uint)uVar1;
    call_system_cleanup_alt(&DAT_00088138,0x1840,&local_40);
    return;
  }
  if (cVar5 == '\0') {
    cVar5 = pcVar6[3];
    *(char *)(iVar2 + 0xb) = cVar5;
    if (*(char *)(iVar2 + 2) == '\x01') {
      if (cVar5 != '\0') {
        initialize_ble_attribute_with_properties();
      }
      iVar4 = determine_priority_level(iVar2);
      if (iVar4 == 0) {
        uVar3 = process_data_with_initialization_and_parameter_validation(5);
        bt_connection_disconnect_with_parameter_validation(iVar2,5,uVar3);
        local_1c = "Failed to set required security level";
        local_20 = 2;
        call_system_cleanup_alt(&DAT_00088138,0x1040,&local_20);
        bt_connection_disconnect(iVar2,5);
        goto LAB_0005435c;
      }
    }
    uVar3 = process_data_with_initialization_and_parameter_validation(0);
    cVar5 = '\0';
  }
  else {
    uVar3 = process_data_with_initialization_and_parameter_validation(cVar5);
  }
  bt_connection_disconnect_with_parameter_validation(iVar2,cVar5,uVar3);
LAB_0005435c:
  validate_and_process_ble_characteristics_with_callback_validation_and_state_management(iVar2);
  return;
}



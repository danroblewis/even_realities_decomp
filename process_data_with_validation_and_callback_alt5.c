/*
 * Function: process_data_with_validation_and_callback_alt5
 * Entry:    00052760
 * Prototype: undefined process_data_with_validation_and_callback_alt5()
 */


void process_data_with_validation_and_callback_alt5(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined8 uVar5;
  undefined1 auStack_34 [32];
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar1 = handle_connection_state_validation_with_privilege_management();
    if ((uVar1 & 5) != 0) {
      setup_sensor_interfaces_with_privilege_management(param_1);
    }
    setup_error_handling(auStack_34);
    uVar4 = extraout_r1;
    while (uVar5 = handle_ble_connection_state_transition_with_validation(param_1 + 0x10,uVar4,0,0),
          uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20), iVar2 = (int)uVar5, iVar2 != 0) {
      iVar3 = (**(code **)(param_1 + 0x3c))(iVar2,param_2);
      if (iVar3 == 0) {
        cleanup_with_callback(iVar2,param_1);
        uVar4 = extraout_r1_00;
      }
      else {
        initialize_debug_system_with_validation(auStack_34,iVar2);
        uVar4 = extraout_r1_01;
      }
    }
    while (iVar2 = handle_ble_connection_state_transition_with_validation(auStack_34,uVar4,0,0),
          iVar2 != 0) {
      initialize_debug_system_with_validation(param_1 + 0x10,iVar2);
      uVar4 = extraout_r1_02;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      initialize_accelerometer(&DAT_20005bb8,param_1);
    }
  }
  return;
}



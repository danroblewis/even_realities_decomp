/*
 * Function: handle_bluetooth_privacy_mode_management_with_callback_execution_and_parameter
 * Entry:    000556b0
 * Prototype: undefined handle_bluetooth_privacy_mode_management_with_callback_execution_and_parameter()
 */


undefined4
handle_bluetooth_privacy_mode_management_with_callback_execution_and_parameter
          (undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  DAT_2000206f = uVar1;
  iVar2 = handle_bluetooth_privacy_mode_management_with_validation_and_state_management();
  if (iVar2 == 0) {
    iVar2 = bt_connection_disconnect_with_callback_execution(uVar1,&DAT_000f2b33);
    if (iVar2 != 0) {
      uVar3 = 4;
LAB_000556d8:
      bt_connection_state_transition(iVar2,uVar3);
      *param_2 = iVar2;
      return 0;
    }
  }
  else {
    iVar2 = bt_connection_disconnect_with_callback_validation(uVar1,param_1 + 9);
    if (iVar2 != 0) {
      return 0xffffffea;
    }
    iVar2 = bt_connection_disconnect_with_callback_execution(*param_1,param_1 + 9);
    if (iVar2 != 0) {
      uVar3 = 5;
      goto LAB_000556d8;
    }
  }
  return 0xfffffff4;
}



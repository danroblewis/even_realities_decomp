/*
 * Function: validate_and_process_ble_characteristics_with_callback_execution_and_state_management
 * Entry:    000565c4
 * Prototype: undefined validate_and_process_ble_characteristics_with_callback_execution_and_state_management()
 */


undefined4
validate_and_process_ble_characteristics_with_callback_execution_and_state_management(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  setup_audio_codec(&DAT_20002990);
  set_ble_connection_state_flags_with_validation(param_1,1,0,&DAT_20002990);
  if (DAT_20006208 != 0) {
    if ((DAT_20006145 == '\0') &&
       (iVar1 = bt_connection_update_flags(&DAT_2000613c,0xffffffbf), iVar1 << 0x19 < 0)) {
      validate_and_process_ble_characteristics_with_state_management_and_parameter(&DAT_20006138);
    }
    else if ((DAT_20006145 == '\a') && (DAT_20002104 != 0)) {
      if ((DAT_20006170 == 0) || (DAT_20002110 != 0)) {
        uVar2 = 4;
        puVar3 = &DAT_20006170;
      }
      else {
        uVar2 = 2;
        puVar3 = (undefined4 *)&DAT_20002108;
      }
      set_ble_connection_state_flags_with_validation(param_1 + 0x14,uVar2,0,puVar3);
      *(undefined1 *)(param_1 + 0x20) = 1;
      return 2;
    }
  }
  return 1;
}



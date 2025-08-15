/*
 * Function: process_data_with_callback_validation_and_compression_alt
 * Entry:    00053380
 * Prototype: undefined process_data_with_callback_validation_and_compression_alt()
 */


void process_data_with_callback_validation_and_compression_alt
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r2;
  code *pcVar3;
  
  iVar1 = bt_connection_disconnect_with_validation_and_callback();
  if (iVar1 == 0) {
LAB_000533a0:
    iVar2 = find_ble_uuid_in_table(param_1,param_2);
    if (iVar2 == 0) goto LAB_000533ac;
  }
  else {
    if (*(char *)(iVar1 + 2) != '\x01') {
      bt_connection_disconnect(iVar1,0x13,extraout_r2,*(char *)(iVar1 + 2),param_4);
      validate_and_process_ble_characteristics_with_callback_validation_and_state_management(iVar1);
      goto LAB_000533a0;
    }
    iVar2 = *(int *)(iVar1 + 0xc0);
    *(undefined4 *)(iVar1 + 0xc0) = 0;
    bt_connection_disconnect(iVar1,0x13,extraout_r2,0,param_4);
    validate_and_process_ble_characteristics_with_callback_validation_and_state_management(iVar1);
    if (iVar2 == 0) goto LAB_000533a0;
  }
  cleanup_ble_attribute(iVar2);
LAB_000533ac:
  handle_ble_descriptor_discovery(param_1,param_2);
  if (DAT_2000ad20 == (int *)0x0) {
    return;
  }
  iVar1 = *DAT_2000ad20;
  if (iVar1 != 0) {
    iVar1 = iVar1 + -0xc;
  }
  pcVar3 = (code *)DAT_2000ad20[-1];
  if (pcVar3 == (code *)0x0) goto LAB_000533cc;
  do {
    (*pcVar3)(param_1,param_2);
LAB_000533cc:
    if (iVar1 == 0) {
      return;
    }
    do {
      pcVar3 = *(code **)(iVar1 + 8);
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar1 = 0;
        if (pcVar3 == (code *)0x0) {
          return;
        }
        break;
      }
      iVar1 = *(int *)(iVar1 + 0xc) + -0xc;
    } while (pcVar3 == (code *)0x0);
  } while( true );
}



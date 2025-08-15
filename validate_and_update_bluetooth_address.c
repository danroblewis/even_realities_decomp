/*
 * Function: validate_and_update_bluetooth_address
 * Entry:    00081102
 * Prototype: undefined validate_and_update_bluetooth_address()
 */


int validate_and_update_bluetooth_address(int param_1,uint param_2)

{
  int iVar1;
  int iStack_10;
  uint uStack_c;
  
  if (param_1 == 0) {
    iVar1 = -0x16;
  }
  else {
    iStack_10 = param_1;
    uStack_c = param_2;
    iVar1 = validate_and_process_ble_characteristics_with_callback_execution(&iStack_10,6);
    if (iVar1 == 0) {
      uStack_c = uStack_c & 0xffff3fff;
      iVar1 = handle_bluetooth_address_update_with_hci_command(param_1,&iStack_10);
    }
  }
  return iVar1;
}



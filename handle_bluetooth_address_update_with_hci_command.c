/*
 * Function: handle_bluetooth_address_update_with_hci_command
 * Entry:    000810f2
 * Prototype: undefined handle_bluetooth_address_update_with_hci_command()
 */


int handle_bluetooth_address_update_with_hci_command
              (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return -0x16;
  }
  iVar1 = memcmp_byte_arrays(param_2,&DAT_20002069,6,param_4,param_4);
  if (iVar1 != 0) {
    iVar1 = process_data_with_initialization_and_store(0x2005,6);
    if (iVar1 == 0) {
      return -0x69;
    }
    ble_memory_copy_utility(iVar1 + 0xc,param_2,6);
    iVar1 = process_data_with_initialization_and_validation(0x2005,iVar1,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = copy_memory_short_and_word(&DAT_20002069,param_2);
    *(undefined1 *)(iVar1 + -1) = 1;
  }
  return 0;
}



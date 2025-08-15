/*
 * Function: process_bluetooth_hci_command_202d
 * Entry:    00081050
 * Prototype: undefined process_bluetooth_hci_command_202d()
 */


undefined4
process_bluetooth_hci_command_202d
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = process_data_with_initialization_and_store(0x202d,1);
  if (iVar1 != 0) {
    write_ble_data_with_allocation(iVar1 + 0xc,param_1);
    uVar2 = process_data_with_initialization_and_validation(0x202d,iVar1,0,param_4);
    return uVar2;
  }
  return 0xffffff97;
}



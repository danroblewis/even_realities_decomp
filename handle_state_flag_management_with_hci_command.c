/*
 * Function: handle_state_flag_management_with_hci_command
 * Entry:    00081080
 * Prototype: undefined handle_state_flag_management_with_hci_command()
 */


void handle_state_flag_management_with_hci_command(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1 & 0xffff7fff;
  if (-1 < (int)(uVar1 << 0x10)) {
    return;
  }
  send_ble_command_0x200a(param_1,1);
  return;
}



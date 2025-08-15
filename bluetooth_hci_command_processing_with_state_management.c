/*
 * Function: bluetooth_hci_command_processing_with_state_management
 * Entry:    000548b8
 * Prototype: undefined bluetooth_hci_command_processing_with_state_management()
 */


void bluetooth_hci_command_processing_with_state_management(void)

{
  undefined4 in_r3;
  char *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_48;
  char *local_44;
  undefined4 local_40;
  char *local_3c;
  char *pcStack_38;
  uint local_34;
  uint local_30;
  undefined2 local_2c;
  undefined4 uStack_28;
  
  uStack_28 = in_r3;
  set_bits(&DAT_200020d4,4);
  pcStack_38 = "";
  if (1 < DAT_20002007) {
    pcStack_38 = "[0]";
  }
  local_34 = process_data_with_callback_validation_alt6(&DAT_20002000);
  puVar3 = &DAT_20002000;
  local_3c = "Identity%s: %s";
  pcVar1 = (char *)0x1;
  local_30 = 0x3010200;
  local_40 = 0x2000004;
  call_system_cleanup_alt(&DAT_00088138,0x28c0,&local_40);
  while( true ) {
    puVar3 = (undefined4 *)((int)puVar3 + 7);
    if ((int)(uint)DAT_20002007 <= (int)pcVar1) break;
    local_34 = process_data_with_callback_validation_alt6(puVar3);
    local_3c = "Identity[%d]: %s";
    local_30 = CONCAT22(local_30._2_2_,0x301);
    local_40 = 0x1000004;
    pcStack_38 = pcVar1;
    call_system_cleanup_alt(&DAT_00088138,0x24c0,&local_40);
    pcVar1 = pcVar1 + 1;
  }
  uVar2 = (uint)DAT_20002070;
  local_40 = process_data_with_validation_and_callback_and_compression_alt(uVar2);
  pcStack_38 = (char *)(uint)DAT_20002072;
  local_34 = (uint)DAT_20002076;
  local_44 = "HCI: version %s (0x%02x) revision 0x%04x, manufacturer 0x%04x";
  local_30 = CONCAT22(local_30._2_2_,0x200);
  local_48 = 0x1000006;
  local_3c = (char *)uVar2;
  call_system_cleanup_alt(&DAT_00088138,0x34c0,&local_48);
  uVar2 = (uint)DAT_20002071;
  pcStack_38 = (char *)process_data_with_validation_and_callback_and_compression_alt(uVar2);
  local_30 = (uint)DAT_20002074;
  local_3c = "LMP: version %s (0x%02x) subver 0x%04x";
  local_2c = 0x200;
  local_40 = 0x1000005;
  local_34 = uVar2;
  call_system_cleanup_alt(&DAT_00088138,0x2cc0,&local_40);
  return;
}



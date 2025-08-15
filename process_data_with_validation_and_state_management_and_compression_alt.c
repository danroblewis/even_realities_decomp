/*
 * Function: process_data_with_validation_and_state_management_and_compression_alt
 * Entry:    00053bd8
 * Prototype: undefined process_data_with_validation_and_state_management_and_compression_alt()
 */


void process_data_with_validation_and_state_management_and_compression_alt(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 local_30;
  char *local_2c;
  uint uStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  pcVar4 = *(char **)(param_1 + 0xc);
  uVar1 = *(ushort *)(pcVar4 + 1);
  uVar6 = bt_connection_state_transition_with_validation((uint)uVar1,1);
  uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
  iVar2 = (int)uVar6;
  if (iVar2 == 0) {
    local_2c = "Unable to lookup conn for handle %u";
    local_30 = 3;
    uStack_28 = (uint)uVar1;
    call_system_cleanup_alt(&DAT_00088138,0x1840,&local_30);
    return;
  }
  piVar5 = (int *)(iVar2 + 4);
  if (*pcVar4 == '\x1a') {
    if (*(char *)(iVar2 + 3) == '\x01') {
      uVar6 = set_bits(piVar5,0x400);
      uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (-1 < (int)uVar6 << 0x15) {
        local_20 = *(undefined4 *)(iVar2 + 0xa8);
        local_1c = *(undefined4 *)(iVar2 + 0xb0);
        setup_ble_connection_parameters(iVar2,&local_20);
        goto LAB_00053c44;
      }
      goto LAB_00053c4c;
    }
LAB_00053c74:
    if (((-1 < *piVar5 << 0x17) || (*pcVar4 != ' ')) || (*(char *)(iVar2 + 0xb4) == '\0'))
    goto LAB_00053c68;
    *(char *)(iVar2 + 0xb4) = *(char *)(iVar2 + 0xb4) + -1;
    handle_ble_connection_timeout_with_priority_and_validation(iVar2 + 0x60,uVar3,0x28000,0);
  }
  else {
LAB_00053c4c:
    if (*pcVar4 != '\0') goto LAB_00053c74;
    *(undefined2 *)(iVar2 + 0xa6) = *(undefined2 *)(pcVar4 + 3);
    *(undefined2 *)(iVar2 + 0xac) = *(undefined2 *)(pcVar4 + 5);
    *(undefined2 *)(iVar2 + 0xae) = *(undefined2 *)(pcVar4 + 7);
LAB_00053c68:
    clear_bit_in_bitmap(piVar5,0xfffffeff);
  }
  bt_connection_disconnect_with_validation(iVar2);
LAB_00053c44:
  validate_and_process_ble_characteristics_with_callback_validation_and_state_management(iVar2);
  return;
}



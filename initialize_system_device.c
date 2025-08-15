/*
 * Function: initialize_system_device
 * Entry:    00012080
 * Prototype: undefined initialize_system_device()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int initialize_system_device(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined **extraout_r2;
  undefined **ppuVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined4 local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  char *pcStack_48;
  uint local_44;
  undefined4 local_40;
  undefined2 local_3c;
  int local_34;
  int local_30 [4];
  undefined4 local_20;
  char *local_1c;
  
  if ((*(uint *)(BLUETOOTH_HCI_COMMAND_STATE + 8) & 1) == 0) {
    uVar12 = process_data_with_initialization_and_validation(0xc03,0,local_30);
    if ((int)uVar12 != 0) {
      return (int)uVar12;
    }
    uVar10 = (uint)((ulonglong)uVar12 >> 0x20);
    if (**(char **)(local_30[0] + 0xc) == '\0') {
      uVar10 = BLUETOOTH_PRIVACY_MODE_CONFIGURATION;
      BLUETOOTH_PRIVACY_MODE_CONFIGURATION = BLUETOOTH_PRIVACY_MODE_CONFIGURATION & 9;
    }
    decrement_reference_count_and_cleanup_memory(local_30[0],uVar10);
  }
  iVar1 = process_data_with_initialization_and_validation(0x1003,0,local_30);
  if (iVar1 != 0) {
    return iVar1;
  }
  DAT_20002078 = *(undefined4 *)(*(int *)(local_30[0] + 0xc) + 1);
  SYSTEM_DEVICE_INITIALIZATION_STATE = *(uint *)(*(int *)(local_30[0] + 0xc) + 5);
  puVar11 = &DAT_20002080;
  decrement_reference_count_and_cleanup_memory(local_30[0]);
  iVar1 = process_data_with_initialization_and_validation(0x1001,0,local_30);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = *(int *)(local_30[0] + 0xc);
  DAT_20002070 = *(undefined1 *)(iVar1 + 1);
  DAT_20002072 = *(undefined2 *)(iVar1 + 2);
  DAT_20002071 = *(undefined1 *)(iVar1 + 4);
  DAT_20002074 = *(undefined2 *)(iVar1 + 7);
  DAT_20002076 = *(undefined2 *)(iVar1 + 5);
  decrement_reference_count_and_cleanup_memory();
  iVar1 = process_data_with_initialization_and_validation(0x1002,0,local_30);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = *(int *)(local_30[0] + 0xc);
  puVar9 = (undefined4 *)(iVar1 + 1);
  do {
    uVar2 = *puVar9;
    uVar6 = puVar9[1];
    puVar9 = puVar9 + 2;
    *puVar11 = uVar2;
    puVar11[1] = uVar6;
    puVar11 = puVar11 + 2;
  } while (puVar9 != (undefined4 *)(iVar1 + 0x41));
  decrement_reference_count_and_cleanup_memory(local_30[0]);
  iVar1 = validate_and_process_ble_characteristics_with_parameter_validation();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (-1 < (int)(SYSTEM_DEVICE_INITIALIZATION_STATE << 0x19)) {
    local_1c = "Non-LE capable controller detected!";
    local_20 = 2;
    call_system_cleanup_alt(&DAT_00088138,0x1040,&local_20);
    return -0x13;
  }
  iVar1 = process_data_with_initialization_and_validation(0x2003,0,local_30);
  if (iVar1 != 0) {
    return iVar1;
  }
  BLUETOOTH_PRIVACY_MODE_CONFIGURATION = *(uint *)(*(int *)(local_30[0] + 0xc) + 1);
  DAT_200020dc = *(undefined4 *)(*(int *)(local_30[0] + 0xc) + 5);
  decrement_reference_count_and_cleanup_memory(local_30[0]);
  iVar3 = process_data_with_initialization_and_validation(0x2002,0,local_30);
  iVar1 = local_30[0];
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = *(int *)(local_30[0] + 0xc);
  if ((*(short *)(iVar3 + 1) != 0) && (*(char *)(iVar3 + 3) != '\0')) {
    SYSTEM_DEVICE_INITIALIZATION_CONFIGURATION = *(short *)(iVar3 + 1);
    setup_bluetooth_stack(&DAT_20002108,*(undefined1 *)(iVar3 + 3));
  }
  decrement_reference_count_and_cleanup_memory(iVar1);
  uVar10 = SYSTEM_DEVICE_INITIALIZATION_STATE & 0x20;
  if ((SYSTEM_DEVICE_INITIALIZATION_STATE & 0x20) == 0) {
    iVar1 = process_data_with_initialization_and_store(0xc6d,2);
    if (iVar1 == 0) {
      return -0x69;
    }
    puVar4 = (undefined1 *)ble_memory_allocation_utility(iVar1 + 0xc,2);
    *puVar4 = 1;
    puVar4[1] = (char)uVar10;
    iVar1 = process_data_with_initialization_and_validation(0xc6d,iVar1,uVar10);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  if ((int)((uint)DAT_2000209c << 0x1c) < 0) {
    iVar1 = process_data_with_initialization_and_validation(0x201c,0,local_30);
    if (iVar1 != 0) {
      return iVar1;
    }
    DAT_200020e0 = *(undefined4 *)(*(int *)(local_30[0] + 0xc) + 1);
    DAT_200020e4 = *(undefined4 *)(*(int *)(local_30[0] + 0xc) + 5);
    decrement_reference_count_and_cleanup_memory();
  }
  if ((int)(BLUETOOTH_PRIVACY_MODE_CONFIGURATION << 0x19) < 0) {
    iVar1 = process_data_with_initialization_and_validation(0x202a,0,local_30);
    if (iVar1 != 0) {
      return iVar1;
    }
    BLUETOOTH_PRIVACY_MODE_STATE = *(undefined1 *)(*(int *)(local_30[0] + 0xc) + 1);
    decrement_reference_count_and_cleanup_memory();
  }
  iVar1 = process_data_with_initialization_and_store(0x2001,8);
  if (iVar1 == 0) {
    return -0x69;
  }
  uVar2 = ble_memory_allocation_utility(iVar1 + 0xc,8);
  uVar7 = BLUETOOTH_PRIVACY_MODE_CONFIGURATION & 0xff;
  uVar10 = 0x202;
  if ((BLUETOOTH_PRIVACY_MODE_CONFIGURATION & 0x40) == 0) {
    uVar10 = 3;
  }
  if ((int)(uVar7 << 0x1e) < 0) {
    uVar10 = uVar10 | 0x2c;
  }
  else {
    uVar10 = uVar10 | 0xc;
  }
  if ((int)(uVar7 << 0x1a) < 0) {
    uVar10 = uVar10 | 0x40;
  }
  if ((BLUETOOTH_PRIVACY_MODE_CONFIGURATION & 0x900) != 0) {
    uVar10 = uVar10 | 0x800;
  }
  if ((int)(uVar7 << 0x1f) < 0) {
    uVar10 = uVar10 | 0x10;
  }
  if ((DAT_200020a2 & 6) == 6) {
    uVar10 = uVar10 | 0x180;
  }
  convert_to_byte_format(uVar10,0,uVar2);
  iVar1 = process_data_with_initialization_and_validation(0x2001,iVar1,0);
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((int)(SYSTEM_DEVICE_INITIALIZATION_STATE << 0x1a) < 0) {
    if (SYSTEM_DEVICE_INITIALIZATION_CONFIGURATION == 0) {
      local_1c = "ACL BR/EDR buffers not initialized";
      local_20 = 2;
      call_system_cleanup_alt(&DAT_00088138,0x1040,&local_20);
      return -5;
    }
  }
  else if (SYSTEM_DEVICE_INITIALIZATION_CONFIGURATION == 0) {
    iVar1 = process_data_with_initialization_and_validation(0x1005,0,local_30);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (SYSTEM_DEVICE_INITIALIZATION_CONFIGURATION == 0) {
      SYSTEM_DEVICE_INITIALIZATION_CONFIGURATION = *(short *)(*(int *)(local_30[0] + 0xc) + 1);
      setup_bluetooth_stack(&DAT_20002108,*(undefined2 *)(*(int *)(local_30[0] + 0xc) + 4));
    }
    decrement_reference_count_and_cleanup_memory(local_30[0]);
  }
  iVar1 = process_data_with_initialization_and_store(0xc01,8);
  if (iVar1 == 0) {
    return -0x69;
  }
  uVar2 = ble_memory_allocation_utility(iVar1 + 0xc,8);
  if ((int)(BLUETOOTH_PRIVACY_MODE_CONFIGURATION << 0x1f) < 0) {
    uVar5 = 0x2008890;
    uVar6 = 0x20008000;
  }
  else {
    uVar6 = 0x20000000;
    uVar5 = 0x2008810;
  }
  convert_to_byte_format(uVar5,uVar6,uVar2);
  iVar1 = process_data_with_initialization_and_validation(0xc01,iVar1,0);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = process_data_with_initialization_and_validation(0xfc01,0,&local_34);
  if (iVar1 == 0) {
    iVar1 = *(int *)(local_34 + 0xc);
    local_44 = (uint)*(ushort *)(iVar1 + 1);
    if (local_44 < 4) {
      pcStack_48 = (&PTR_s_reserved_0008b158)[local_44];
    }
    else {
      pcStack_48 = "unknown";
    }
    local_40._0_2_ = 0x200;
    local_4c = "HW Platform: %s (0x%04x)";
    local_50 = (char *)0x1000004;
    call_system_cleanup_alt(&DAT_00088138,0x24c0,&local_50);
    local_44 = (uint)*(ushort *)(iVar1 + 3);
    if ((*(short *)(iVar1 + 1) == 2) && (local_44 < 4)) {
      pcStack_48 = (&PTR_s_reserved_0008b148)[local_44];
    }
    else {
      pcStack_48 = "unknown";
    }
    local_40 = CONCAT22(local_40._2_2_,0x200);
    local_4c = "HW Variant: %s (0x%04x)";
    local_50 = (char *)0x1000004;
    call_system_cleanup_alt(&DAT_00088138,0x24c0,&local_50);
    local_4c = (char *)(uint)*(byte *)(iVar1 + 5);
    pcStack_48 = (char *)(uint)*(byte *)(iVar1 + 6);
    ppuVar8 = extraout_r2;
    if (local_4c < 4) {
      ppuVar8 = &PTR_s_Standard_Bluetooth_controller_0008b138;
    }
    local_44 = (uint)*(ushort *)(iVar1 + 7);
    local_40 = *(undefined4 *)(iVar1 + 9);
    if (local_4c < 4) {
      local_50 = ppuVar8[(int)local_4c];
    }
    else {
      local_50 = "unknown";
    }
    local_3c = 0x200;
    local_54 = "Firmware: %s (0x%02x) Version %u.%u Build %u";
    local_58 = 0x1000007;
    call_system_cleanup_alt(&DAT_00088138,0x3cc0,&local_58);
    decrement_reference_count_and_cleanup_memory(local_34);
    iVar1 = process_data_with_initialization_and_validation(0xfc02,0,&local_34);
    if (iVar1 == 0) {
      _DAT_200020c1 = *(undefined2 *)(*(int *)(local_34 + 0xc) + 1);
      decrement_reference_count_and_cleanup_memory();
      if (-1 < (int)((uint)DAT_200020c1 << 0x1d)) goto LAB_000123fe;
      iVar1 = process_data_with_initialization_and_validation(0xfc03,0,&local_34);
      if (iVar1 == 0) {
        DAT_200020c0 = *(undefined1 *)(*(int *)(local_34 + 0xc) + 1);
        decrement_reference_count_and_cleanup_memory();
        goto LAB_000123fe;
      }
      local_1c = "Failed to read supported vendor features";
    }
    else {
      local_1c = "Failed to read supported vendor commands";
    }
  }
  else {
    local_1c = "Vendor HCI extensions not available";
  }
  local_20 = 2;
  call_system_cleanup_alt(&DAT_00088138,0x1080,&local_20);
LAB_000123fe:
  iVar1 = return_zero_for_system_initialization();
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = bt_connection_disconnect_with_state_validation_and_callback();
  if (iVar1 == 0) {
    iVar1 = bluetooth_hci_command_processing_with_parameter_validation();
    return iVar1;
  }
  return iVar1;
}



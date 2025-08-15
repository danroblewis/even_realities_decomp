/*
 * Function: process_ble_pairing_comprehensive
 * Entry:    0005cff0
 * Prototype: undefined process_ble_pairing_comprehensive()
 */


int process_ble_pairing_comprehensive(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 local_40;
  char *local_3c;
  uint uStack_38;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  char *local_14;
  
  check_ble_connection_state();
  puVar9 = *(undefined4 **)(param_2 + 0xc);
  puVar6 = (undefined4 *)(param_1 + 0x57);
  puVar8 = puVar9;
  do {
    puVar2 = puVar8;
    puVar8 = puVar2 + 1;
    *puVar6 = *puVar2;
    puVar6 = puVar6 + 1;
  } while (puVar8 != puVar9 + 8);
  puVar6 = (undefined4 *)(param_1 + 0x77);
  do {
    puVar9 = puVar8 + 1;
    *puVar6 = *puVar8;
    puVar6 = puVar6 + 1;
    puVar8 = puVar9;
  } while (puVar9 != puVar2 + 9);
  iVar4 = validate_and_process_ble_characteristics_with_validation_and_callback();
  if (iVar4 != 0) {
    local_14 = "Remote is using Debug Public key";
    local_18 = 2;
    process_and_compress_data_wrapper(&DAT_00088180,0x10c0,&local_18);
    set_bit_in_value(param_1 + 4,0xe);
    iVar4 = *(int *)(param_1 + 0xf0);
    if (*(int *)(iVar4 + 0xc0) == 0) {
      uVar5 = initialize_ble_attribute(*(undefined1 *)(iVar4 + 8),iVar4 + 0x90);
      *(undefined4 *)(iVar4 + 0xc0) = uVar5;
    }
    iVar4 = *(int *)(iVar4 + 0xc0);
    if (((iVar4 != 0) && ((*(ushort *)(iVar4 + 0xe) & 0x24) != 0)) &&
       (-1 < (int)((uint)*(byte *)(iVar4 + 0xd) << 0x1e))) {
      return 3;
    }
  }
  if (DAT_2000af48 == (undefined4 *)0x0) {
    set_bit_in_value(param_1 + 4,6);
    return 0;
  }
  iVar4 = check_ble_connection_state();
  iVar10 = param_1 + 4;
  iVar1 = extract_bit_from_value(iVar10,0xe);
  if ((iVar1 == 0) && (iVar1 = memcmp_byte_arrays(param_1 + 0x57,DAT_2000af48,0x20), iVar1 == 0)) {
    local_1c = "Remote public key rejected";
    local_20 = 2;
    process_and_compress_data_wrapper(&DAT_00088180,0x1080,&local_20);
    return 8;
  }
  iVar1 = handle_ble_connection_memory_allocation(param_1,0xc);
  if (iVar1 == 0) {
    return 8;
  }
  puVar9 = (undefined4 *)ble_memory_allocation_utility(iVar1 + 0xc,0x40);
  puVar2 = DAT_2000af48 + 8;
  puVar6 = puVar9;
  puVar8 = DAT_2000af48;
  do {
    puVar7 = puVar8;
    puVar8 = puVar7 + 1;
    *puVar6 = *puVar7;
    puVar6 = puVar6 + 1;
  } while (puVar8 != puVar2);
  puVar6 = puVar9 + 8;
  do {
    puVar9 = puVar8 + 1;
    *puVar6 = *puVar8;
    puVar6 = puVar6 + 1;
    puVar8 = puVar9;
  } while (puVar9 != puVar7 + 9);
  update_ble_connection_state_with_error_handling(param_1,iVar1,0);
  uStack_38 = (uint)*(byte *)(param_1 + 8);
  switch(uStack_38) {
  case 0:
  case 3:
    set_bit_in_value(param_1,4);
    iVar4 = process_ble_authentication_operation();
    if (iVar4 != 0) {
      return iVar4;
    }
    goto LAB_0005cf9a;
  case 1:
    uVar5 = set_bit_in_value(param_1,3);
    set_bit_in_value(uVar5,0xe);
    set_bit_in_value(iVar10,10);
    (**(code **)(iVar4 + 4))(*(undefined4 *)(param_1 + 0xf0));
    goto LAB_0005cf9a;
  case 2:
    uVar5 = *(undefined4 *)(param_1 + 0xf0);
    piVar3 = (int *)check_ble_connection_state(param_1);
    iVar4 = validate_and_process_ble_characteristics_with_callback_execution(param_1 + 0xd8,4);
    if (iVar4 != 0) {
      return 8;
    }
    *(undefined1 *)(param_1 + 0xdc) = 0;
    *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) % 1000000;
    if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
      set_bit_in_value(iVar10,0xb);
      (*(code *)*piVar3)(uVar5,*(undefined4 *)(param_1 + 0xd8));
    }
    iVar4 = set_bit_in_value(param_1,3);
    uVar5 = 0xe;
    break;
  default:
    local_3c = "Unknown pairing method (%u)";
    local_40 = 3;
    process_and_compress_data_wrapper(&DAT_00088180,0x1840,&local_40);
    return 8;
  case 5:
    uVar5 = 4;
    iVar4 = param_1;
  }
  set_bit_in_value(iVar4,uVar5);
LAB_0005cf9a:
  set_bit_in_value(iVar10,7);
  iVar4 = process_ble_data_with_processing(8);
  if (iVar4 == 0) {
    iVar4 = process_ble_characteristics_with_validation(param_1);
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}



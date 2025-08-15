/*
 * Function: validate_ble_attribute_permissions
 * Entry:    0005d964
 * Prototype: undefined validate_ble_attribute_permissions()
 */


int validate_ble_attribute_permissions(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 3) != '\x01') {
    return -0x16;
  }
  iVar2 = process_data_with_compression_and_validation();
  if (iVar2 == 0) {
    return -0x80;
  }
  iVar8 = iVar2 + 4;
  iVar3 = extract_bit_from_value(iVar8,4);
  if (iVar3 != 0) {
    return -5;
  }
  iVar3 = extract_bit_from_value(iVar8,3);
  if ((iVar3 != 0) || (iVar3 = extract_bit_from_value(iVar8,1), iVar3 != 0)) {
    return -0x10;
  }
  iVar3 = check_ble_connection_state(iVar2);
  uVar7 = (uint)*(byte *)(*(int *)(iVar2 + 0xf0) + 10);
  if (uVar7 == 3) {
    iVar6 = analyze_ble_connection_state(iVar2);
    if (iVar6 != 3) goto LAB_0005da60;
    if (iVar3 != 0) {
      uVar7 = *(uint *)(iVar3 + 0xc);
      goto LAB_0005da5c;
    }
  }
  else if (uVar7 < 4) {
    if (uVar7 - 1 < 2) goto LAB_0005da60;
  }
  else if ((uVar7 == 4) &&
          ((iVar6 = analyze_ble_connection_state(iVar2), iVar6 != 3 ||
           ((iVar3 != 0 && (*(int *)(iVar3 + 0xc) != 0)))))) {
    uVar7 = (uint)DAT_2001d532;
LAB_0005da5c:
    if (uVar7 != 0) goto LAB_0005da60;
  }
  iVar3 = extract_bit_from_value(param_1 + 4,0xb);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0xc0) == 0) {
      iVar3 = find_ble_attribute_by_properties(0x20,*(undefined1 *)(param_1 + 8),param_1 + 0x90);
      *(int *)(param_1 + 0xc0) = iVar3;
      if (iVar3 == 0) {
        uVar4 = find_ble_attribute_by_properties(4,*(undefined1 *)(param_1 + 8),param_1 + 0x90);
        *(undefined4 *)(param_1 + 0xc0) = uVar4;
      }
    }
    iVar3 = *(int *)(param_1 + 0xc0);
    if (((iVar3 != 0) && ((*(ushort *)(iVar3 + 0xe) & 0x24) != 0)) &&
       ((*(byte *)(param_1 + 10) < 3 ||
        (((int)((uint)*(byte *)(iVar3 + 0xd) << 0x1f) < 0 &&
         ((*(byte *)(param_1 + 10) == 3 ||
          (((int)((uint)*(ushort *)(iVar3 + 0xe) << 0x1a) < 0 && (*(char *)(iVar3 + 0xc) == '\x10'))
          )))))))) {
LAB_0005da60:
      if (*(int *)(param_1 + 0xc0) == 0) {
        iVar3 = initialize_ble_attribute(*(undefined1 *)(param_1 + 8),param_1 + 0x90);
        *(int *)(param_1 + 0xc0) = iVar3;
        if (iVar3 == 0) {
          return -0xc;
        }
      }
      iVar3 = validate_and_process_ble_characteristics_comprehensive(iVar2);
      if ((iVar3 == 0) && (iVar3 = handle_ble_connection_memory_allocation(iVar2,0xb), iVar3 != 0))
      {
        puVar5 = (undefined1 *)ble_memory_allocation_utility(iVar3 + 0xc,1);
        uVar1 = calculate_ble_permissions_based_on_state(iVar2,9);
        *puVar5 = uVar1;
        iVar6 = handle_ble_connection_state_transition_with_validation(param_1,6,iVar3,0,0);
        if (iVar6 == 0) {
          set_bit_in_value(iVar8,0xf);
          set_bit_in_value(iVar2,1);
          return 0;
        }
        decrement_reference_count_and_cleanup_memory(iVar3);
        return iVar6;
      }
      return -0x69;
    }
  }
  return -0x16;
}



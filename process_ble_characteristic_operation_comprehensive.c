/*
 * Function: process_ble_characteristic_operation_comprehensive
 * Entry:    0005d5c0
 * Prototype: undefined process_ble_characteristic_operation_comprehensive()
 */


uint process_ble_characteristic_operation_comprehensive(int param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  byte extraout_r1;
  byte bVar8;
  undefined1 *puVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 local_48;
  char *local_44;
  uint uStack_40;
  uint local_38 [4];
  undefined4 local_28;
  char *local_24;
  
  iVar12 = *(int *)(param_1 + 0xf0);
  iVar3 = check_ble_connection_state();
  pbVar13 = *(byte **)(param_2 + 0xc);
  if (9 < pbVar13[3] - 7) {
    return 6;
  }
  if (*(int *)(iVar12 + 0xc0) == 0) {
    iVar4 = initialize_ble_attribute(*(undefined1 *)(iVar12 + 8),iVar12 + 0x90);
    *(int *)(iVar12 + 0xc0) = iVar4;
    if (iVar4 == 0) {
      return 8;
    }
  }
  iVar11 = param_1 + 4;
  iVar4 = extract_bit_from_value(iVar11,0xf);
  if ((iVar4 == 0) &&
     (uVar5 = validate_and_process_ble_characteristics_comprehensive(param_1), uVar5 != 0)) {
    return uVar5 & 0xff;
  }
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)pbVar13;
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(pbVar13 + 4);
  *(undefined1 *)(param_1 + 0x10) = 2;
  uVar2 = calculate_ble_permissions_based_on_state(param_1,pbVar13[2]);
  *(undefined1 *)(param_1 + 0x13) = uVar2;
  uVar2 = analyze_ble_connection_state(param_1);
  *(undefined1 *)(param_1 + 0x11) = uVar2;
  *(undefined1 *)(param_1 + 0x14) = 0x10;
  *(byte *)(param_1 + 0x15) = pbVar13[4] & 3;
  *(byte *)(param_1 + 0x16) = pbVar13[5] & 1;
  if (((int)((uint)*(byte *)(param_1 + 0x13) << 0x1c) < 0) && ((int)((uint)pbVar13[2] << 0x1c) < 0))
  {
    set_bit_in_value(iVar11,5);
    *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 2;
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  iVar4 = extract_bit_from_value(iVar11,5);
  if (iVar4 == 0) {
    puVar9 = &BLE_CHARACTERISTIC_OPERATION_COMPREHENSIVE_STATE_2;
  }
  else {
    puVar9 = &BLE_CHARACTERISTIC_OPERATION_COMPREHENSIVE_STATE_3;
  }
  *(undefined1 *)(param_1 + 0x12) = *puVar9;
  if (((int)((uint)*(byte *)(param_1 + 0x13) << 0x1a) < 0) && ((int)((uint)pbVar13[2] << 0x1a) < 0))
  {
    set_bit_in_value(iVar11,0x14);
  }
  if (((int)((uint)*(byte *)(param_1 + 0x13) << 0x1f) < 0) && ((int)((uint)pbVar13[2] << 0x1f) < 0))
  {
    set_bit_in_value(iVar11,0xd);
  }
  else {
    *(undefined1 *)(param_1 + 0x15) = 0;
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0xe9) = *(undefined1 *)(param_1 + 0x15);
  uVar6 = set_bit_in_value(iVar11,3);
  uVar5 = (uint)*pbVar13;
  iVar4 = extract_bit_from_value(uVar6,5);
  if (iVar4 == 0) {
    if (uVar5 < 5) {
      if ((int)((uint)(*(byte *)(param_1 + 0xb) & *(byte *)(param_1 + 0x12)) << 0x1f) < 0) {
        bVar8 = 6;
      }
      else {
        bVar1 = *(byte *)(param_1 + 0xc) | *(byte *)(param_1 + 0x13);
        bVar8 = bVar1 & 4;
        if ((bVar1 & 4) != 0) {
          iVar4 = analyze_ble_connection_state(param_1);
          bVar8 = (&DAT_000f5248)[iVar4 + uVar5 * 5];
          if (bVar8 == 4) {
            if (*(char *)(*(int *)(param_1 + 0xf0) + 3) == '\0') {
              bVar8 = 2;
            }
            else {
              bVar8 = 1;
            }
          }
        }
      }
    }
    else {
LAB_0005d782:
      bVar8 = 0;
    }
  }
  else if ((-1 < (int)((uint)(*(byte *)(param_1 + 0xc) & *(byte *)(param_1 + 0x13)) << 0x1c)) ||
          (bVar8 = extraout_r1,
          -1 < (int)((uint)(*(byte *)(param_1 + 0xb) | *(byte *)(param_1 + 0x12)) << 0x1f))) {
    if (4 < uVar5) goto LAB_0005d782;
    bVar1 = *(byte *)(param_1 + 0xc) | *(byte *)(param_1 + 0x13);
    bVar8 = bVar1 & 4;
    if ((bVar1 & 4) != 0) {
      iVar4 = analyze_ble_connection_state(param_1);
      bVar8 = (&UNK_000f522f)[iVar4 + uVar5 * 5];
    }
  }
  *(byte *)(param_1 + 8) = bVar8;
  iVar4 = validate_ble_connection_parameters_and_characteristics
                    (param_1,*(undefined4 *)(iVar12 + 0xc0));
  if (iVar4 == 0) {
    return 3;
  }
  uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0xf0) + 10);
  if (uVar5 == 3) {
LAB_0005d80e:
    if (*(char *)(param_1 + 8) == '\0') {
      return 3;
    }
  }
  else {
    if (3 < uVar5) {
      if (uVar5 != 4) {
        return 8;
      }
      bVar8 = *(byte *)(param_1 + 0x14);
      if (*(byte *)(param_1 + 0xd) <= *(byte *)(param_1 + 0x14)) {
        bVar8 = *(byte *)(param_1 + 0xd);
      }
      if (bVar8 != 0x10) {
        return 6;
      }
      iVar4 = extract_bit_from_value(iVar11,5);
      if (iVar4 == 0) {
        return 3;
      }
      goto LAB_0005d80e;
    }
    if (1 < uVar5 - 1) {
      return 8;
    }
  }
  iVar4 = extract_bit_from_value(iVar11,5);
  if (iVar4 != 0) {
    if ((((*(char *)(param_1 + 8) == '\0') &&
         (iVar4 = extract_bit_from_value(iVar11,0xf), iVar4 == 0)) && (iVar3 != 0)) &&
       (*(int *)(iVar3 + 0x14) != 0)) {
      set_bit_in_value(iVar11,10);
      pcVar10 = *(code **)(iVar3 + 0x14);
      goto LAB_0005d876;
    }
    uVar6 = 0xc;
    goto LAB_0005d908;
  }
  iVar3 = check_ble_connection_state(param_1);
  iVar4 = *(int *)(param_1 + 0xf0);
  piVar7 = (int *)check_ble_connection_state(param_1);
  iVar12 = find_ble_uuid_in_table(*(undefined1 *)(iVar4 + 8),iVar4 + 0x90);
  uStack_40 = (uint)*(byte *)(param_1 + 8);
  if (((iVar12 != 0) && ((int)((uint)*(byte *)(iVar12 + 0xd) << 0x1f) < 0)) && (uStack_40 == 0)) {
    local_24 = "JustWorks failed, authenticated keys present";
    local_28 = 2;
    process_and_compress_data_wrapper(&DAT_00088180,0x1040,&local_28);
    return 8;
  }
  switch(uStack_40) {
  case 0:
    goto switchD_0005d81a_caseD_0;
  case 1:
    set_bit_in_value(iVar11,10);
    (*(code *)piVar7[1])(iVar4);
    break;
  case 2:
    iVar12 = validate_and_process_ble_characteristics_with_callback_execution(local_38,4);
    if (iVar12 != 0) {
      return 8;
    }
    local_38[0] = local_38[0] % 1000000;
    if ((piVar7 != (int *)0x0) && (*piVar7 != 0)) {
      set_bit_in_value(iVar11,0xb);
      (*(code *)*piVar7)(iVar4,local_38[0]);
    }
    *(char *)(param_1 + 0x47) = (char)local_38[0];
    *(char *)(param_1 + 0x49) = (char)(local_38[0] >> 0x10);
    *(char *)(param_1 + 0x48) = (char)(local_38[0] >> 8);
    *(char *)(param_1 + 0x4a) = (char)(local_38[0] >> 0x18);
    break;
  default:
    local_44 = "Unknown pairing method (%u)";
    local_48 = 3;
    process_and_compress_data_wrapper(&DAT_00088180,0x1840,&local_48);
    return 8;
  case 6:
    if ((piVar7 == (int *)0x0) || (piVar7[3] == 0)) {
      return 2;
    }
    local_38[0] = local_38[0] & 0xffff0000;
    set_bit_in_value(iVar11,10);
    (*(code *)piVar7[3])(*(undefined4 *)(param_1 + 0xf0),local_38);
  }
  if (*(char *)(param_1 + 8) == '\0') {
switchD_0005d81a_caseD_0:
    iVar12 = extract_bit_from_value(iVar11,0xf);
    if (((iVar12 == 0) && (iVar3 != 0)) && (*(int *)(iVar3 + 0x14) != 0)) {
      set_bit_in_value(iVar11,10);
      pcVar10 = *(code **)(iVar3 + 0x14);
      iVar12 = *(int *)(param_1 + 0xf0);
LAB_0005d876:
      (*pcVar10)(iVar12);
      return 0;
    }
  }
  param_1 = set_bit_in_value(param_1,3);
  uVar6 = 0xe;
LAB_0005d908:
  set_bit_in_value(param_1,uVar6);
  uVar5 = update_ble_connection_state_and_allocate_memory();
  return uVar5;
}



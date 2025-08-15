/*
 * Function: bt_connection_disconnect_with_state_management_and_callback_validation_and_parameter_and_state_validation_and_callback_execution
 * Entry:    000583d0
 * Prototype: undefined bt_connection_disconnect_with_state_management_and_callback_validation_and_parameter_and_state_validation_and_callback_execution()
 */


undefined4
bt_connection_disconnect_with_state_management_and_callback_validation_and_parameter_and_state_validation_and_callback_execution
          (undefined4 *param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 local_78;
  char *local_74;
  uint local_70;
  undefined4 local_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [20];
  undefined1 local_3c [2];
  undefined2 local_3a;
  
  iVar6 = *param_3;
  local_64 = *(undefined4 *)(iVar6 + 8);
  local_3c[0] = 0;
  local_3a = 0x2801;
  iVar1 = compare_data_structures(*param_1,local_3c);
  if (iVar1 == 0) goto LAB_000584fc;
  local_3c[0] = 0;
  local_3a = 0x2800;
  iVar1 = compare_data_structures(*param_1,local_3c);
  if (iVar1 != 0) {
    iVar1 = param_3[2];
    if (iVar1 == 0) {
      return 1;
    }
    if (param_2 <= *(ushort *)(iVar1 + 2)) {
      return 1;
    }
    goto LAB_00058420;
  }
  uVar7 = FUN_00081bc0(param_3[1]);
  if ((uint)*(ushort *)(iVar6 + 0x1e) < (uint)*(ushort *)(iVar6 + 0x2e)) {
    uVar2 = (uint)*(ushort *)(iVar6 + 0x1e) - (int)uVar7;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar6 + 0x2e) - (int)uVar7;
  }
  if (uVar2 < 4) {
    return 0;
  }
  iVar1 = find_last_element_in_linked_list((int)((ulonglong)uVar7 >> 0x20));
  iVar3 = FUN_00081bc0(param_3[1]);
  if ((uint)*(ushort *)(iVar6 + 0x1e) < (uint)*(ushort *)(iVar6 + 0x2e)) {
    uVar2 = (uint)*(ushort *)(iVar6 + 0x1e) - iVar3;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar6 + 0x2e) - iVar3;
  }
  uVar4 = calculate_ble_buffer_available_space(iVar1 + 0xc);
  if (uVar2 < uVar4) {
    iVar3 = FUN_00081bc0(param_3[1]);
    if ((uint)*(ushort *)(iVar6 + 0x1e) < (uint)*(ushort *)(iVar6 + 0x2e)) {
      iVar3 = (uint)*(ushort *)(iVar6 + 0x1e) - iVar3;
    }
    else {
      iVar3 = (uint)*(ushort *)(iVar6 + 0x2e) - iVar3;
    }
  }
  else {
    iVar3 = calculate_ble_buffer_available_space(iVar1 + 0xc);
  }
  if (iVar3 == 0) {
    uVar7 = calculate_ble_memory_offset(*(undefined1 *)(param_3[1] + 10));
    iVar1 = FUN_000836de((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0,0);
    if (iVar1 == 0) {
      return 0;
    }
    append_linked_list_to_another(param_3[1],iVar1);
  }
  local_70 = 0;
  uVar2 = (*(code *)param_1[1])(local_64,param_1,auStack_60,0x10);
  if ((int)uVar2 < 0) goto LAB_000584fc;
  if (*(byte *)(param_3 + 4) == uVar2) {
    iVar6 = memcmp_byte_arrays(param_3[3],auStack_60);
LAB_00058534:
    if (iVar6 == 0) {
      *(undefined1 *)((int)param_3 + 0x11) = 0;
      puVar5 = (undefined2 *)ble_memory_allocation_utility(iVar1 + 0xc,4);
      param_3[2] = (int)puVar5;
      *puVar5 = (short)param_2;
      iVar1 = param_3[2];
LAB_00058420:
      *(short *)(iVar1 + 2) = (short)param_2;
      return 1;
    }
  }
  else {
    iVar6 = format_data_by_size(local_3c,param_3[3]);
    if (iVar6 == 0) {
      local_74 = "Unable to create UUID: size %u";
      local_70 = (uint)*(byte *)(param_3 + 4);
    }
    else {
      iVar6 = format_data_by_size(auStack_50,auStack_60,uVar2 & 0xff);
      if (iVar6 != 0) {
        iVar6 = compare_data_structures(local_3c,auStack_50);
        goto LAB_00058534;
      }
      local_74 = "Unable to create UUID: size %d";
      local_70 = uVar2;
    }
    local_78 = 3;
    FUN_00081ddc(&DAT_00088100,0x1880,&local_78);
  }
LAB_000584fc:
  param_3[2] = 0;
  return 1;
}



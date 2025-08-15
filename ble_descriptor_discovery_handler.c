/*
 * Function: ble_descriptor_discovery_handler
 * Entry:    0005b554
 * Prototype: undefined ble_descriptor_discovery_handler()
 */


undefined4 ble_descriptor_discovery_handler(int param_1,undefined4 param_2,int *param_3)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  int local_48;
  char *local_44;
  int iStack_40;
  undefined4 local_28;
  char *local_24;
  
  iVar5 = *param_3;
  if (*(int *)(param_1 + 8) == 0x5a465) {
    puVar6 = *(undefined **)(param_1 + 0xc);
    if ((*(short *)(puVar6 + 8) != 0) &&
       (iVar2 = ble_uuid_comparison_handler(iVar5,*puVar6,puVar6 + 1), iVar2 != 0)) {
      local_48 = ble_permission_access_validator(iVar5,param_1,0x12a);
      if (local_48 != 0) {
        if (local_48 == 3) {
          local_44 = "CCC %p not writable";
          iStack_40 = param_1;
          ble_data_processing_wrapper(&DAT_00088128,0x1880,&local_48);
          return 1;
        }
        if (local_48 == 5) {
          uVar7 = 3;
        }
        else {
          uVar7 = 2;
        }
        uVar3 = get_ble_property_value(iVar5);
        if (uVar3 < uVar7) {
          if (uVar7 <= *(byte *)(param_3 + 1)) {
            return 1;
          }
          *(char *)(param_3 + 1) = (char)uVar7;
          return 1;
        }
      }
      update_ble_descriptor_value(param_1,puVar6);
      if (((puVar6 == &DAT_20002a20) &&
          (iVar2 = find_ble_descriptor_by_uuid(*(undefined1 *)(iVar5 + 8),iVar5 + 0x90), iVar2 != 0)
          ) && ((*(short *)(iVar2 + 8) != 0 || (*(short *)(iVar2 + 10) != 0)))) {
        iVar4 = bt_connection_state_transition_with_parameter_validation(iVar5);
        uVar1 = *(undefined2 *)(iVar2 + 10);
        *(undefined2 *)(&DAT_2000ff14 + iVar4 * 4) = *(undefined2 *)(iVar2 + 8);
        *(undefined2 *)(&DAT_2000ff16 + iVar4 * 4) = uVar1;
        iVar2 = iVar4 * 0x18;
        *(undefined **)(&DAT_2000aecc + iVar2) = &DAT_2000ff14 + (short)iVar4 * 4;
        *(undefined **)(&DAT_2000aec0 + iVar2) = &DAT_0008b3dc;
        *(undefined4 *)(&DAT_2000aec4 + iVar2) = 0x82bd5;
        *(undefined2 *)(&DAT_2000aed0 + iVar2) = 4;
        iVar5 = ble_service_discovery_handler(iVar5,(short)iVar4 * 0x18 + 0x2000aebc);
        if (iVar5 != 0) {
          local_24 = "SC restore indication failed";
          local_28 = 2;
          ble_data_processing_wrapper(&DAT_00088128,0x1040,&local_28);
        }
      }
    }
  }
  return 1;
}



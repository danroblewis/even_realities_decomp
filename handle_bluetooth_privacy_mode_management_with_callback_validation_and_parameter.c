/*
 * Function: handle_bluetooth_privacy_mode_management_with_callback_validation_and_parameter
 * Entry:    00055734
 * Prototype: undefined handle_bluetooth_privacy_mode_management_with_callback_validation_and_parameter(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6)
 */


int handle_bluetooth_privacy_mode_management_with_callback_validation_and_parameter
              (undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
              undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 extraout_r2;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined8 uVar9;
  int local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  uint3 uStack_48;
  byte local_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined4 local_30;
  char *local_2c;
  
  iVar8 = *(int *)(param_2 + 0x10);
  iVar6 = iVar8;
  if (iVar8 != 0) {
    iVar6 = 1;
  }
  local_54 = 0;
  uVar9 = FUN_0008117a(&DAT_200020d4);
  puVar3 = (undefined1 *)((ulonglong)uVar9 >> 0x20);
  if (-1 < (int)uVar9 << 0x1d) {
    return -0xb;
  }
  iVar1 = handle_bluetooth_privacy_mode_management_with_state_management_and_callback(puVar3);
  if ((iVar1 == 0) || (iVar1 = FUN_00081130(puVar3), iVar1 == 0)) {
    return -0x16;
  }
  puVar7 = param_1 + 0x10;
  iVar2 = FUN_0008117a(puVar7);
  local_4c = (uint)(iVar2 << 0x18) >> 0x1f;
  if (iVar2 << 0x18 < 0) {
    return -0x78;
  }
  uStack_48 = (uint3)((uint)(iVar2 << 0x18) >> 0x1f);
  local_45 = (byte)iVar2 >> 7;
  uStack_44 = 0;
  uStack_43 = 0;
  uStack_42 = 0;
  local_50 = (undefined2)*(undefined4 *)(puVar3 + 8);
  local_4e = (undefined2)*(undefined4 *)(puVar3 + 0xc);
  uStack_43 = FUN_0008115c(*(undefined4 *)(puVar3 + 4),0xffffdfff);
  FUN_00081180(&DAT_200020d4);
  DAT_2000206f = *puVar3;
  *param_1 = DAT_2000206f;
  iVar6 = handle_bluetooth_privacy_mode_management_with_callback_validation
                    (param_1,*(undefined4 *)(puVar3 + 4),iVar6,(int)&local_4c + 1);
  if (iVar6 != 0) {
    return iVar6;
  }
  if (iVar8 == 0) {
    FUN_00081196(param_1 + 9,&DAT_000f2b3a);
    iVar6 = FUN_000812b2(puVar3);
    uVar5 = *(uint *)(puVar3 + 4);
    if (-1 < (int)(uVar5 << 0x1f)) goto LAB_000557f6;
    local_4c = local_4c & 0xffffff00;
  }
  else {
    FUN_00081196(param_1 + 9,*(undefined4 *)(puVar3 + 0x10));
    iVar6 = FUN_000812b2(puVar3);
    uVar5 = *(uint *)(puVar3 + 4);
    if ((int)(uVar5 << 0x1f) < 0) {
      if ((uVar5 & 0x10) == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = 4;
      }
      local_4c = CONCAT31(local_4c._1_3_,uVar4);
      FUN_00081196((int)&local_4c + 2,*(undefined4 *)(puVar3 + 0x10));
      iVar1 = 0;
    }
    else {
LAB_000557f6:
      if ((((int)(uVar5 << 0x16) < 0) || (param_5 != 0)) || (iVar6 == 2)) {
        local_4c = CONCAT31(local_4c._1_3_,2);
      }
      else {
        local_4c = CONCAT31(local_4c._1_3_,3);
        iVar1 = 0;
      }
    }
  }
  iVar2 = process_data_with_initialization_and_store(0x2006,0xf);
  if (iVar2 == 0) {
    return -0x69;
  }
  ble_memory_copy_utility(iVar2 + 0xc,&local_50,0xf);
  iVar2 = process_data_with_initialization_and_validation(0x2006,iVar2,0);
  if (iVar2 != 0) {
    return iVar2;
  }
  if ((iVar8 == 0) &&
     (iVar2 = FUN_000811ce(param_1,extraout_r2,param_4,param_5,param_6,iVar1,iVar6), iVar2 != 0)) {
    return iVar2;
  }
  if ((*(int *)(puVar3 + 4) << 0x1f < 0) &&
     (iVar2 = handle_bluetooth_privacy_mode_management_with_callback_execution_and_parameter
                        (param_1,&local_54), iVar2 != 0)) {
    if (iVar2 != -0xc) {
      return iVar2;
    }
    if (iVar8 != 0) {
      return -0xc;
    }
    if (*(int *)(puVar3 + 4) << 0x1e < 0) {
      return -0xc;
    }
  }
  else {
    iVar2 = FUN_000812d2(param_1,1);
    if (iVar2 != 0) {
      local_2c = "Failed to start advertiser";
      local_30 = 2;
      process_and_compress_data_with_validation(&DAT_000880f8,0x1040,&local_30,0);
      iVar6 = local_54;
      if (local_54 == 0) {
        return iVar2;
      }
      bt_connection_state_transition(local_54,0);
      validate_and_process_ble_characteristics_with_callback_validation_and_state_management(iVar6);
      return iVar2;
    }
    if (local_54 != 0) {
      validate_and_process_ble_characteristics_with_callback_validation_and_state_management();
    }
    uVar5 = 0;
    if (iVar8 != 0) goto LAB_0005590e;
  }
  uVar5 = ((*(uint *)(puVar3 + 4) ^ 2) << 0x1e) >> 0x1f;
LAB_0005590e:
  FUN_000811a4(puVar7,0xe,uVar5);
  FUN_000811a4(puVar7,8,iVar6 == 1);
  FUN_000811a4(puVar7,9,iVar6 == 2);
  FUN_000811a4(puVar7,10,*(uint *)(puVar3 + 4) & 1);
  FUN_000811a4(puVar7,0xb,iVar1);
  FUN_000811a4(puVar7,0xd,(uint)(*(int *)(puVar3 + 4) << 0x1d) >> 0x1f);
  return 0;
}



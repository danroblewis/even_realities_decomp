/*
 * Function: read_device_memory_and_manage_states
 * Entry:    00061070
 * Prototype: undefined read_device_memory_and_manage_states()
 */


int read_device_memory_and_manage_states(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_48;
  char *local_44;
  int iStack_40;
  uint local_3c;
  uint local_38;
  int local_34;
  undefined1 auStack_30 [12];
  
  if (param_3 == 0) {
    return -0x16;
  }
  if (param_4 == 0) {
    return 0;
  }
  if ((param_2 < 0) || (*(uint *)(*(int *)(param_1 + 4) + 0x2c) < param_2 + param_4)) {
    local_44 = "read error: address or size exceeds expected values.Addr: 0x%lx size %zu";
    local_48 = 4;
    iStack_40 = param_2;
    local_3c = param_4;
    FUN_000838d6(&DAT_00088270,0x2040,&local_48);
    return -0x16;
  }
  iVar1 = check_device_capabilities_and_state();
  if (iVar1 != 0) goto LAB_000611cc;
  FUN_00083906(param_1);
  uVar6 = -param_2 & 3U;
  if (param_4 <= (-param_2 & 3U)) {
    uVar6 = param_4;
  }
  uVar3 = param_3 & 3;
  if ((int)param_3 < 1) {
    uVar3 = -(-param_3 & 3);
  }
  uVar4 = -uVar3 & 3;
  if (param_4 <= (-uVar3 & 3)) {
    uVar4 = param_4;
  }
  uVar2 = param_4 - uVar6;
  uVar5 = param_4 - uVar4 & 0xfffffffc;
  uVar7 = uVar2 & 0xfffffffc;
  uVar3 = uVar7;
  if ((int)uVar5 < (int)uVar7) {
    uVar3 = uVar5;
  }
  uVar8 = uVar2 & 3;
  if ((int)uVar5 < (int)uVar7) {
    uVar8 = uVar2 - uVar5;
  }
  if (uVar3 == 0) {
LAB_00061156:
    if (uVar6 != 0) {
      local_34 = 4 - uVar6;
      iVar1 = FUN_00085206(auStack_30,4,param_2 - local_34);
      handle_device_state_change(*(undefined4 *)(param_1 + 0x10),iVar1);
      if (iVar1 != 0xbad0000) goto LAB_000611be;
      memcpy(param_3,auStack_30 + local_34,uVar6);
    }
    if (uVar8 == 0) {
      iVar1 = 0xbad0000;
    }
    else {
      iVar1 = FUN_00085206(auStack_30,8,param_2 + uVar6 + uVar3);
      handle_device_state_change(*(undefined4 *)(param_1 + 0x10),iVar1);
      if (iVar1 == 0xbad0000) {
        memcpy(uVar3 + uVar6 + param_3,auStack_30,uVar8);
      }
    }
  }
  else {
    local_34 = param_3 + uVar4;
    local_38 = uVar4;
    iVar1 = FUN_00085206(local_34,uVar3,param_2 + uVar6);
    handle_device_state_change(*(undefined4 *)(param_1 + 0x10),iVar1);
    if (iVar1 == 0xbad0000) {
      if (uVar6 != local_38) {
        copy_memory_safe(param_3 + uVar6,local_34,uVar3);
      }
      goto LAB_00061156;
    }
  }
LAB_000611be:
  FUN_0008392e(param_1);
  iVar1 = lookup_device_property_from_table(iVar1);
LAB_000611cc:
  initialize_device_and_ble_connection(param_1);
  return iVar1;
}



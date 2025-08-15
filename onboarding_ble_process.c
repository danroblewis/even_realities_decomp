/*
 * Function: onboarding_ble_process
 * Entry:    00042a64
 * Prototype: undefined onboarding_ble_process()
 */


undefined4 onboarding_ble_process(int param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  if (0x17 < *(byte *)((int)param_3 + 1)) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): ble rcv unknown onboarding action:%d\n","onboarding_ble_process",
                    (uint)*(byte *)((int)param_3 + 1),0,param_4);
      }
      else {
        handle_heartbeat();
      }
    }
    uVar7 = 3;
    *param_4 = *param_3;
    *(undefined1 *)(param_4 + 1) = 0xca;
    uVar8 = CONCAT44(DAT_20004bfc,DAT_20004bf8);
    goto LAB_00042a96;
  }
  DAT_20004bf0 = 0;
  uVar8 = FUN_0007d382();
  DAT_20004bfc = (undefined4)((ulonglong)uVar8 >> 0x20);
  DAT_20004bf8 = (undefined4)uVar8;
  if (*(char *)((int)param_3 + 1) == '\x12') goto LAB_00042b26;
  validate_and_update_work_mode_state();
  **(undefined1 **)(param_1 + 0x1014) = 1;
  uVar8 = FUN_0007d382();
  *(undefined8 *)(*(int *)(param_1 + 0x1014) + 4) = uVar8;
  *(undefined1 *)(*(int *)(param_1 + 0x1014) + 2) = *(undefined1 *)((int)param_3 + 1);
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): ble rcv onboarding action:%d\n","onboarding_ble_process",
                  (uint)*(byte *)(*(int *)(param_1 + 0x1014) + 2));
    }
    else {
      handle_heartbeat();
    }
  }
  puVar6 = *(undefined1 **)(param_1 + 0x1014);
  switch(puVar6[2]) {
  case 1:
    puVar6[1] = 1;
    puVar6 = *(undefined1 **)(param_1 + 0x1014);
    puVar5 = &DAT_000aa661;
    goto LAB_00042b1c;
  case 2:
    puVar5 = &DAT_000aa665;
    goto LAB_00042b1c;
  case 3:
    *(undefined4 *)(puVar6 + 0x1b) = 0x362f34;
    DAT_2001cdcf = 0;
    DAT_2001cdce = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x1014) + 3) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x1014) + 0xd) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x1014) + 0xe) = 0;
    iVar2 = *(int *)(param_1 + 0x1014);
    *(undefined1 *)(iVar2 + 0xf) = 0;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x11) = 0;
    *(undefined1 *)(iVar2 + 0x12) = 0;
    iVar2 = *(int *)(param_1 + 0x1014);
    *(undefined1 *)(iVar2 + 0x13) = 0;
    *(undefined1 *)(iVar2 + 0x14) = 0;
    *(undefined1 *)(iVar2 + 0x15) = 0;
    *(undefined1 *)(iVar2 + 0x16) = 0;
    iVar2 = *(int *)(param_1 + 0x1014);
    *(undefined1 *)(iVar2 + 0x17) = 0;
    *(undefined1 *)(iVar2 + 0x18) = 0;
    *(undefined1 *)(iVar2 + 0x19) = 0;
    *(undefined1 *)(iVar2 + 0x1a) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x1014) + 0xc) = 0;
    break;
  case 4:
  case 5:
  case 6:
    *(undefined4 *)(puVar6 + 0x1b) = 0x362f33;
    DAT_2001cdd2 = 0;
    DAT_2001cdce = 0;
    iVar2 = get_work_mode();
    *(undefined1 *)(*(int *)(param_1 + 0x1014) + 3) = *(undefined1 *)(iVar2 + 0xee4);
    if (*(char *)(*(int *)(param_1 + 0x1014) + 2) == '\x06') {
      *(undefined1 *)(*(int *)(param_1 + 0x1014) + 0x1f) = 0;
    }
    break;
  case 7:
    puVar5 = &DAT_000aa671;
    goto LAB_00042b1c;
  case 8:
  case 9:
    puVar5 = &DAT_000aa66d;
    goto LAB_00042b1c;
  case 10:
  case 0xb:
    *puVar6 = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x1014) + 1) = 0;
    break;
  case 0xc:
    puVar6[1] = 1;
    puVar6 = *(undefined1 **)(param_1 + 0x1014);
    puVar5 = &DAT_000aa675;
LAB_00042b1c:
    *(undefined4 *)(puVar6 + 0x1b) = *puVar5;
    break;
  case 0xf:
  case 0x11:
    iVar2 = get_work_mode();
    iVar4 = get_work_mode();
    *(undefined1 *)(*(int *)(iVar4 + 0x1014) + 3) = *(undefined1 *)(iVar2 + 0xee4);
  }
  reset_animation_counters();
  uVar8 = CONCAT44(DAT_20004bfc,DAT_20004bf8);
LAB_00042b26:
  DAT_20004bfc = (undefined4)((ulonglong)uVar8 >> 0x20);
  DAT_20004bf8 = (undefined4)uVar8;
  if (*(short *)(param_2 + 2) == 2) {
    uVar7 = 3;
    *param_4 = *param_3;
    *(undefined1 *)(param_4 + 1) = 0xc9;
    uVar8 = CONCAT44(DAT_20004bfc,DAT_20004bf8);
  }
  else if (*(short *)(param_2 + 2) == 3) {
    *param_4 = *param_3;
    *(undefined1 *)(param_4 + 1) = 0xc9;
    uVar1 = *(undefined1 *)(param_3 + 1);
    *(undefined1 *)((int)param_4 + 3) = uVar1;
    if (**(char **)(param_1 + 0x1014) != '\0') {
      *(undefined1 *)(param_1 + 0xcd) = uVar1;
    }
    uVar8 = CONCAT44(DAT_20004bfc,DAT_20004bf8);
    uVar7 = 4;
  }
  else {
    uVar7 = 0;
  }
  DAT_20004bfc = (undefined4)((ulonglong)uVar8 >> 0x20);
  DAT_20004bf8 = (undefined4)uVar8;
  if (*(char *)((int)param_3 + 1) != '\x12') {
    iVar2 = get_work_mode();
    uVar8 = CONCAT44(DAT_20004bfc,DAT_20004bf8);
    if (**(int **)(iVar2 + 0x1054) != 0xe) {
      iVar2 = compare_and_update_sensor_data();
      uVar8 = CONCAT44(DAT_20004bfc,DAT_20004bf8);
      if (iVar2 == 0) {
        uVar3 = get_work_mode();
        update_persist_task_status(uVar3,0xe,2);
        iVar2 = get_work_mode();
        iVar4 = get_work_mode();
        *(undefined1 *)(*(int *)(iVar4 + 0x1014) + 0x20) = *(undefined1 *)(iVar2 + 0xed5);
        iVar2 = get_work_mode();
        *(undefined1 *)(iVar2 + 0xed5) = 0x2a;
        uVar8 = CONCAT44(DAT_20004bfc,DAT_20004bf8);
      }
    }
  }
LAB_00042a96:
  DAT_20004bfc = (undefined4)((ulonglong)uVar8 >> 0x20);
  DAT_20004bf8 = (undefined4)uVar8;
  return uVar7;
}



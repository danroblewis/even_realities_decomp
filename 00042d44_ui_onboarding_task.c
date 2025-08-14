/*
 * Function: ui_onboarding_task
 * Entry:    00042d44
 * Prototype: undefined ui_onboarding_task()
 */


undefined4 ui_onboarding_task(int param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_14 [2];
  undefined1 local_12;
  undefined1 uStack_11;
  
  _local_14 = param_2;
  iVar3 = get_work_mode();
  FUN_000431b4(param_1 + 0x24);
  FUN_000432d0();
  if ((param_3 == 2) || (0x17 < *(byte *)(iVar3 + 0xf1))) {
    iVar3 = get_work_mode();
    **(undefined1 **)(iVar3 + 0x1014) = 0;
    iVar3 = get_work_mode();
    iVar5 = *(int *)(iVar3 + 0x1014);
    iVar3 = get_work_mode();
    *(undefined1 *)(iVar3 + 0xed5) = *(undefined1 *)(iVar5 + 0x20);
    gui_screen_clear();
  }
  else {
    if ((param_3 == 1) && (pcVar4 = (char *)get_work_mode(), *pcVar4 == '\x01')) {
      FUN_00047ba8();
    }
    pcVar4 = (char *)get_work_mode();
    uVar6 = CONCAT44(DAT_20004bfc,DAT_20004bf8);
    if (*pcVar4 == '\x01') {
      iVar3 = get_work_mode();
      uVar6 = CONCAT44(DAT_20004bfc,DAT_20004bf8);
      if (*(char *)(*(int *)(iVar3 + 0x1014) + 2) != '\0') {
        uVar6 = FUN_0007d382();
        uVar7 = FUN_0007d3c2((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_20004bf8,DAT_20004bfc);
        uVar6 = CONCAT44(DAT_20004bfc,DAT_20004bf8);
        if ((int)(uint)((uint)uVar7 < 0x3e9) <= (int)((ulonglong)uVar7 >> 0x20)) {
          DAT_20004bf0 = DAT_20004bf0 + 1;
          uVar6 = FUN_0007d382();
          DAT_20004bfc = (undefined4)((ulonglong)uVar6 >> 0x20);
          DAT_20004bf8 = (undefined4)uVar6;
          if (0x13 < DAT_20004bf0) {
            if (1 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): onboarding: disconnection between the AR Glasses and the Bluetooth application!\n"
                            ,"ui_onboarding_task");
                uVar6 = CONCAT44(DAT_20004bfc,DAT_20004bf8);
              }
              else {
                handle_heartbeat();
                uVar6 = CONCAT44(DAT_20004bfc,DAT_20004bf8);
              }
            }
            DAT_20004bfc = (undefined4)((ulonglong)uVar6 >> 0x20);
            DAT_20004bf8 = (undefined4)uVar6;
            DAT_20004bf0 = 0x14;
            iVar3 = get_work_mode();
            *(undefined1 *)(*(int *)(iVar3 + 0x1014) + 2) = 0xb;
            iVar3 = get_work_mode();
            _local_14 = (uint3)*(byte *)(*(int *)(iVar3 + 0x1014) + 2);
            iVar3 = onboarding_sync_data(local_14,3);
            if (iVar3 != 0) {
              return 0;
            }
            iVar3 = get_work_mode();
            **(undefined1 **)(iVar3 + 0x1014) = 0;
            iVar3 = get_work_mode();
            *(undefined1 *)(*(int *)(iVar3 + 0x1014) + 1) = 0;
            return 0;
          }
        }
      }
    }
    DAT_20004bfc = (undefined4)((ulonglong)uVar6 >> 0x20);
    DAT_20004bf8 = (undefined4)uVar6;
    iVar3 = get_work_mode();
    if (((uint)*(byte *)(*(int *)(iVar3 + 0x1014) + 2) == (int)DAT_200034f5) &&
       (iVar3 = get_work_mode(), *(char *)(*(int *)(iVar3 + 0x1014) + 3) == DAT_2001cdce)) {
      FUN_00040794(param_3);
      FUN_000417f8(param_3);
      return 0;
    }
    pcVar4 = (char *)get_work_mode();
    if (*pcVar4 == '\x01') {
      FUN_000429f8();
      iVar3 = get_work_mode();
      DAT_2001cdce = *(char *)(*(int *)(iVar3 + 0x1014) + 3);
      iVar3 = get_work_mode();
      local_14 = (undefined1  [2])
                 CONCAT11(DAT_2001cdce,*(undefined1 *)(*(int *)(iVar3 + 0x1014) + 2));
      iVar3 = get_work_mode();
      _local_14 = CONCAT12(*(undefined1 *)(*(int *)(iVar3 + 0x1014) + 0xc),local_14);
      iVar3 = get_work_mode();
      if ((*(char *)(*(int *)(iVar3 + 0x1014) + 2) != '\n') &&
         (iVar3 = get_work_mode(), *(char *)(*(int *)(iVar3 + 0x1014) + 2) != '\v')) {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            iVar3 = get_work_mode();
            bVar2 = *(byte *)(*(int *)(iVar3 + 0x1014) + 2);
            iVar3 = get_work_mode();
            DEBUG_PRINT("%s(): SYNC onboarding action_cmd %d and sub_step %d to slave\n",
                        "ui_onboarding_task",(uint)bVar2,
                        (uint)*(byte *)(*(int *)(iVar3 + 0x1014) + 3));
          }
          else {
            iVar3 = get_work_mode();
            uVar1 = *(undefined1 *)(*(int *)(iVar3 + 0x1014) + 2);
            iVar3 = get_work_mode();
            handle_heartbeat("%s(): SYNC onboarding action_cmd %d and sub_step %d to slave\n",
                             "ui_onboarding_task",uVar1,
                             *(undefined1 *)(*(int *)(iVar3 + 0x1014) + 3));
          }
        }
        onboarding_sync_data(local_14,3);
      }
      reset_animation_counters();
      FUN_00040708();
      uVar6 = FUN_0007d382();
      iVar3 = get_work_mode();
      *(undefined8 *)(*(int *)(iVar3 + 0x1014) + 4) = uVar6;
      iVar3 = get_work_mode();
      iVar5 = *(int *)(iVar3 + 0x1014);
      iVar3 = get_work_mode();
      *(undefined1 *)(iVar3 + 0xcd) = *(undefined1 *)(iVar5 + 3);
    }
  }
  return 0;
}



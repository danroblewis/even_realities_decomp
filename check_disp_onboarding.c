/*
 * Function: check_disp_onboarding
 * Entry:    00026a08
 * Prototype: undefined check_disp_onboarding()
 */


void check_disp_onboarding(int param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  if (((param_1 == 0) && (DAT_20018d93 != '\0')) &&
     ((iVar2 = FUN_0007c132(), iVar2 == 0 ||
      (iVar2 = get_work_mode(), *(char *)(*(int *)(iVar2 + 0x1014) + 2) != '\0')))) {
    if ((((DAT_20018d93 != '\0') && (iVar2 = get_work_mode(), **(int **)(iVar2 + 0x1054) == 0)) &&
        (iVar2 = get_work_mode(), *(char *)(iVar2 + 0xd5) == '\0')) &&
       (pcVar1 = (char *)get_work_mode(), *pcVar1 == '\x01')) {
      iVar2 = FUN_0007c132();
      if ((iVar2 != 0) && (iVar2 = get_work_mode(), *(char *)(*(int *)(iVar2 + 0x1014) + 1) == '\0')
         ) {
        return;
      }
      iVar2 = FUN_0007c132();
      if (iVar2 == 0) {
        iVar2 = get_work_mode();
        *(undefined1 *)(*(int *)(iVar2 + 0x1014) + 2) = 0;
      }
      iVar2 = get_work_mode();
      *(undefined1 *)(*(int *)(iVar2 + 0x1014) + 3) = 0;
      iVar2 = get_work_mode();
      DAT_2001cdce = *(undefined1 *)(*(int *)(iVar2 + 0x1014) + 3);
      iVar2 = get_work_mode();
      uVar3 = local_14;
      local_14._3_1_ = SUB41(uVar3,3);
      local_14._0_3_ =
           CONCAT12(1,CONCAT11(DAT_2001cdce,*(undefined1 *)(*(int *)(iVar2 + 0x1014) + 2)));
      iVar2 = onboarding_sync_data(&local_14,3);
      if (iVar2 == 0) {
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): ready to show onboarding...\n","check_disp_onboarding");
          }
          else {
            handle_heartbeat();
          }
        }
        validate_and_update_work_mode_state();
        iVar2 = get_work_mode();
        **(undefined1 **)(iVar2 + 0x1014) = 1;
        uVar3 = get_work_mode();
        update_persist_task_status(uVar3,0xe,2);
        iVar2 = get_work_mode();
        iVar4 = get_work_mode();
        *(undefined1 *)(*(int *)(iVar4 + 0x1014) + 0x20) = *(undefined1 *)(iVar2 + 0xed5);
        iVar2 = get_work_mode();
        *(undefined1 *)(iVar2 + 0xed5) = 0x2a;
        uVar5 = FUN_0007cb2c();
        iVar2 = get_work_mode();
        *(undefined8 *)(*(int *)(iVar2 + 0x1014) + 4) = uVar5;
        iVar2 = get_work_mode();
        iVar4 = *(int *)(iVar2 + 0x1014);
        iVar2 = get_work_mode();
        *(undefined1 *)(iVar2 + 0xcd) = *(undefined1 *)(iVar4 + 3);
      }
    }
  }
  else {
    pcVar1 = (char *)get_work_mode();
    if (*pcVar1 == '\x01') {
      FUN_0007d39e();
      return;
    }
  }
  return;
}



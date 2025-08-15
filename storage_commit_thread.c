/*
 * Function: storage_commit_thread
 * Entry:    00023844
 * Prototype: undefined storage_commit_thread()
 */


void storage_commit_thread(int param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  char *pcVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar3;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  bool bVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uVar15;
  int iVar16;
  
  uVar12 = 0;
  iVar16 = param_1;
  handle_operation_with_error_check();
  generate_lookup_table();
  uVar6 = extraout_r1;
LAB_0002385e:
  do {
    manage_ble_connection_state_comprehensive
              (param_1 + 0x80,uVar6,0xffffffff,0xffffffff,iVar16,param_2,param_3);
    bVar4 = false;
    uVar6 = extraout_r1_00;
    while (DAT_200079c4 != 0) {
      try_to_save_file(param_1);
      bVar4 = true;
      uVar6 = extraout_r1_01;
    }
    iVar7 = *(int *)(param_1 + 0x104c);
  } while ((iVar7 == 0x15) || (bVar4));
  if (0x1a < iVar7) {
    if (iVar7 != 0x3e) goto switchD_00023894_caseD_4;
    get_work_mode();
    update_burial_point_to_flash();
    goto LAB_000238ee;
  }
  switch(iVar7) {
  case 1:
    uVar6 = 1;
    pcVar9 = *(code **)(param_1 + 0x1040);
    pcVar2 = "brightness_level";
    iVar7 = param_1 + 0xed5;
    break;
  case 2:
    uVar6 = 1;
    pcVar9 = *(code **)(param_1 + 0x1040);
    pcVar2 = "3dof_enable";
    iVar7 = param_1 + 0xf60;
    break;
  case 3:
    uVar6 = 1;
    pcVar9 = *(code **)(param_1 + 0x1040);
    pcVar2 = "display_mode";
    iVar7 = param_1 + 0xfea;
    break;
  default:
    goto switchD_00023894_caseD_4;
  case 6:
    uVar6 = 0x6a;
    pcVar9 = *(code **)(param_1 + 0x1040);
    iVar7 = *(int *)(param_1 + 0xfec);
    pcVar2 = "dashboard_ts";
    break;
  case 7:
    uVar6 = 7;
    pcVar9 = *(code **)(param_1 + 0x1040);
    iVar7 = *(int *)(param_1 + 0xff0);
    pcVar2 = "countdown_ts";
    break;
  case 8:
    uVar6 = 0x16a;
    pcVar9 = *(code **)(param_1 + 0x1040);
    iVar7 = *(int *)(param_1 + 0xff4);
    pcVar2 = "user_sched_info";
    break;
  case 0xb:
    uVar6 = 1;
    pcVar9 = *(code **)(param_1 + 0x1040);
    pcVar2 = "wakeup_angle";
    iVar7 = param_1 + 0xef4;
    break;
  case 0x11:
    calculate_ble_schedule_timing(0x50000,0);
    change_work_mode_to(7);
    goto switchD_00023894_caseD_4;
  case 0x16:
    if (DAT_200079d4 == 0x1c0000) {
      process_encoded_data_from_flash();
      pcVar2 = (char *)get_work_mode();
      if (*pcVar2 == '\x01') {
        uVar15 = get_work_mode();
        uVar6 = (undefined4)((ulonglong)uVar15 >> 0x20);
        uVar5 = 0xd;
        puVar10 = *(undefined1 **)((int)uVar15 + 0x100c);
      }
      else {
        uVar15 = get_work_mode();
        uVar6 = (undefined4)((ulonglong)uVar15 >> 0x20);
        uVar5 = 0xc;
        puVar10 = *(undefined1 **)((int)uVar15 + 0x100c);
      }
      *puVar10 = uVar5;
    }
    DAT_200079d4 = 0;
    DAT_200079d8 = 0;
    CRC32_CHECKSUM_VALUE = 0;
    DAT_200079dc = 0;
    goto LAB_0002385e;
  case 0x17:
    goto switchD_00023894_caseD_17;
  case 0x19:
  case 0x1a:
    uVar12 = 1;
    goto LAB_000238ee;
  }
  (*pcVar9)(pcVar2,iVar7,uVar6);
LAB_000238ee:
  do {
    uVar13 = calculate_ble_connection_timing_with_validation();
    param_2 = (int)(uVar13 >> 0x20);
    manage_ble_connection_state_comprehensive(param_1 + 0x80,param_2,0x28000,0);
    lVar14 = calculate_ble_connection_timing_with_validation();
    lVar1 = (uVar13 & 0xffffffff) * 1000;
    uVar3 = (uint)((ulonglong)(lVar14 * 1000) >> 0x20);
    uVar11 = (uint)lVar1 >> 0xf | (param_2 * 1000 + (int)((ulonglong)lVar1 >> 0x20)) * 0x20000;
    uVar8 = (uint)(lVar14 * 1000) >> 0xf | uVar3 * 0x20000;
  } while ((int)((uVar3 >> 0xf) - (uint)(uVar8 < uVar11)) < (int)(uint)(uVar8 - uVar11 < 5000));
  *(undefined4 *)(param_1 + 0x104c) = 0;
  FUN_0007c34a(param_1,uVar12);
  uVar6 = extraout_r1_02;
  goto LAB_0002385e;
switchD_00023894_caseD_17:
  handle_work_mode_finish(param_1,0);
  change_work_mode_to(1);
  uVar6 = extraout_r1_03;
  goto LAB_0002385e;
switchD_00023894_caseD_4:
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): ignore.\n","storage_commit_thread");
    }
    else {
      handle_heartbeat();
    }
  }
  goto LAB_000238ee;
}



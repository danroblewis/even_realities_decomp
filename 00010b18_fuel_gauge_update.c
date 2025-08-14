/*
 * Function: fuel_gauge_update
 * Entry:    00010b18
 * Prototype: undefined fuel_gauge_update()
 */


int fuel_gauge_update(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float local_44;
  float local_40;
  float local_3c [2];
  
  iVar6 = 0xb;
  fVar8 = 0.0;
  while( true ) {
    iVar2 = FUN_00030cac();
    uVar10 = CONCAT44(DAT_20004794,DAT_20004790);
    if (iVar2 != 0) break;
    FUN_000330c4();
    iVar2 = FUN_0002e988(param_1,&local_44,&local_40,local_3c);
    FUN_000330d8();
    if (iVar2 < 0) {
      DEBUG_PRINT("Error: Could not read from charger device\n");
      return iVar2;
    }
    lVar9 = FUN_0007ceda();
    lVar9 = lVar9 - CONCAT44(DAT_20004794,DAT_20004790);
    if ((int)((ulonglong)lVar9 >> 0x20) < (int)(uint)((uint)lVar9 < 1000)) {
      return -1;
    }
    fVar8 = (float)FUN_0000e128();
    fVar7 = local_40;
    fVar8 = (float)FUN_0000e340(local_44,local_40,local_3c[0],fVar8 / 1000.0,0);
    if ((((fVar7 != 0.0) || (iVar6 = iVar6 + -1, iVar6 == 0)) ||
        (-1 < (int)((uint)(fVar8 < 100.0) << 0x1f))) || (fVar8 <= 0.0)) {
      uVar10 = FUN_0007ceda();
      goto LAB_00010c00;
    }
    get_schedule_timing(0xa4,0);
  }
  if (fVar8 <= 0.0) {
    return 0;
  }
LAB_00010c00:
  DAT_20004794 = (undefined4)((ulonglong)uVar10 >> 0x20);
  DAT_20004790 = (undefined4)uVar10;
  if (0 < LOG_LEVEL) {
    uVar10 = FUN_0000d848(local_44);
    uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar11 = FUN_0000d848(local_40);
    uVar12 = FUN_0000d848(local_3c[0]);
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): V: %.3f, I: %.3f, T: %.2f\n","fuel_gauge_update",(int)uVar10,uVar5,
                  (int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                  (int)((ulonglong)uVar12 >> 0x20));
      uVar10 = CONCAT44(DAT_20004794,DAT_20004790);
    }
    else {
      handle_heartbeat("%s(): V: %.3f, I: %.3f, T: %.2f\n","fuel_gauge_update",(int)uVar10,uVar5);
      uVar10 = CONCAT44(DAT_20004794,DAT_20004790);
    }
  }
  DAT_20004794 = (undefined4)((ulonglong)uVar10 >> 0x20);
  DAT_20004790 = (undefined4)uVar10;
  iVar2 = FUN_0007ceda();
  iVar6 = iVar2;
  fVar7 = fVar8;
  if (((fVar8 == 0.0) || (DAT_20007b74 == fVar8)) &&
     ((fVar8 < 100.0 &&
      (iVar6 = DAT_20007b70, fVar7 = DAT_20007b74, 119999 < (uint)(iVar2 - DAT_20007b70))))) {
    DAT_20018d90 = 1;
  }
  DAT_20007b74 = fVar7;
  DAT_20007b70 = iVar6;
  iVar6 = FUN_0007cefc();
  fVar7 = fVar8;
  if (iVar6 != 0) {
    fVar7 = fVar8 * 1.25;
  }
  if (0 < LOG_LEVEL) {
    uVar10 = FUN_0000d848(fVar8);
    uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar11 = FUN_0000d848(fVar7);
    if (IS_DEBUG == 0) {
      uVar3 = FUN_000232b8();
      DEBUG_PRINT("%s(): Original soc %.2f, New Soc %.2f, %s\n","fuel_gauge_update",(int)uVar10,
                  uVar5,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar3);
    }
    else {
      uVar3 = FUN_000232b8();
      handle_heartbeat("%s(): Original soc %.2f, New Soc %.2f, %s\n","fuel_gauge_update",(int)uVar10
                       ,uVar5,uVar11,uVar3);
    }
  }
  if (((int)((uint)(fVar7 < 0.0) << 0x1f) < 0) || (150.0 <= fVar7)) {
    fVar7 = 0.0;
  }
  else if (100.0 <= fVar7) {
    fVar7 = 100.0;
  }
  else if (((93.5 <= fVar7) && ((int)((uint)(fVar7 < 94.0) << 0x1f) < 0)) ||
          ((94.5 <= fVar7 && ((int)((uint)(fVar7 < 95.0) << 0x1f) < 0)))) {
    iVar6 = get_work_mode();
    uVar1 = 1;
    goto LAB_00010d44;
  }
  iVar6 = get_work_mode();
  uVar1 = 0;
LAB_00010d44:
  *(undefined1 *)(iVar6 + 0xfc2) = uVar1;
  iVar6 = get_work_mode();
  fVar8 = local_44 * 100.0 - 200.0;
  *(char *)(iVar6 + 0xfc0) = (0.0 < fVar7) * (char)(int)fVar7;
  iVar6 = get_work_mode();
  *(char *)(iVar6 + 0xfc4) = (0.0 < fVar8) * (char)(int)fVar8;
  if (local_40 == 0.0) {
    DAT_20018da2 = DAT_20018da2 + 1;
    if (5 < DAT_20018da2) {
      DAT_20018da2 = 0;
      uVar10 = FUN_0000d848(local_40);
      uVar10 = FUN_0000d58c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0xd2f1a9fc,0x3fc0624d);
      uVar10 = FUN_0000d8f8((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0x408f4000);
      iVar6 = get_work_mode();
      uVar1 = FUN_0000dea8((int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
      *(undefined1 *)(iVar6 + 0xfc5) = uVar1;
      iVar6 = get_work_mode();
      *(char *)(iVar6 + 0xfc8) = (char)(int)(local_40 * 1000.0);
    }
  }
  else {
    uVar10 = FUN_0000d848(local_40);
    uVar10 = FUN_0000d58c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0xd2f1a9fc,0x3fc0624d);
    uVar10 = FUN_0000d8f8((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0x408f4000);
    iVar6 = get_work_mode();
    uVar1 = FUN_0000dea8((int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
    *(undefined1 *)(iVar6 + 0xfc5) = uVar1;
    iVar6 = get_work_mode();
    *(char *)(iVar6 + 0xfc8) = (char)(int)(local_40 * 1000.0);
    DAT_20018da2 = 0;
  }
  iVar6 = get_work_mode();
  *(char *)(iVar6 + 0xfc6) = (0.0 < local_3c[0]) * (char)(int)local_3c[0];
  iVar6 = get_work_mode();
  *(short *)(iVar6 + 0xfca) = (short)(int)(local_3c[0] * 100.0);
  if ((((60.0 <= local_3c[0]) && ((int)((uint)(local_3c[0] < 120.0) << 0x1f) < 0)) ||
      ((-50.0 <= local_3c[0] && (local_3c[0] <= -20.0)))) &&
     (iVar6 = get_work_mode(), *(char *)(iVar6 + 0xfea) != '\f')) {
    send_event_status(4);
    pcVar4 = (char *)get_work_mode();
    if (*pcVar4 == '\x01') {
      uVar5 = get_work_mode();
      sync_to_slave(uVar5,4,0);
      uVar5 = get_work_mode();
      handle_work_mode_finish(uVar5,0);
    }
    else {
      uVar5 = get_work_mode();
      FUN_00027448(uVar5,7,0);
    }
    iVar6 = get_work_mode();
    *(undefined1 *)(iVar6 + 0xfea) = 0xc;
    uVar5 = get_work_mode();
    handle_work_mode_finish(uVar5,1);
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): #############################Abnormal temperature################################\n\n"
                    ,"fuel_gauge_update");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  return 0;
}



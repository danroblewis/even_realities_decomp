/*
 * Function: low_speed_peripheral_dispatch_thread
 * Entry:    0002a8d8
 * Prototype: undefined low_speed_peripheral_dispatch_thread()
 */


void low_speed_peripheral_dispatch_thread(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *format_string;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  undefined8 uVar11;
  longlong lVar12;
  
  change_work_mode_to(3);
  update_persist_task_status_to_idle(param_1);
  if (1 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): #enter\n","low_speed_peripheral_dispatch_thread");
    }
    else {
      handle_heartbeat();
    }
  }
  param_1[0xfc4] = '\0';
  param_1[0xfc5] = -0x80;
  param_1[0xfc0] = '\0';
  param_1[0xfc1] = '\0';
  if (*param_1 == '\x01') {
    if (param_1[0xfea] == '\f') {
      uVar6 = 4;
    }
    else {
      uVar6 = 5;
    }
    sync_to_slave(param_1,uVar6,0);
  }
  uVar8 = 0;
  cVar10 = '\0';
  do {
    uVar8 = uVar8 + 1 & 0xff;
    if (uVar8 % 5 == 0) {
      iVar1 = get_ancs_connection_handle();
      if ((((iVar1 == 0) || (param_1[0xae2] == '\0')) || (param_1[0xae3] == '\0')) ||
         (*(int *)(param_1 + 0x9b4) == 0)) {
        cVar10 = '\0';
      }
      else {
        cVar10 = cVar10 + '\x01';
        if ('\x04' < cVar10) {
          iVar3 = FUN_0008149a(iVar1,2);
          if ((iVar3 != 0) && (2 < LOG_LEVEL)) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): Failed to set security (err %d)\n\n",
                          "low_speed_peripheral_dispatch_thread",iVar3);
            }
            else {
              handle_heartbeat();
            }
          }
          cVar10 = -5;
        }
      }
      bVar7 = param_1[0xfc1];
      if ((byte)param_1[0xfc0] <= (byte)param_1[0xfc1]) {
        bVar7 = param_1[0xfc0];
      }
      param_1[0xde] = bVar7;
      fuel_gauge_update(&PTR_s_charger_00087d70,0);
      uVar6 = FUN_0002eb40();
      uVar2 = FUN_0002eb78();
      if (((iVar1 == 0) || (param_1[0xae3] != '\0')) || (*(int *)(param_1 + 0x9b4) == 0)) {
        check_bind_status(param_1,uVar6,uVar2);
        if (*param_1 != '\x01') {
          if (DAT_20018d91 == '\0') {
            param_1[0x6de] = param_1[0x6de] & 0xfe;
          }
          else {
            DAT_20018d91 = DAT_20018d91 + -1;
          }
          uVar9 = 0;
          goto LAB_0002abb8;
        }
        runtime_info_sync(param_1);
        uVar8 = 0;
LAB_0002ab84:
        uVar9 = uVar8;
        if (DAT_20018d91 == '\0') {
          param_1[0xe4] = param_1[0xe4] & 0xfc;
        }
        else {
          DAT_20018d91 = DAT_20018d91 + -1;
        }
LAB_0002a9de:
        iVar3 = sync_to_slave(param_1,0xc,0);
        if ((iVar3 < 500) && ((int)((uint)(byte)param_1[0xe4] << 0x1d) < 0)) {
          FUN_00033c5c();
LAB_0002a9fc:
          param_1[0xe4] = param_1[0xe4] & 0xfb;
        }
      }
      else {
        check_bind_status(param_1,uVar6,uVar2);
        if (*param_1 == '\x01') {
          runtime_info_sync(param_1);
          uVar8 = 1;
          if ((param_1[0x6de] & 1U) == 0) goto LAB_0002ab84;
          param_1[0xe4] = param_1[0xe4] | 3;
          DAT_20018d91 = '\x03';
          uVar9 = (byte)param_1[0x6de] & 1;
          goto LAB_0002a9de;
        }
        uVar9 = 1;
        DAT_20018d91 = '\x03';
        param_1[0x6de] = param_1[0x6de] | 1;
LAB_0002abb8:
        if ((int)((uint)(byte)(param_1[0xe4] ^ param_1[0x6de]) << 0x1f) < 0) {
          param_1[0x6df] = param_1[0x6df] + '\x01';
        }
        uVar5 = FUN_00027448(param_1,1,0);
        uVar8 = uVar9;
        if ((uVar5 < 500) && ((int)((uint)(byte)param_1[0x6de] << 0x1d) < 0)) {
          FUN_00033c5c();
          param_1[0x6de] = param_1[0x6de] & 0xfb;
          goto LAB_0002a9fc;
        }
      }
      FUN_00025528();
      while (param_1[1] == '\x01') {
        disable_watchdog();
        if (*param_1 == '\x01') {
          FUN_0007d1d6(param_1,*(undefined4 *)(param_1 + 0xfec));
        }
        lVar12 = FUN_0007cb2c();
        if (-(int)((ulonglong)(lVar12 - *(longlong *)(param_1 + 0x1060)) >> 0x20) <
            (int)(uint)(&UNK_000927bf < (undefined *)(lVar12 - *(longlong *)(param_1 + 0x1060)))) {
          if (0 < LOG_LEVEL) {
            format_string = "%s(): reboot because dfu exceed time\n";
            if (IS_DEBUG == 0) goto LAB_0002ac9e;
            handle_heartbeat("%s(): reboot because dfu exceed time\n",
                             "low_speed_peripheral_dispatch_thread");
          }
          do {
            FUN_0007cb8e(500);
            format_string = (char *)FUN_0004c0a8(1);
LAB_0002ac9e:
            DEBUG_PRINT(format_string);
          } while( true );
        }
        get_schedule_timing(0x28000,0);
      }
      if (DAT_2000302c == '\0') {
        disable_watchdog();
      }
      else if (DAT_20018d90 == '\0') {
        FUN_0002ae84();
      }
      if (*param_1 == '\x01') {
        FUN_0007d1d6(param_1,*(undefined4 *)(param_1 + 0xfec));
      }
      iVar3 = FUN_00016580();
      if ((iVar3 != 0) &&
         (uVar11 = FUN_0007cb2c(),
         (int)(uint)((uint)uVar11 < 60000) <= (int)((ulonglong)uVar11 >> 0x20))) {
        FUN_000167b4();
        set_system_navigation_mode(0);
      }
      if (1 < LOG_LEVEL) {
        bVar7 = param_1[0xfea];
        if (IS_DEBUG == 0) {
          uVar4 = FUN_00026c28();
          DEBUG_PRINT("%s(): Global Working Mode: %d get_glasses_ble_status %d ble_is_connected %d\n"
                      ,"low_speed_peripheral_dispatch_thread",(uint)bVar7,uVar4,uVar8);
        }
        else {
          uVar4 = FUN_00026c28();
          handle_heartbeat("%s(): Global Working Mode: %d get_glasses_ble_status %d ble_is_connected %d\n"
                           ,"low_speed_peripheral_dispatch_thread",(uint)bVar7,uVar4,uVar8);
        }
      }
      try_enter_low_power_mode();
      check_work_mode(uVar6,uVar2,uVar9);
      check_disp_onboarding(uVar6);
      if ((((iVar1 != 0) && (param_1[0x1068] == '\0')) &&
          (iVar3 = FUN_0007cb2c(), 30000 < (uint)(iVar3 - *(int *)(param_1 + 0xae4)))) &&
         (param_1[1] != '\x01')) {
        uVar6 = FUN_0007cb2c();
        *(undefined4 *)(param_1 + 0xae4) = uVar6;
        bt_connection_disconnect(iVar1,0x13);
      }
      if (param_1[0x108e] != '\0') {
        param_1[0x108e] = '\0';
        uVar6 = get_work_mode();
        handle_work_mode_finish(uVar6,0);
        reset_all_usr_data(param_1,1);
      }
      check_sw0_status();
      uVar8 = 0;
    }
    FUN_0007cbae();
    if (DAT_20018d90 == '\0') {
      FUN_0002ae84();
    }
    get_schedule_timing(0x199a,0);
  } while( true );
}



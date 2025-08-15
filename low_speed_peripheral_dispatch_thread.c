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
  undefined4 extraout_r2;
  undefined4 param3;
  undefined4 extraout_r2_00;
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
          iVar3 = update_ble_connection_flags_and_permissions(iVar1,2);
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
      uVar6 = compare_and_update_sensor_data();
      uVar2 = compare_and_update_sensor_data_alt();
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
          initialize_system_data_structures();
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
        uVar5 = process_message_and_sync(param_1,1,0);
        uVar8 = uVar9;
        if ((uVar5 < 500) && ((int)((uint)(byte)param_1[0x6de] << 0x1d) < 0)) {
          initialize_system_data_structures();
          param_1[0x6de] = param_1[0x6de] & 0xfb;
          goto LAB_0002a9fc;
        }
      }
      uVar11 = manage_adc_nfc_system_state();
      uVar4 = extraout_r2;
      while( true ) {
        if (param_1[1] != '\x01') break;
        disable_watchdog();
        if (*param_1 == '\x01') {
          handle_work_mode_timestamp_operations(param_1,*(undefined4 *)(param_1 + 0xfec));
        }
        lVar12 = calculate_mathematical_operation_with_bit_shifting();
        if (-(int)((ulonglong)(lVar12 - *(longlong *)(param_1 + 0x1060)) >> 0x20) <
            (int)(uint)(&UNK_000927bf < (undefined *)(lVar12 - *(longlong *)(param_1 + 0x1060)))) {
          if (0 < LOG_LEVEL) {
            format_string = "%s(): reboot because dfu exceed time\n";
            if (IS_DEBUG == 0) goto LAB_0002ac9e;
            handle_heartbeat("%s(): reboot because dfu exceed time\n",
                             "low_speed_peripheral_dispatch_thread");
          }
          do {
            delay_with_timing(500);
            format_string = (char *)system_fatal_error_handler_with_priority_control(1);
LAB_0002ac9e:
            DEBUG_PRINT(format_string);
          } while( true );
        }
        uVar11 = calculate_ble_schedule_timing(0x28000,0);
        uVar4 = extraout_r2_00;
      }
      if (DAT_2000302c == '\0') {
        disable_watchdog();
      }
      else if (DAT_20018d90 == '\0') {
        execute_hardware_operation_with_retry((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar4,0);
      }
      if (*param_1 == '\x01') {
        handle_work_mode_timestamp_operations(param_1,*(undefined4 *)(param_1 + 0xfec));
      }
      iVar3 = get_data_byte_99();
      if ((iVar3 != 0) &&
         (uVar11 = calculate_mathematical_operation_with_bit_shifting(),
         (int)(uint)((uint)uVar11 < 60000) <= (int)((ulonglong)uVar11 >> 0x20))) {
        check_driver_and_execute();
        set_system_navigation_mode(0);
      }
      if (1 < LOG_LEVEL) {
        bVar7 = param_1[0xfea];
        if (IS_DEBUG == 0) {
          uVar4 = check_work_mode_and_ancs_status();
          DEBUG_PRINT("%s(): Global Working Mode: %d get_glasses_ble_status %d ble_is_connected %d\n"
                      ,"low_speed_peripheral_dispatch_thread",(uint)bVar7,uVar4,uVar8);
        }
        else {
          uVar4 = check_work_mode_and_ancs_status();
          handle_heartbeat("%s(): Global Working Mode: %d get_glasses_ble_status %d ble_is_connected %d\n"
                           ,"low_speed_peripheral_dispatch_thread",(uint)bVar7,uVar4,uVar8);
        }
      }
      try_enter_low_power_mode();
      check_work_mode(uVar6,uVar2,uVar9);
      check_disp_onboarding(uVar6);
      if ((((iVar1 != 0) && (param_1[0x1068] == '\0')) &&
          (iVar3 = calculate_mathematical_operation_with_bit_shifting(),
          30000 < (uint)(iVar3 - *(int *)(param_1 + 0xae4)))) && (param_1[1] != '\x01')) {
        uVar6 = calculate_mathematical_operation_with_bit_shifting();
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
    uVar11 = check_work_mode_status_and_handle_states();
    if (DAT_20018d90 == '\0') {
      execute_hardware_operation_with_retry((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),param3,0);
    }
    calculate_ble_schedule_timing(0x199a,0);
  } while( true );
}



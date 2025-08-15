/*
 * Function: touch_key_thread
 * Entry:    0002a0d8
 * Prototype: undefined touch_key_thread()
 */


void touch_key_thread(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *format_string;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
  iVar8 = 0;
  iVar9 = 0;
LAB_0002a0e8:
  do {
    while ((manage_ble_connection_state_comprehensive(param_1 + 0xb0),
           *(char *)(param_1 + 1) == '\x01' ||
           (iVar1 = get_work_mode(), *(char *)(iVar1 + 1) == '\b'))) {
      delay_with_timing(5000);
    }
    if (TOUCH_SENSOR_SETUP_FLAG != 0) {
      monitor_sensor_status_and_initialize();
      TOUCH_SENSOR_SETUP_FLAG = 0;
    }
  } while (-1 < (int)((uint)*(ushort *)(param_1 + 0x105c) << 0x1f));
  if (TOUCH_SENSOR_STATUS_FLAG == '\x01') {
    iVar1 = setup_touch_sensor();
    FUN_0007d0aa(param_1 + 0x1078);
    if (10000 < iVar1 - iVar8) {
      iVar6 = 0;
      iVar4 = iVar6;
    }
    iVar5 = iVar4 + 1;
    TOUCH_SENSOR_STATUS_FLAG = '\0';
  }
  else {
    iVar5 = iVar4;
    iVar1 = iVar8;
    if (TOUCH_SENSOR_STATUS_FLAG == '\x02') {
      iVar6 = setup_touch_sensor();
      TOUCH_SENSOR_STATUS_FLAG = '\0';
      DAT_20018d89 = 0;
    }
  }
  iVar2 = setup_touch_sensor();
  iVar3 = setup_touch_sensor();
  iVar3 = iVar3 - iVar6;
  iVar10 = iVar6 - iVar1;
  iVar4 = iVar5;
  iVar8 = iVar1;
  if (iVar5 != 1) goto LAB_0002a2c0;
  iVar2 = iVar2 - iVar1;
  if (iVar7 != 0) {
    if (iVar6 == 0) {
LAB_0002a222:
      if (iVar9 == 0) {
        iVar4 = 0x23;
      }
      else {
        iVar4 = 3;
      }
      if (iVar4 * 30000 < iVar2) {
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): #############################Long press timeout %d################################\n\n"
                        ,"touch_key_thread",iVar9);
          }
          else {
            handle_heartbeat();
          }
        }
        iVar7 = 0;
        DAT_20007b18 = 6;
        validate_spin_lock_if_enabled();
        iVar4 = 0;
        iVar9 = iVar7;
        goto LAB_0002a0e8;
      }
      if (iVar1 < 0) goto LAB_0002a24e;
    }
    else {
      iVar4 = iVar7;
      if (iVar6 <= iVar1) goto LAB_0002a0e8;
LAB_0002a24e:
      if (10000 < iVar3) {
        if (15000 < iVar10) {
          iVar7 = 1;
          goto LAB_0002a260;
        }
        goto LAB_0002a174;
      }
    }
    iVar7 = 1;
    iVar4 = iVar5;
    goto LAB_0002a0e8;
  }
  if (iVar6 == 0) {
    FUN_0007d0aa(param_1 + 0x1078);
    if ((-20000 < *(int *)(param_1 + 0x1078)) && (*(int *)(param_1 + 0x1078) < 20000)) {
      iVar4 = 0;
      goto LAB_0002a0e8;
    }
    if (15000 < iVar2) {
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): ########################turn on the mic and start to speak! holdtime %d\n\n"
                      ,"touch_key_thread",iVar2);
        }
        else {
          handle_heartbeat();
        }
      }
      DAT_20007b18 = 4;
      validate_spin_lock_if_enabled();
      goto LAB_0002a222;
    }
    if (-1 < iVar1) {
      iVar7 = 0;
      goto LAB_0002a0e8;
    }
  }
  else if (iVar6 <= iVar1) goto LAB_0002a0e8;
  if (10000 < iVar3) {
    if (15000 < iVar10) goto LAB_0002a260;
LAB_0002a174:
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): #############################single click %d################################\n\n"
                    ,"touch_key_thread",*(undefined4 *)(param_1 + 0x1078));
      }
      else {
        handle_heartbeat();
      }
    }
    DAT_20007b18 = 1;
    goto LAB_0002a282;
  }
  goto LAB_0002a0e8;
LAB_0002a2c0:
  if (((iVar5 == 0) || (iVar6 <= iVar1)) || (iVar3 < 0x2711)) goto LAB_0002a0e8;
  if (15000 < iVar10) {
LAB_0002a260:
    if (iVar10 < 0x11941) {
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): #############################Short press end################################\n\n"
                      ,"touch_key_thread");
        }
        else {
          handle_heartbeat();
        }
      }
      iVar6 = 0;
      iVar4 = iVar5;
      iVar9 = 1;
      goto LAB_0002a0e8;
    }
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): #############################Long press end################################\n\n"
                    ,"touch_key_thread");
      }
      else {
        handle_heartbeat();
      }
    }
    DAT_20007b18 = 5;
    goto LAB_0002a282;
  }
  switch(iVar5) {
  case 2:
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): #############################double click################################\n\n"
                    ,"touch_key_thread");
      }
      else {
        handle_heartbeat();
      }
    }
    DAT_20007b18 = 2;
    goto LAB_0002a282;
  case 3:
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): #############################triple click################################\n\n"
                    ,"touch_key_thread");
      }
      else {
        handle_heartbeat();
      }
    }
    DAT_20007b18 = 3;
LAB_0002a282:
    validate_spin_lock_if_enabled();
    break;
  case 5:
    goto code_r0x0002a410;
  case 10:
    reset_all_usr_data(param_1,1);
    break;
  case 0xf:
    func_0x0007c058(10);
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): %d click, use high band for ESB\n\n","touch_key_thread",0xf);
      }
      else {
        handle_heartbeat();
      }
    }
  }
  iVar7 = 0;
  iVar4 = iVar7;
  goto LAB_0002a0e8;
code_r0x0002a410:
  if (0 < LOG_LEVEL) {
    format_string = "%s(): %d click, reboot now\n\n";
    if (IS_DEBUG == 0) goto code_r0x0002a476;
    handle_heartbeat("%s(): %d click, reboot now\n\n","touch_key_thread",5);
  }
  do {
    func_0x00017a28();
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): reset_pmic_on\n\n","touch_key_thread");
      }
      else {
        handle_heartbeat();
      }
    }
    func_0x00017a34();
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): reset_pmic_off\n\n","touch_key_thread");
      }
      else {
        handle_heartbeat();
      }
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): sys reboot because touch event, %d click, reboot now\n\n",
                      "touch_key_thread",5);
        }
        else {
          handle_heartbeat();
        }
      }
    }
    delay_with_timing(500);
    format_string = (char *)system_fatal_error_handler_with_priority_control(1);
code_r0x0002a476:
    DEBUG_PRINT(format_string);
  } while( true );
}



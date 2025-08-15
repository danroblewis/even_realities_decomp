/*
 * Function: process_touch_sensor_events
 * Entry:    00028a1c
 * Prototype: void process_touch_sensor_events(int sensor_data, int timing_param, undefined4 additional_param)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void process_touch_sensor_events(int sensor_data, int timing_param, undefined4
   additional_param) */

void process_touch_sensor_events(int sensor_data,int timing_param,undefined4 additional_param)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  
  iVar4 = 0;
  iVar6 = 0;
  iVar5 = 0;
  iVar7 = 0;
  iVar9 = sensor_data;
LAB_00028a32:
  do {
    while( true ) {
      uVar8 = func_0x00032fdc();
      if ((int)uVar8 == 1) {
        return;
      }
      thunk_FUN_00072908(sensor_data + 0xb0,(int)((ulonglong)uVar8 >> 0x20),0x4000,0,iVar9,
                         timing_param,additional_param);
      if ((*(char *)(sensor_data + 1) != '\x01') &&
         (iVar1 = get_work_mode(), *(char *)(iVar1 + 1) != '\b')) break;
      delay_with_timing(5000);
    }
  } while (-1 < (int)((uint)*(ushort *)(sensor_data + 0x105c) << 0x1f));
  if (TOUCH_SENSOR_SETUP_FLAG != 0) {
    setup_touch_sensor();
    monitor_sensor_status_and_initialize();
    setup_touch_sensor();
    TOUCH_SENSOR_SETUP_FLAG = 0;
  }
  if (TOUCH_SENSOR_STATUS_FLAG == '\x01') {
    iVar1 = setup_touch_sensor();
    FUN_0007d0aa(sensor_data + 0x1078);
    if (30000 < iVar1 - iVar7) {
      iVar6 = 0;
      iVar4 = iVar6;
    }
    iVar4 = iVar4 + 1;
    TOUCH_SENSOR_STATUS_FLAG = '\0';
  }
  else {
    iVar1 = iVar7;
    if (TOUCH_SENSOR_STATUS_FLAG == '\x02') {
      iVar6 = setup_touch_sensor();
      TOUCH_SENSOR_STATUS_FLAG = '\0';
    }
  }
  timing_param = setup_touch_sensor();
  iVar2 = setup_touch_sensor();
  iVar7 = iVar1;
  if (iVar4 != 1) goto LAB_00028b3a;
  if (iVar5 == 0) {
    if ((iVar6 == 0) && (30000 < timing_param - iVar1)) {
      DEBUG_PRINT("########################turn on the mic and start to speak! holdtime %d\n");
      timing_param = iVar2;
      goto LAB_00028aae;
    }
  }
  else {
LAB_00028aae:
    iVar5 = 1;
  }
  goto LAB_00028ab0;
LAB_00028b3a:
  if (iVar4 == 0) goto LAB_00028a32;
LAB_00028ab0:
  if ((iVar6 <= iVar1) || (iVar2 - iVar6 < 0x2711)) goto LAB_00028a32;
  if (150000 < iVar6 - iVar1) {
    DEBUG_PRINT("#############################long press################################\n");
    FUN_0007d0aa(sensor_data + 0x1078);
code_r0x00028ad6:
    DEBUG_PRINT("aw9320x_diff_get: %d\n",*(undefined4 *)(sensor_data + 0x1078));
    goto LAB_00028b4e;
  }
  if (iVar6 - iVar1 < 0x15f91) {
    switch(iVar4) {
    case 1:
      if (iVar5 == 0) {
        DEBUG_PRINT("#############################single click################################\n");
        goto code_r0x00028ad6;
      }
      pcVar3 = "turn off mic now\n";
      goto code_r0x00028b4a;
    case 2:
      func_0x0002893c();
      break;
    case 3:
      on_triple_click();
      break;
    case 4:
      if (0 < LOG_LEVEL) {
        pcVar3 = "%s(): sys reboot because touch event, %d click, reboot now\n\n";
        if (IS_DEBUG == 0) goto code_r0x00028ba2;
        handle_heartbeat("%s(): sys reboot because touch event, %d click, reboot now\n\n",
                         "product_test_touch_key_thread",4);
      }
      do {
        delay_with_timing(500);
        pcVar3 = (char *)system_fatal_error_handler_with_priority_control(1);
code_r0x00028ba2:
        DEBUG_PRINT(pcVar3);
      } while( true );
    default:
      func_0x00028964();
      set_sensor_debug_flag(1);
    }
  }
  else {
    pcVar3 = "#############################short press################################\n";
code_r0x00028b4a:
    DEBUG_PRINT(pcVar3);
  }
LAB_00028b4e:
  iVar4 = 0;
  iVar5 = iVar4;
  goto LAB_00028a32;
}



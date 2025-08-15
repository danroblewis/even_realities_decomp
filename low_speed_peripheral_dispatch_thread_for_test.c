/*
 * Function: low_speed_peripheral_dispatch_thread_for_test
 * Entry:    0002685c
 * Prototype: undefined low_speed_peripheral_dispatch_thread_for_test()
 */


void low_speed_peripheral_dispatch_thread_for_test
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *format_string;
  undefined4 param3;
  int iVar2;
  undefined8 uVar3;
  
  if (1 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): #enter\n","low_speed_peripheral_dispatch_thread_for_test",param_3,0,param_4
                 );
    }
    else {
      handle_heartbeat();
    }
  }
  iVar2 = 0;
  *(undefined2 *)(param_1 + 0xfc0) = 0;
  *(undefined2 *)(param_1 + 0xfc4) = 0x8000;
  do {
    if (*(char *)(param_1 + 1) == '\x01') {
      disable_watchdog();
      set_sensor_debug_flag(0);
      enable_dmic_stream();
      if (0x22 < iVar2) {
        if (0 < LOG_LEVEL) {
          format_string = "%s(): reboot because dfu exceed time\r\n\n";
          if (IS_DEBUG == 0) goto LAB_000268f2;
          handle_heartbeat("%s(): reboot because dfu exceed time\r\n\n",
                           "low_speed_peripheral_dispatch_thread_for_test");
        }
        do {
          delay_with_timing(500);
          format_string = (char *)system_fatal_error_handler_with_priority_control(1);
LAB_000268f2:
          DEBUG_PRINT(format_string);
        } while( true );
      }
      uVar1 = 0x28000;
      iVar2 = iVar2 + 1;
    }
    else {
      uVar3 = manage_adc_nfc_system_state();
      if (DAT_2000302c == '\0') {
        disable_watchdog();
      }
      else if (DAT_20018d90 == '\0') {
        execute_hardware_operation_with_retry((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param3,0);
      }
      fuel_gauge_update(&PTR_s_charger_00087d70,0);
      uVar1 = 0x8000;
    }
    get_schedule_timing(uVar1,0);
  } while( true );
}



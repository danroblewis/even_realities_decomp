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
  int iVar2;
  
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
      FUN_00032fd0(0);
      enable_dmic_stream();
      if (0x22 < iVar2) {
        if (0 < LOG_LEVEL) {
          format_string = "%s(): reboot because dfu exceed time\r\n\n";
          if (IS_DEBUG == 0) goto LAB_000268f2;
          handle_heartbeat("%s(): reboot because dfu exceed time\r\n\n",
                           "low_speed_peripheral_dispatch_thread_for_test");
        }
        do {
          FUN_0007cb8e(500);
          format_string = (char *)FUN_0004c0a8(1);
LAB_000268f2:
          DEBUG_PRINT(format_string);
        } while( true );
      }
      uVar1 = 0x28000;
      iVar2 = iVar2 + 1;
    }
    else {
      FUN_00025528();
      if (DAT_2000302c == '\0') {
        disable_watchdog();
      }
      else if (DAT_20018d90 == '\0') {
        FUN_0002ae84();
      }
      fuel_gauge_update(&PTR_s_charger_00087d70,0);
      uVar1 = 0x8000;
    }
    get_schedule_timing(uVar1,0);
  } while( true );
}



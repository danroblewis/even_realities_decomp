/*
 * Function: reset_all_usr_data
 * Entry:    0002316c
 * Prototype: undefined reset_all_usr_data()
 */


void reset_all_usr_data(char *param_1,int param_2)

{
  char *format_string;
  int iVar1;
  
  reset_system_parameter_and_byte();
  if (*param_1 == '\x01') {
    delAudioStreamRecord(0xff);
    handle_unsigned_division_and_calculate_ble_schedule_timing_alt2(1000);
  }
  iVar1 = 0;
  do {
    deleteQuickNoteData(iVar1);
    iVar1 = iVar1 + 1;
    handle_unsigned_division_and_calculate_ble_schedule_timing_alt2(200);
  } while (iVar1 != 4);
  cleanAppLanguageInfo();
  handle_unsigned_division_and_calculate_ble_schedule_timing_alt2(200);
  cleanDashBoardStartUpModeInfo();
  handle_unsigned_division_and_calculate_ble_schedule_timing_alt2(200);
  reset_usr_setting(param_1);
  verify_user_data_reset_operation(param_1);
  handle_unsigned_division_and_calculate_ble_schedule_timing_alt2(500);
  reset_all_static_info();
  handle_unsigned_division_and_calculate_ble_schedule_timing_alt2(500);
  process_data_with_initialization_and_state_management(0);
  if (param_2 != 0) {
    handle_unsigned_division_and_calculate_ble_schedule_timing_alt2(1000);
    power_down_and_execute(1);
    handle_unsigned_division_and_calculate_ble_schedule_timing_alt2(1000);
    if (0 < LOG_LEVEL) {
      format_string = "%s(): sys reboot because enter ship mode failed\n";
      if (IS_DEBUG == 0) goto LAB_00023216;
      handle_heartbeat("%s(): sys reboot because enter ship mode failed\n","reset_all_usr_data");
    }
    do {
      handle_unsigned_division_and_calculate_ble_schedule_timing_alt2(500);
      format_string = (char *)system_fatal_error_handler_with_priority_control(1);
LAB_00023216:
      DEBUG_PRINT(format_string);
    } while( true );
  }
  return;
}



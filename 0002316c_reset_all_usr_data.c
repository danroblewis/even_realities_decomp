/*
 * Function: reset_all_usr_data
 * Entry:    0002316c
 * Prototype: undefined reset_all_usr_data()
 */


void reset_all_usr_data(char *param_1,int param_2)

{
  char *format_string;
  int iVar1;
  
  FUN_00037098();
  if (*param_1 == '\x01') {
    delAudioStreamRecord(0xff);
    FUN_0007c26e(1000);
  }
  iVar1 = 0;
  do {
    deleteQuickNoteData(iVar1);
    iVar1 = iVar1 + 1;
    FUN_0007c26e(200);
  } while (iVar1 != 4);
  cleanAppLanguageInfo();
  FUN_0007c26e(200);
  cleanDashBoardStartUpModeInfo();
  FUN_0007c26e(200);
  reset_usr_setting(param_1);
  FUN_000230bc(param_1);
  FUN_0007c26e(500);
  reset_all_static_info();
  FUN_0007c26e(500);
  FUN_0005420c(0);
  if (param_2 != 0) {
    FUN_0007c26e(1000);
    FUN_000167f4(1);
    FUN_0007c26e(1000);
    if (0 < LOG_LEVEL) {
      format_string = "%s(): sys reboot because enter ship mode failed\n";
      if (IS_DEBUG == 0) goto LAB_00023216;
      handle_heartbeat("%s(): sys reboot because enter ship mode failed\n","reset_all_usr_data");
    }
    do {
      FUN_0007c26e(500);
      format_string = (char *)FUN_0004c0a8(1);
LAB_00023216:
      DEBUG_PRINT(format_string);
    } while( true );
  }
  return;
}



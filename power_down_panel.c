/*
 * Function: power_down_panel
 * Entry:    00015fdc
 * Prototype: undefined power_down_panel()
 */


undefined4 power_down_panel(void)

{
  int iVar1;
  char *format_string;
  
  FUN_0007c038(2);
  call_conditional_event_handler();
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): turn off -2v for panel.\n","power_down_panel");
    }
    else {
      handle_heartbeat();
    }
  }
  FUN_0007c038(0x10);
  iVar1 = FUN_00083dc8(&DAT_00087c80,4,3,1);
  if (iVar1 < 0) {
    if (LOG_LEVEL < 1) {
      return 0;
    }
    format_string = "%s(): Could not set buck2.\n";
  }
  else {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): disable buck2 1.2v\n","power_down_panel");
      }
      else {
        handle_heartbeat();
      }
    }
    FUN_0007c038(5);
    iVar1 = FUN_00083dc8(&DAT_00087c80,8,1);
    if (iVar1 < 0) {
      if (LOG_LEVEL < 1) {
        return 0;
      }
      format_string = "%s(): Could not set ldsw1.\n";
    }
    else {
      if (LOG_LEVEL < 1) {
        return 0;
      }
      format_string = "%s(): disable ldsw1 1.8v for panel\n";
    }
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(format_string,"power_down_panel");
  }
  else {
    handle_heartbeat();
  }
  return 0;
}



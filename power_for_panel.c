/*
 * Function: power_for_panel
 * Entry:    00015df4
 * Prototype: undefined power_for_panel()
 */


undefined4 power_for_panel(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = pack_parameters_and_call_callback(&DAT_00087c80,8,0,1,param_1,param_2);
  if (iVar1 < 0) {
    if (LOG_LEVEL < 1) {
      return 0;
    }
    pcVar2 = "%s(): Could not set ldsw1.\n";
    goto LAB_00015e1a;
  }
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): enable ldsw1 1.8v for panel\n","power_for_panel");
    }
    else {
      handle_heartbeat();
    }
  }
  calculate_ble_schedule_timing_with_division(1);
  if (*(char *)(WORK_MODE + 0xed4) == '\x01') {
    iVar1 = pack_parameters_and_call_callback(&DAT_00087c80,4,10,1,param_1,param_2);
    if (iVar1 < 0) {
      if (LOG_LEVEL < 1) {
        return 0;
      }
      pcVar2 = "%s(): Could not set buck2 to 1.1v.\n";
      goto LAB_00015e1a;
    }
    if (0 < LOG_LEVEL) {
      pcVar2 = "%s(): set buck2 to 1.1v\n";
LAB_00015e82:
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(pcVar2,"power_for_panel");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else {
    iVar1 = pack_parameters_and_call_callback(&DAT_00087c80,4,10,2,param_1,param_2);
    if (iVar1 < 0) {
      if (LOG_LEVEL < 1) {
        return 0;
      }
      pcVar2 = "%s(): Could not set buck2 to 1.2v.\n";
      goto LAB_00015e1a;
    }
    if (0 < LOG_LEVEL) {
      pcVar2 = "%s(): set buck2 to 1.2v\n";
      goto LAB_00015e82;
    }
  }
  iVar1 = handle_ble_operations_with_mutex_protection(&DAT_00087c80,4,0xf,2,2);
  if (iVar1 < 0) {
    if (LOG_LEVEL < 1) {
      return 0;
    }
    pcVar2 = "%s(): Could not enable software control\n";
  }
  else {
    iVar1 = pack_parameters_and_call_callback(&DAT_00087c80,4,2,1);
    if (iVar1 < 0) {
      if (LOG_LEVEL < 1) {
        return 0;
      }
      pcVar2 = "%s(): Could not set buck2.\n";
    }
    else {
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): enable buck2.\n","power_for_panel");
        }
        else {
          handle_heartbeat();
        }
      }
      calculate_ble_schedule_timing_with_division(1);
      call_conditional_event_handler_inverted();
      calculate_ble_schedule_timing_with_division(0xf);
      if (LOG_LEVEL < 1) {
        return 0;
      }
      pcVar2 = "%s(): turn on -2v for panel.\n";
    }
  }
LAB_00015e1a:
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(pcVar2,"power_for_panel");
  }
  else {
    handle_heartbeat();
  }
  return 0;
}



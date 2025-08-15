/*
 * Function: init_watchdog
 * Entry:    0002ace0
 * Prototype: undefined init_watchdog()
 */


undefined4
init_watchdog(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *format_string;
  int iVar2;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uStack_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  local_24 = param_4;
  if (3 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): Watchdog sample application\n","init_watchdog");
    }
    else {
      handle_heartbeat();
    }
  }
  iVar1 = check_driver_ready(&HARDWARE_OPERATION_MESSAGE);
  if (iVar1 == 0) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): %s: device not ready.\n","init_watchdog","watchdog");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else {
    fill_memory_buffer(&uStack_30,0,0x10);
    local_2c = 30000;
    local_24 = CONCAT31(local_24._1_3_,2);
    if (3 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): Callback in RESET_SOC disabled for this platform\n","init_watchdog");
      }
      else {
        handle_heartbeat();
      }
    }
    HARDWARE_OPERATION_PARAMETER =
         configure_timer_interrupt_parameters(&HARDWARE_OPERATION_MESSAGE,&uStack_30);
    if (HARDWARE_OPERATION_PARAMETER == -0x86) {
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): Callback support rejected, continuing anyway\n","init_watchdog");
        }
        else {
          handle_heartbeat();
        }
      }
      local_28 = 0;
      HARDWARE_OPERATION_PARAMETER =
           configure_timer_interrupt_parameters(&HARDWARE_OPERATION_MESSAGE,&uStack_30);
    }
    if (HARDWARE_OPERATION_PARAMETER < 0) {
      if (LOG_LEVEL < 1) {
        return 0;
      }
      format_string = "%s(): Watchdog install error\n";
    }
    else {
      iVar1 = conditional_callback_execution_based_on_character_value(&HARDWARE_OPERATION_MESSAGE,2)
      ;
      if (iVar1 < 0) {
        if (LOG_LEVEL < 1) {
          return 0;
        }
        format_string = "%s(): Watchdog setup error\n";
      }
      else {
        if (3 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): Feeding watchdog %d times\n","init_watchdog",5);
          }
          else {
            handle_heartbeat();
          }
        }
        iVar1 = 5;
        do {
          if (3 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): Feeding watchdog...\n","init_watchdog");
            }
            else {
              handle_heartbeat();
            }
          }
          iVar2 = conditional_callback_execution_with_parameter_packing
                            (&HARDWARE_OPERATION_MESSAGE,HARDWARE_OPERATION_PARAMETER);
          if (iVar2 == 0) break;
          calculate_ble_schedule_timing(0x667,0);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        if (LOG_LEVEL < 4) {
          return 0;
        }
        format_string = "%s(): Waiting for reset...\n";
      }
    }
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(format_string,"init_watchdog");
    }
    else {
      handle_heartbeat();
    }
  }
  return 0;
}



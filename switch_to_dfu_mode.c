/*
 * Function: switch_to_dfu_mode
 * Entry:    000158bc
 * Prototype: undefined switch_to_dfu_mode()
 */


void switch_to_dfu_mode(undefined4 param_1)

{
  int iVar1;
  int extraout_r1;
  
  DFU_MODE_SWITCH_BUFFER = 1;
  iVar1 = check_privilege_level();
  if (iVar1 != 0) {
    z_spin_lock_valid(param_1);
    return;
  }
  iVar1 = (**(code **)(WORK_MODE + 0x1040))("runtime_mode",&DFU_MODE_SWITCH_BUFFER,1);
  if (iVar1 == 0) {
    if (0 < LOG_LEVEL) {
      iVar1 = IS_DEBUG;
      if (IS_DEBUG == 0) goto LAB_00015930;
      handle_heartbeat("%s(): sys reboot because system reset %d, %d\n","switch_to_dfu_mode",0,
                       DFU_MODE_SWITCH_BUFFER);
    }
    do {
      calculate_ble_schedule_timing_with_division(500);
      system_fatal_error_handler_with_priority_control(1);
      iVar1 = extraout_r1;
LAB_00015930:
      DEBUG_PRINT("%s(): sys reboot because system reset %d, %d\n","switch_to_dfu_mode",iVar1);
    } while( true );
  }
  if (LOG_LEVEL < 1) {
    return;
  }
  if (IS_DEBUG != 0) {
    handle_heartbeat("%s(): failed to switch to ble mode [%d]\n","switch_to_dfu_mode",iVar1);
    return;
  }
  DEBUG_PRINT("%s(): failed to switch to ble mode [%d]\n","switch_to_dfu_mode");
  return;
}



/*
 * Function: panel_off
 * Entry:    00046d2c
 * Prototype: undefined panel_off()
 */


undefined4 panel_off(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x374) = param_1 + -0x5c;
  if (*(int *)(param_1 + -0x48) != 0) {
    *(undefined4 *)(param_1 + 0x35c) = 0;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): panel_suspend enter!\n","panel_off");
      }
      else {
        handle_heartbeat();
      }
    }
    iVar1 = get_system_flag();
    if (iVar1 == 0) {
      opt3007_chip_deinit();
    }
    (**(code **)(param_1 + -0x58))(*(undefined4 *)(param_1 + 0x374));
    power_down_panel();
  }
  return 0;
}



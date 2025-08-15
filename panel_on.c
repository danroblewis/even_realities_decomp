/*
 * Function: panel_on
 * Entry:    00046dd8
 * Prototype: undefined panel_on()
 */


undefined4 panel_on(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x374) = param_1 + -0x5c;
  if (*(int *)(param_1 + -0x48) == 0) {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): panel_on enter!\n","panel_on");
      }
      else {
        handle_heartbeat();
      }
    }
    power_for_panel();
    (**(code **)(param_1 + -0x5c))(*(undefined4 *)(param_1 + 0x374));
    panel_init();
    *(undefined4 *)(param_1 + 0x35c) = 1;
    iVar1 = get_system_flag();
    if (iVar1 == 0) {
      opt3007_chip_init();
    }
  }
  return 0;
}



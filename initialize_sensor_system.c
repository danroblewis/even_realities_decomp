/*
 * Function: initialize_sensor_system
 * Entry:    00030c90
 * Prototype: undefined initialize_sensor_system()
 */


void initialize_sensor_system(void)

{
  int iVar1;
  
  iVar1 = initialize_and_configure_sensor_complete(&DAT_20002408);
  if (-1 < iVar1) {
    DISPLAY_DISPATCH_THREAD_EXTENDED_ULTIMATE_FINAL_COMPREHENSIVE_COMPLETION_STATE = 1;
  }
  return;
}



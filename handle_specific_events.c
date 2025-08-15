/*
 * Function: handle_specific_events
 * Entry:    0001793c
 * Prototype: undefined handle_specific_events()
 */


void handle_specific_events(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  handle_bit_pattern_event(&DAT_000889d0,0x200000);
  if ((param_3 == 0x200) &&
     (DISPLAY_DISPATCH_THREAD_EXTENDED_ULTIMATE_FINAL_COMPREHENSIVE_COMPLETION_STATE != 0)) {
    TOUCH_SENSOR_SETUP_FLAG = 1;
    iVar1 = get_work_mode();
    z_spin_lock_valid(iVar1 + 0xb0);
  }
  handle_bit_pattern_event(&DAT_000889d0,0x5c00000);
  return;
}



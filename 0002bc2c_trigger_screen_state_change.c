/*
 * Function: trigger_screen_state_change
 * Entry:    0002bc2c
 * Prototype: undefined trigger_screen_state_change()
 */


uint trigger_screen_state_change(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  if (*(byte *)(param_2 + 0xfe8) == param_3) {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): %s: ignore:%d.\n","trigger_screen_state_change",param_1,
                    (uint)*(byte *)(param_2 + 0xfe8),param_4);
      }
      else {
        handle_heartbeat("%s(): %s: ignore:%d.\n","trigger_screen_state_change",param_1);
      }
    }
    param_3 = 0xffffffff;
  }
  else {
    if (param_3 == 0) {
      *(undefined1 *)(param_2 + 0xfe8) = 0;
    }
    else {
      *(undefined1 *)(param_2 + 0xfe8) = 1;
      z_spin_lock_valid(param_2 + 0x50);
    }
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): %s: trigger_on_screen -> %d\n","trigger_screen_state_change",param_1,
                    (uint)*(byte *)(param_2 + 0xfe8),param_4);
      }
      else {
        handle_heartbeat("%s(): %s: trigger_on_screen -> %d\n","trigger_screen_state_change",param_1
                        );
      }
    }
  }
  return param_3;
}



/*
 * Function: global_system_suspend
 * Entry:    0002bd7c
 * Prototype: undefined global_system_suspend()
 */


undefined4
global_system_suspend(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  
  if ((*(byte *)(param_1 + 0xfe6) & 0xfb) == 0) {
    *(undefined1 *)(param_1 + 0xfe6) = 2;
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): begin.\n","global_system_suspend",param_3,0,param_4);
      }
      else {
        handle_heartbeat();
      }
    }
    (**(code **)(param_1 + 0xb70))(param_1 + 0xb6c);
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): end.\n","global_system_suspend",extraout_r2,0,param_4);
      }
      else {
        handle_heartbeat();
      }
    }
    *(undefined1 *)(param_1 + 0xfe6) = 1;
  }
  return 0;
}



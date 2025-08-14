/*
 * Function: update_imu_trigger_status
 * Entry:    0002bcbc
 * Prototype: undefined update_imu_trigger_status()
 */


undefined4 update_imu_trigger_status(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0xee8) == param_3) {
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(param_2 + 0xee8) = param_3;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): %s new status: %d\n\n","update_imu_trigger_status",param_1,param_3);
      }
      else {
        handle_heartbeat("%s(): %s new status: %d\n\n","update_imu_trigger_status",param_1,param_3);
      }
    }
    if (((*(char *)(param_2 + 0xfea) == '\n') && (param_3 != 0)) &&
       (*(char *)(param_2 + 0xb0c) == '\0')) {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): imu wakeup thd-> \n","update_imu_trigger_status");
        }
        else {
          handle_heartbeat();
        }
      }
      *(undefined1 *)(param_2 + 0xfe9) = 1;
      z_spin_lock_valid(param_2 + 0xaf4);
    }
    uVar1 = 0;
  }
  return uVar1;
}



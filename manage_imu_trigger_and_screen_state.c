/*
 * Function: manage_imu_trigger_and_screen_state
 * Entry:    0002bd4c
 * Prototype: undefined4 manage_imu_trigger_and_screen_state(undefined4 imu_data, undefined4 screen_state, int trigger_enabled, undefined4 param4)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: undefined4 manage_imu_trigger_and_screen_state(undefined4 imu_data, undefined4
   screen_state, int trigger_enabled, undefined4 param4) */

undefined4
manage_imu_trigger_and_screen_state
          (undefined4 imu_data,undefined4 screen_state,int trigger_enabled,undefined4 param4)

{
  undefined *trigger_flag;
  
  if (trigger_enabled != 0) {
    update_imu_trigger_status(imu_data,screen_state,1,param4,param4);
    trigger_flag = &DAT_000a24e4;
  }
  else {
    update_imu_trigger_status();
    trigger_flag = &DAT_000a24dc;
  }
  trigger_screen_state_change(trigger_flag,screen_state,trigger_enabled != 0);
  return 0;
}



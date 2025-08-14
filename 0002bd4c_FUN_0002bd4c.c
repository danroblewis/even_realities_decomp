/*
 * Function: FUN_0002bd4c
 * Entry:    0002bd4c
 * Prototype: undefined FUN_0002bd4c()
 */


undefined4 FUN_0002bd4c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
    update_imu_trigger_status(param_1,param_2,1,param_4,param_4);
    puVar1 = &DAT_000a24e4;
  }
  else {
    update_imu_trigger_status();
    puVar1 = &DAT_000a24dc;
  }
  trigger_screen_state_change(puVar1,param_2,param_3 != 0);
  return 0;
}



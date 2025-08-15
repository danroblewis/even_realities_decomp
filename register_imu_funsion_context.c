/*
 * Function: register_imu_funsion_context
 * Entry:    00026250
 * Prototype: undefined register_imu_funsion_context()
 */


undefined4
register_imu_funsion_context(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined1 **)(param_1 + 0x8c) = &LAB_00025fac_1;
  *(undefined1 **)(param_1 + 0x90) = &LAB_00025df8_1;
  *(undefined1 **)(param_1 + 0x94) = &LAB_00025dc4_1;
  *(undefined1 **)(param_1 + 0x98) = &LAB_00025d8c_1;
  if (1 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): exit\n\n","register_imu_funsion_context",param_3,0,param_4);
    }
    else {
      handle_heartbeat();
    }
  }
  return 0;
}



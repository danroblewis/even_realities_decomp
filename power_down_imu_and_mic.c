/*
 * Function: power_down_imu_and_mic
 * Entry:    000160b4
 * Prototype: undefined power_down_imu_and_mic()
 */


undefined4 power_down_imu_and_mic(void)

{
  int iVar1;
  char *format_string;
  undefined4 in_r3;
  
  iVar1 = pack_parameters_and_call_callback(&DAT_00087c80,8,3,1,in_r3);
  if (iVar1 < 0) {
    if (LOG_LEVEL < 1) {
      return 0;
    }
    format_string = "%s(): Could not set ldsw2.\n";
  }
  else {
    if (LOG_LEVEL < 1) {
      return 0;
    }
    format_string = "%s(): disable ldsw2 for imu and mic\n";
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(format_string,"power_down_imu_and_mic");
  }
  else {
    handle_heartbeat();
  }
  return 0;
}



/*
 * Function: power_for_imu_and_mic
 * Entry:    00015f80
 * Prototype: undefined power_for_imu_and_mic()
 */


undefined4 power_for_imu_and_mic(void)

{
  int iVar1;
  char *format_string;
  undefined4 in_r3;
  
  iVar1 = pack_parameters_and_call_callback(&DAT_00087c80,8,2,1,in_r3);
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
    format_string = "%s(): enable ldsw2 for imu and mic\n";
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(format_string,"power_for_imu_and_mic");
  }
  else {
    handle_heartbeat();
  }
  return 0;
}



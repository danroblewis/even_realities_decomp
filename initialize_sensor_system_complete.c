/*
 * Function: initialize_sensor_system_complete
 * Entry:    00033340
 * Prototype: undefined initialize_sensor_system_complete()
 */


int initialize_sensor_system_complete(void)

{
  int iVar1;
  
  iVar1 = initialize_sensor_driver_with_validation();
  if (iVar1 == 0) {
    iVar1 = set_sensor_configuration_parameter(&DAT_00087bc0);
    if (iVar1 == 0) {
      iVar1 = enter_into_long_trip();
      if (iVar1 != 0) {
        iVar1 = -3;
      }
    }
    else {
      DEBUG_PRINT("init_serial_comm is failed\n");
      get_schedule_timing(0x4000,0);
      iVar1 = -2;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



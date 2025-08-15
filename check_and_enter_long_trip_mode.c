/*
 * Function: check_and_enter_long_trip_mode
 * Entry:    0002560c
 * Prototype: undefined check_and_enter_long_trip_mode()
 */


int check_and_enter_long_trip_mode(void)

{
  int iVar1;
  
  iVar1 = set_sensor_configuration_parameter_alt(SYSTEM_CONFIGURATION_PARAMETER);
  if (iVar1 == 0) {
    iVar1 = enter_into_long_trip();
    if (iVar1 != 0) {
      iVar1 = -2;
    }
  }
  else {
    DEBUG_PRINT("init_nfc_comm is failed\n");
    iVar1 = -1;
  }
  return iVar1;
}



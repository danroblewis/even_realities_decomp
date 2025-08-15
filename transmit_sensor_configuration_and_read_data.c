/*
 * Function: transmit_sensor_configuration_and_read_data
 * Entry:    0007d05e
 * Prototype: undefined transmit_sensor_configuration_and_read_data()
 */


int transmit_sensor_configuration_and_read_data(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = transmit_sensor_data_with_retry(0x4704);
  if ((((iVar1 == 0) && (iVar1 = transmit_sensor_data_with_retry(0x4710,3), iVar1 == 0)) &&
      (iVar1 = transmit_sensor_data_with_retry(0x4714,1), iVar1 == 0)) &&
     (iVar1 = read_sensor_data_with_retry_and_timeout_check(), iVar1 == 0)) {
    iVar1 = read_sensor_data_with_retry(0x470c,param_1);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
    iVar1 = -iVar1;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



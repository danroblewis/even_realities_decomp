/*
 * Function: transmit_sensor_configuration_sequence_and_validate
 * Entry:    0007cfdc
 * Prototype: undefined transmit_sensor_configuration_sequence_and_validate()
 */


int transmit_sensor_configuration_sequence_and_validate(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = transmit_sensor_data_with_retry(0x4704,param_1);
  if ((((iVar1 == 0) && (iVar1 = transmit_sensor_data_with_retry(0x4708,param_2), iVar1 == 0)) &&
      (iVar1 = transmit_sensor_data_with_retry(0x4710,0xc), iVar1 == 0)) &&
     (iVar1 = transmit_sensor_data_with_retry(0x4714,1), iVar1 == 0)) {
    iVar1 = read_sensor_data_with_retry_and_timeout_check();
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



/*
 * Function: set_sensor_operation_mode_and_transmit_configuration
 * Entry:    0007d02a
 * Prototype: undefined set_sensor_operation_mode_and_transmit_configuration()
 */


int set_sensor_operation_mode_and_transmit_configuration
              (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = set_sensor_operation_mode(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = transmit_sensor_configuration_sequence_and_validate(param_1,param_2), iVar1 == 0)) {
    iVar1 = transmit_sensor_data_with_retry(0x4820,4);
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



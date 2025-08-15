/*
 * Function: configure_sensor_parameters
 * Entry:    000301bc
 * Prototype: undefined configure_sensor_parameters()
 */


int configure_sensor_parameters
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = transmit_sensor_data_with_retry(0xff20,0x3c00f091,param_3,param_4,param_4);
  if ((-1 < iVar1) && (iVar1 = transmit_sensor_data_with_retry(0x4700,0x110), -1 < iVar1)) {
    call_sensor_callback_function(1);
    iVar1 = transmit_sensor_data_with_retry(0x4444,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    call_sensor_callback_function(0x14);
    iVar1 = transmit_sensor_data_with_retry(0xff18,0x3c);
    if (-1 < iVar1) {
      call_sensor_callback_function(0x19);
      iVar1 = transmit_sensor_data_with_retry(0x4700,0x102);
      return iVar1 >> 0x1f;
    }
  }
  return -1;
}



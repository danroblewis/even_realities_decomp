/*
 * Function: monitor_sensor_status_and_initialize
 * Entry:    00030af0
 * Prototype: undefined monitor_sensor_status_and_initialize()
 */


void monitor_sensor_status_and_initialize(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_8 = param_3;
  iVar1 = read_sensor_data_with_retry(0x4410,&local_c,param_3,0,param_1);
  if (-1 < iVar1) {
    if ((int)(local_c << 0x1d) < 0) {
      TOUCH_SENSOR_STATUS_FLAG = 2;
    }
    if ((local_c & 2) != 0) {
      TOUCH_SENSOR_STATUS_FLAG = 1;
    }
    if ((local_c & 1) != 0) {
      initialize_sensor_registers();
      return;
    }
  }
  return;
}



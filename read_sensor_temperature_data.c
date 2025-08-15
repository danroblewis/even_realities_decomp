/*
 * Function: read_sensor_temperature_data
 * Entry:    0002e988
 * Prototype: undefined read_sensor_temperature_data()
 */


int read_sensor_temperature_data(int param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  int local_28;
  int local_24;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))(param_1,0x3a);
  if (-1 < iVar1) {
    execute_callback_function_pointer_at_offset(param_1,0x28,&local_28);
    *param_2 = (float)(longlong)local_24 / 1e+06 + (float)(longlong)local_28;
    execute_callback_function_pointer_at_offset(param_1,0x2c,&local_28);
    *param_4 = (float)(longlong)local_24 / 1e+06 + (float)(longlong)local_28;
    execute_callback_function_pointer_at_offset(param_1,0x29,&local_28);
    iVar1 = 0;
    *param_3 = (float)(longlong)local_24 / 1e+06 + (float)(longlong)local_28;
  }
  return iVar1;
}



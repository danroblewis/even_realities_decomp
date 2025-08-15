/*
 * Function: compare_and_update_sensor_data_alt
 * Entry:    0002eb78
 * Prototype: undefined compare_and_update_sensor_data_alt()
 */


uint compare_and_update_sensor_data_alt
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = SENSOR_DATA_BUFFER_RESET;
  uVar2 = (uint)SENSOR_DATA_BUFFER_RESET;
  if (SENSOR_DATA_COMPARISON_AND_UPDATE_2 != uVar2) {
    DEBUG_PRINT("[csh_debug_box]isLidCLose is %d \n",uVar2,param_3,
                (uint)SENSOR_DATA_COMPARISON_AND_UPDATE_2,param_4);
  }
  SENSOR_DATA_COMPARISON_AND_UPDATE_2 = bVar1;
  return uVar2;
}



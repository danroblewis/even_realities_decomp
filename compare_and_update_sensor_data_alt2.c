/*
 * Function: compare_and_update_sensor_data_alt2
 * Entry:    0002eba0
 * Prototype: undefined compare_and_update_sensor_data_alt2()
 */


uint compare_and_update_sensor_data_alt2
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = SENSOR_DATA_BUFFER_RESET_ALT;
  uVar2 = (uint)SENSOR_DATA_BUFFER_RESET_ALT;
  if (SENSOR_DATA_COMPARISON_AND_UPDATE_1 != uVar2) {
    DEBUG_PRINT("[csh_debug_box] isInCharge is %d \n",uVar2,param_3,
                (uint)SENSOR_DATA_COMPARISON_AND_UPDATE_1,param_4);
  }
  SENSOR_DATA_COMPARISON_AND_UPDATE_1 = bVar1;
  return uVar2;
}



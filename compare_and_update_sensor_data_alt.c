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
  
  bVar1 = DAT_20018da7;
  uVar2 = (uint)DAT_20018da7;
  if (DAT_20018da4 != uVar2) {
    DEBUG_PRINT("[csh_debug_box]isLidCLose is %d \n",uVar2,param_3,(uint)DAT_20018da4,param_4);
  }
  DAT_20018da4 = bVar1;
  return uVar2;
}



/*
 * Function: process_imu_attitude_data
 * Entry:    0000e340
 * Prototype: undefined process_imu_attitude_data()
 */


float process_imu_attitude_data(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float local_20;
  undefined1 auStack_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  if (param_2 < 0) {
    puVar2 = (undefined4 *)&DAT_20002d0c;
    puVar1 = (undefined4 *)&DAT_20002d10;
  }
  else {
    puVar2 = &IMU_SENSOR_DATA_PROCESSING_WRAPPER;
    puVar1 = &IMU_SENSOR_DATA_PROCESSING_WRAPPER_ALT;
  }
  DAT_2000b4f0 = *puVar2;
  DAT_2000b4ec = *puVar1;
  process_imu_attitude_calculation(&DAT_2000b4a4,&local_20,auStack_1c,&local_18);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_18;
    param_3[1] = local_14;
    param_3[2] = local_c;
  }
  return local_20 * 100.0;
}



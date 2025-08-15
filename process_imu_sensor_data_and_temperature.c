/*
 * Function: process_imu_sensor_data_and_temperature
 * Entry:    0002ea28
 * Prototype: undefined process_imu_sensor_data_and_temperature()
 */


int process_imu_sensor_data_and_temperature(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined *local_14;
  
  local_14 = &DAT_00088a50;
  local_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  iVar1 = read_sensor_temperature_data(param_1,&local_20,&uStack_1c,&local_18);
  uVar2 = CONCAT44(DAT_20004794,DAT_20004790);
  if (-1 < iVar1) {
    FUN_0007cef6(param_1,0x39,auStack_28);
    iVar1 = process_imu_sensor_data_wrapper(&local_20,0);
    uVar2 = CONCAT44(DAT_20004794,DAT_20004790);
    if (-1 < iVar1) {
      uVar2 = FUN_0007ceda();
      iVar1 = 0;
    }
  }
  DAT_20004794 = (undefined4)((ulonglong)uVar2 >> 0x20);
  DAT_20004790 = (undefined4)uVar2;
  return iVar1;
}



/*
 * Function: check_sensor_status_and_format_data
 * Entry:    0002ead8
 * Prototype: undefined check_sensor_status_and_format_data()
 */


uint check_sensor_status_and_format_data(undefined4 param_1,uint3 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_c;
  
  uStack_c = (uint)param_2;
  iVar1 = call_ble_callback_wrapper(&DAT_00087c80,3,0x34,(int)&uStack_c + 3,param_1);
  if (iVar1 < 0) {
    DEBUG_PRINT("Could not get charger status\n");
    uVar2 = 0xffffffff;
  }
  else if ((int)(((int)(uint)uStack_c._3_1_ >> 3 | (uint)(uStack_c._3_1_ >> 2)) << 0x1f) < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ~(uint)(uStack_c._3_1_ >> 4) & 1;
  }
  return uVar2;
}



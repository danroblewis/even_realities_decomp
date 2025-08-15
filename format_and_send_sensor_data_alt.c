/*
 * Function: format_and_send_sensor_data_alt
 * Entry:    0002eaa8
 * Prototype: undefined format_and_send_sensor_data_alt()
 */


undefined4 format_and_send_sensor_data_alt(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  
  iVar1 = FUN_00083dc8(&DAT_00087c80,3,4,1,in_r3);
  if (iVar1 < 0) {
    DEBUG_PRINT("Could not enable charger\n");
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



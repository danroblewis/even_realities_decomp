/*
 * Function: FUN_0007d05e
 * Entry:    0007d05e
 * Prototype: undefined FUN_0007d05e()
 */


int FUN_0007d05e(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = transmit_sensor_data_with_retry(0x4704);
  if ((((iVar1 == 0) && (iVar1 = transmit_sensor_data_with_retry(0x4710,3), iVar1 == 0)) &&
      (iVar1 = transmit_sensor_data_with_retry(0x4714,1), iVar1 == 0)) &&
     (iVar1 = FUN_0007cfac(), iVar1 == 0)) {
    iVar1 = read_sensor_data_with_retry(0x470c,param_1);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
    iVar1 = -iVar1;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/*
 * Function: read_sensor_data_with_retry_and_timeout_check
 * Entry:    0007cfac
 * Prototype: undefined read_sensor_data_with_retry_and_timeout_check()
 */


int read_sensor_data_with_retry_and_timeout_check(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_c;
  
  iVar2 = 100;
  local_c = 0;
  do {
    iVar1 = read_sensor_data_with_retry(0x4714,&local_c);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (local_c == 0) break;
    call_sensor_callback_function(1);
    bVar3 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar3);
  iVar1 = -1;
  if (iVar2 != -1) {
    iVar1 = 0;
  }
  return iVar1;
}



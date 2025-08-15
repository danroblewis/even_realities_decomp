/*
 * Function: read_sensor_data_with_retry_and_status_check
 * Entry:    0007cf70
 * Prototype: undefined read_sensor_data_with_retry_and_status_check()
 */


undefined4 read_sensor_data_with_retry_and_status_check(void)

{
  int iVar1;
  char cVar2;
  int local_c;
  
  cVar2 = 'e';
  local_c = 0;
  while( true ) {
    iVar1 = read_sensor_data_with_retry(0x4410,&local_c);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    if (local_c << 0x1f < 0) break;
    cVar2 = cVar2 + -1;
    call_sensor_callback_function(1);
    if (cVar2 == '\0') {
      return 0xfffffffe;
    }
  }
  return 0;
}



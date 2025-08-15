/*
 * Function: read_sensor_data_with_retry
 * Entry:    000302f8
 * Prototype: undefined read_sensor_data_with_retry()
 */


undefined4 read_sensor_data_with_retry(uint param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  ushort local_20;
  undefined2 uStack_1e;
  uint local_1c;
  undefined4 uStack_18;
  
  cVar2 = '\x03';
  local_1c = 0;
  _local_20 = CONCAT22((short)(param_1 >> 0x10),
                       (ushort)((param_1 & 0xff) << 8) | (ushort)(param_1 >> 8) & 0xff);
  uStack_18 = param_3;
  do {
    iVar1 = (*(code *)*SENSOR_DATA_TRANSMISSION_AND_CALLBACK_MANAGEMENT)(&local_20,2,&local_1c);
    if (iVar1 == 0) {
      *param_2 = local_1c << 0x18 | (local_1c >> 8 & 0xff) << 0x10 | (local_1c >> 0x10 & 0xff) << 8
                 | local_1c >> 0x18;
      return 0;
    }
    cVar2 = cVar2 + -1;
    call_sensor_callback_function(1);
  } while (cVar2 != '\0');
  return 0xffffffff;
}



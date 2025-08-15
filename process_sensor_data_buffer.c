/*
 * Function: process_sensor_data_buffer
 * Entry:    0002f688
 * Prototype: undefined process_sensor_data_buffer()
 */


undefined4 process_sensor_data_buffer(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_dc [208];
  
  uVar1 = 0;
  for (iVar2 = AUDIO_STREAM_STATE; 0 < iVar2; iVar2 = iVar2 + -1) {
    uVar1 = FUN_00072240(&DAT_20003890,auStack_dc,0,0);
  }
  return uVar1;
}



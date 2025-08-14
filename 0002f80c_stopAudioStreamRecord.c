/*
 * Function: stopAudioStreamRecord
 * Entry:    0002f80c
 * Prototype: undefined stopAudioStreamRecord()
 */


undefined4 stopAudioStreamRecord(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_d4;
  undefined1 auStack_d3 [203];
  
  fill_memory_buffer(auStack_d3,0,0xcb);
  local_d4 = 3;
  iVar1 = enqueue_message_to_queue(&DAT_20003890,&local_d4,0,0);
  if (iVar1 == 0) {
    z_spin_lock_valid(&DAT_200079e4);
    uVar2 = 0;
  }
  else {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): enqueue_dmic failed\r\n\n","stopAudioStreamRecord");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



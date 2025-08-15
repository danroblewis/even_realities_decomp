/*
 * Function: sendAudioStram2Cache
 * Entry:    0002f6b0
 * Prototype: undefined sendAudioStram2Cache()
 */


undefined4 sendAudioStram2Cache(undefined4 param_1)

{
  int iVar1;
  undefined1 local_dc [2];
  undefined2 local_da;
  undefined1 auStack_d8 [200];
  
  fill_memory_buffer(local_dc,0,0xcc);
  if (AUDIO_STREAM_STATE == 0x12) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): enqueue dmic stream num is full, drop it %d\r\n\n","sendAudioStram2Cache"
                   );
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else {
    memcpy(auStack_d8,param_1,200);
    local_da = 200;
    local_dc[0] = 2;
    iVar1 = enqueue_message_to_queue(&DAT_20003890,local_dc,0,0);
    if (iVar1 == 0) {
      z_spin_lock_valid(&DAT_200079e4);
      return 0;
    }
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): enqueue_dmic failed\r\n\n","sendAudioStram2Cache");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  return 0xffffffff;
}



/*
 * Function: delAudioStreamRecord
 * Entry:    0002f878
 * Prototype: undefined delAudioStreamRecord()
 */


undefined4 delAudioStreamRecord(undefined1 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_dc;
  undefined1 uStack_db;
  undefined2 local_da;
  undefined1 local_d8;
  
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): received audio delete command\n","delAudioStreamRecord");
    }
    else {
      handle_heartbeat();
    }
  }
  fill_memory_buffer(&uStack_db,0,0xcb);
  local_da = 1;
  local_dc = 4;
  local_d8 = param_1;
  iVar1 = enqueue_message_to_queue(&DAT_20003890,&local_dc,0,0);
  if (iVar1 == 0) {
    z_spin_lock_valid(&DAT_200079e4);
    uVar2 = 0;
  }
  else {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): enqueue_dmic failed\r\n\n","delAudioStreamRecord");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/*
 * Function: startAudioStreamRecord
 * Entry:    0002f764
 * Prototype: undefined startAudioStreamRecord()
 */


undefined4 startAudioStreamRecord(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_d8 [2];
  undefined1 local_d4;
  undefined1 auStack_d3 [203];
  
  fill_memory_buffer(auStack_d3,0,0xcb);
  local_d4 = 1;
  iVar1 = enqueue_message_to_queue(&DAT_20003890,&local_d4,0,0);
  if (iVar1 == 0) {
    z_spin_lock_valid(&DAT_200079e4);
    uVar2 = 0;
  }
  else {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): start up audio record failed\r\n\n","startAudioStreamRecord");
      }
      else {
        handle_heartbeat();
      }
    }
    local_d8[0] = 1;
    uVar2 = get_work_mode();
    sync_to_slave(uVar2,6,local_d8,2);
    display_DelayClose(10000);
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): because startup auido record failed,exit quicknote ....\n",
                    "startAudioStreamRecord");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/*
 * Function: dequeue_ancs
 * Entry:    00018d94
 * Prototype: undefined dequeue_ancs()
 */


int dequeue_ancs(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_1c4 [440];
  
  fill_memory_buffer(auStack_1c4,0,0x1b4);
  if (DAT_20006a7c == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_00072240(&DAT_20006a6c,auStack_1c4,0,0);
    if (iVar1 == 0) {
      memcpy(param_1,auStack_1c4,0x1b4);
    }
    else if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): D ancs F\n","dequeue_ancs");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  return iVar1;
}



/*
 * Function: dequeue_dmic
 * Entry:    0002ed00
 * Prototype: undefined dequeue_dmic()
 */


int dequeue_dmic(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_d8 [204];
  
  memcpy(auStack_d8,&DAT_000885cc,200);
  iVar1 = manage_ble_connection_state_comprehensive(&DAT_20007b7c,auStack_d8,0,0);
  if (iVar1 == 0) {
    memcpy(param_1,auStack_d8,200);
  }
  else if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): dequeue_dmic failed\r\n\n","dequeue_dmic");
    }
    else {
      handle_heartbeat();
    }
  }
  return iVar1;
}



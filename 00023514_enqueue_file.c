/*
 * Function: enqueue_file
 * Entry:    00023514
 * Prototype: undefined enqueue_file()
 */


int enqueue_file(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_dc [200];
  undefined1 local_14;
  
  if ((DAT_200079c4 == 0x1e) && (FUN_00072240(&DAT_200079a0,auStack_dc,0,0), 0 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): enqueue_file is full\n","enqueue_file");
    }
    else {
      handle_heartbeat();
    }
  }
  validate_memory_bounds(auStack_dc,param_1,param_2,0xc9);
  local_14 = (undefined1)param_2;
  iVar1 = enqueue_message_to_queue(&DAT_200079a0,auStack_dc,0,0);
  if ((iVar1 != 0) && (0 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): enqueue_file failed\r\n\n","enqueue_file");
    }
    else {
      handle_heartbeat();
    }
  }
  return iVar1;
}



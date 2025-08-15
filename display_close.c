/*
 * Function: display_close
 * Entry:    000497b0
 * Prototype: undefined display_close()
 */


undefined4 display_close(int param_1,uint param_2)

{
  int iVar1;
  undefined1 local_28 [2];
  undefined2 local_26;
  undefined1 auStack_24 [24];
  
  fill_memory_buffer(local_28,0,0x18);
  if (param_2 < 0xb) {
    local_28[0] = 3;
    if (param_1 != 0) {
      memcpy(auStack_24,param_1,param_2);
      local_26 = (undefined2)param_2;
    }
    iVar1 = enqueue_message_to_queue(&DAT_200038c4,local_28,0,0);
    if (iVar1 == 0) {
      if (LOG_LEVEL < 1) {
        return 0;
      }
      if (IS_DEBUG != 0) {
        handle_heartbeat();
        return 0;
      }
      DEBUG_PRINT("%s(): send display close command.......\n","display_close");
      return 0;
    }
    DEBUG_PRINT("message queue send failed %s\r\n","display_close");
  }
  else if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): send data length more than %d,can\'t load it,exit ...\n","display_close",10
                 );
    }
    else {
      handle_heartbeat();
    }
  }
  return 0xffffffff;
}



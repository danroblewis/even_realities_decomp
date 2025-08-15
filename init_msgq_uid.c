/*
 * Function: init_msgq_uid
 * Entry:    00018e04
 * Prototype: undefined init_msgq_uid()
 */


int init_msgq_uid(void)

{
  int iVar1;
  
  iVar1 = setup_memory_pools(&DAT_20006a38,8,10);
  if ((iVar1 != 0) && (0 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): k_msgq alloc failed\n","init_msgq_uid");
    }
    else {
      handle_heartbeat();
    }
  }
  return iVar1;
}



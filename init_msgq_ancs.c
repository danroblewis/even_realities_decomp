/*
 * Function: init_msgq_ancs
 * Entry:    00018b6c
 * Prototype: undefined init_msgq_ancs()
 */


int init_msgq_ancs(void)

{
  int iVar1;
  
  iVar1 = setup_memory_pools(&DAT_20006a6c,0x1b4,10);
  if ((iVar1 != 0) && (0 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): k_msgq alloc failed\n","init_msgq_ancs");
    }
    else {
      handle_heartbeat();
    }
  }
  return iVar1;
}



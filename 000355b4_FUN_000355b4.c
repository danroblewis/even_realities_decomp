/*
 * Function: FUN_000355b4
 * Entry:    000355b4
 * Prototype: undefined FUN_000355b4()
 */


void FUN_000355b4(void)

{
  int iVar1;
  
  iVar1 = malloc_maybe(0x1800);
  if (iVar1 != 0) {
    fill_memory_buffer(iVar1,0,0x15e3);
    FUN_000352e8(iVar1);
    FUN_00076d7c(iVar1);
    return;
  }
  if (IS_DEBUG != 0) {
    handle_heartbeat();
    return;
  }
  DEBUG_PRINT("[%s-%d] malloc failed !!\n","dump_whitelist",0x277);
  return;
}



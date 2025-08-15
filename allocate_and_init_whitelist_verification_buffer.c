/*
 * Function: allocate_and_init_whitelist_verification_buffer
 * Entry:    000355b4
 * Prototype: undefined allocate_and_init_whitelist_verification_buffer()
 */


void allocate_and_init_whitelist_verification_buffer(void)

{
  int iVar1;
  
  iVar1 = malloc_maybe(0x1800);
  if (iVar1 != 0) {
    fill_memory_buffer(iVar1,0,0x15e3);
    create_whitelist_app_json_structure(iVar1);
    call_data_verification_handler(iVar1);
    return;
  }
  if (IS_DEBUG != 0) {
    handle_heartbeat();
    return;
  }
  DEBUG_PRINT("[%s-%d] malloc failed !!\n","dump_whitelist",0x277);
  return;
}



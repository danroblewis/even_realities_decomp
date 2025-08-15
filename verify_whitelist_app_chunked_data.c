/*
 * Function: verify_whitelist_app_chunked_data
 * Entry:    00035608
 * Prototype: undefined verify_whitelist_app_chunked_data()
 */


int verify_whitelist_app_chunked_data(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\x03';
  do {
    iVar1 = handle_chunked_data_verification(0x131000,&DAT_2001a22c,0x15e2);
    if (iVar1 == 0) {
      allocate_and_init_whitelist_verification_buffer();
      break;
    }
    get_schedule_timing(0xa4,0);
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("write to flash failed, should retry ! \n");
    }
    else {
      handle_heartbeat();
    }
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  if (IS_DEBUG == 0) {
    DEBUG_PRINT("[%s-%d] flash_settings_write_and_verify ret is %d \n","store_whitelist",0x24,iVar1)
    ;
  }
  else {
    handle_heartbeat("[%s-%d] flash_settings_write_and_verify ret is %d \n","store_whitelist",0x24,
                     iVar1);
  }
  return iVar1;
}



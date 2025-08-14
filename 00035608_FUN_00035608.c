/*
 * Function: FUN_00035608
 * Entry:    00035608
 * Prototype: undefined FUN_00035608()
 */


int FUN_00035608(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\x03';
  do {
    iVar1 = FUN_000227d0(0x131000,&DAT_2001a22c,0x15e2);
    if (iVar1 == 0) {
      FUN_000355b4();
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



/*
 * Function: get_boot_seconds
 * Entry:    0004a51c
 * Prototype: undefined get_boot_seconds()
 */


int get_boot_seconds(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = get_system_timestamp_ms();
  iVar1 = FUN_0000e1a4((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),1000,0);
  iVar1 = iVar1 - DAT_2000a0b0;
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): [csh_debug] bootSeconds is %d\n","get_boot_seconds",iVar1);
    }
    else {
      handle_heartbeat();
    }
  }
  return iVar1;
}



/*
 * Function: ancs_disconnected
 * Entry:    00018adc
 * Prototype: undefined ancs_disconnected()
 */


void ancs_disconnected(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [36];
  
  *(undefined1 *)(DAT_20006ab8 + 0x365) = 0;
  ANCS_CONNECTION_HANDLE = 0;
  uVar1 = FUN_00081526();
  FUN_00018334(uVar1,auStack_30);
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): from %s (reason 0x%02x)\n","ancs_disconnected",auStack_30,param_2);
    }
    else {
      handle_heartbeat("%s(): from %s (reason 0x%02x)\n","ancs_disconnected",auStack_30,param_2);
    }
  }
  *(undefined1 *)(DAT_20006ab8 + 0x367) = 0;
  while( true ) {
    iVar2 = get_work_mode();
    if (*(int *)(iVar2 + 0x9b4) == 0) break;
    uVar3 = get_work_mode();
    FUN_00072908((int)uVar3 + 0x9ac,(int)((ulonglong)uVar3 >> 0x20),0xffffffff,0xffffffff);
  }
  FUN_00018ab0();
  return;
}



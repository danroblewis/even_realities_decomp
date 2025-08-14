/*
 * Function: ancs_security_changed
 * Entry:    000184f0
 * Prototype: undefined ancs_security_changed()
 */


void ancs_security_changed(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  
  uVar1 = FUN_00081526();
  FUN_00018334(uVar1,auStack_38);
  if (param_3 == 0) {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): %s level %u\n\n","ancs_security_changed",auStack_38,param_2);
      }
      else {
        handle_heartbeat("%s(): %s level %u\n\n","ancs_security_changed",auStack_38,param_2);
      }
    }
    uVar2 = FUN_000814e2(param_1);
    if (1 < uVar2) {
      DAT_20006ab4 = 0;
      uVar1 = FUN_00081526(param_1);
      iVar3 = get_system_ready_state();
      if (iVar3 == 0) {
        iVar3 = get_work_mode();
        if (*(char *)(iVar3 + 0x1070) == '\x01') {
          iVar3 = get_work_mode();
          iVar3 = memcmp_byte_arrays(iVar3 + 0x1069,uVar1,7);
          if (iVar3 == 0) {
            FUN_000182c8(param_1);
          }
        }
      }
    }
    *(undefined1 *)(DAT_20006ab8 + 0x367) = 0;
    DAT_20006a34 = 0;
  }
  else {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) goto LAB_000185da;
      handle_heartbeat("%s(): Security failed: %s level %u err %d\n\n","ancs_security_changed",
                       auStack_38,param_2,param_3);
    }
    while( true ) {
      DAT_20006a34 = DAT_20006a34 + 1;
      if (DAT_20006a34 < 10) break;
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): reboot because Security failed exceed 10 times, so reboot\r\n\n",
                      "ancs_security_changed");
        }
        else {
          handle_heartbeat();
        }
      }
      FUN_0007c0a8(500);
      FUN_0004c0a8(1);
LAB_000185da:
      DEBUG_PRINT("%s(): Security failed: %s level %u err %d\n\n","ancs_security_changed",auStack_38
                  ,param_2);
    }
    FUN_0008149a(param_1,2);
  }
  return;
}



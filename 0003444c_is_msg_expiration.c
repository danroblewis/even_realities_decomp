/*
 * Function: is_msg_expiration
 * Entry:    0003444c
 * Prototype: undefined is_msg_expiration()
 */


uint is_msg_expiration(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = get_work_mode();
  if (*(char *)(iVar1 + 0x108f) != '\0') {
    pcVar2 = (char *)get_work_mode();
    if (*pcVar2 == '\x01') {
      iVar1 = get_work_mode();
      FUN_0007d230(**(undefined4 **)(iVar1 + 0xfec));
    }
  }
  uVar4 = (uint)(byte)(&DAT_20007dbb)[(uint)DAT_2001a22a * 0x1b4];
  if ((uVar4 != 0) && (uVar4 = (&DAT_20007db0)[(uint)DAT_2001a22a * 0x6d], uVar4 != 0)) {
    uVar4 = FUN_0007d224();
    uVar5 = (uint)DAT_2001a22a;
    iVar1 = (&DAT_20007db0)[uVar5 * 0x6d];
    if (iVar1 + 10U < uVar4) {
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          uVar3 = FUN_0007d224();
          DEBUG_PRINT("%s(): [csh_debug_msg]the msg has expirtion,g_curShowMsgIdx is %u, startShowTime is %u, now is %d\n\n"
                      ,"is_msg_expiration",uVar5,iVar1,uVar3,param_2,param_3);
        }
        else {
          uVar3 = FUN_0007d224();
          handle_heartbeat("%s(): [csh_debug_msg]the msg has expirtion,g_curShowMsgIdx is %u, startShowTime is %u, now is %d\n\n"
                           ,"is_msg_expiration",uVar5,iVar1,uVar3);
        }
      }
      uVar4 = 2;
    }
    else {
      uVar4 = 1;
    }
  }
  uVar6 = (&DAT_20007db0)[(uint)DAT_2001a22a * 0x6d];
  uVar5 = FUN_0007d224();
  if (uVar5 < uVar6) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("error startShowTime, greate than now time ! \n");
    }
    else {
      handle_heartbeat();
    }
    uVar4 = 2;
  }
  return uVar4;
}



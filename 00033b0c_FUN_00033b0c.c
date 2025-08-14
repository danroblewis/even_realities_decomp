/*
 * Function: FUN_00033b0c
 * Entry:    00033b0c
 * Prototype: undefined FUN_00033b0c()
 */


void FUN_00033b0c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  puVar2 = &DAT_20007dac;
  do {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("normal g_arrMsgContent[%d].uidTail is %d %d recvTime %d\n",iVar1,puVar2[2],
                  puVar2[1],*puVar2,param_2,param_3);
    }
    else {
      handle_heartbeat("normal g_arrMsgContent[%d].uidTail is %d %d recvTime %d\n");
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x6d;
  } while (iVar1 != 10);
  return;
}



/*
 * Function: FUN_00033b4c
 * Entry:    00033b4c
 * Prototype: undefined FUN_00033b4c()
 */


void FUN_00033b4c(void)

{
  undefined4 in_r3;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 10;
  puVar2 = &DAT_20008eb4;
  do {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("PUSH: g_arrMsgContent[%d].uidTail is %d push %d \n",iVar1,puVar2[2],*puVar2,in_r3
                 );
    }
    else {
      handle_heartbeat("PUSH: g_arrMsgContent[%d].uidTail is %d push %d \n",iVar1);
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x6d;
  } while (iVar1 != 0x14);
  return;
}



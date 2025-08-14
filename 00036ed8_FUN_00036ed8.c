/*
 * Function: FUN_00036ed8
 * Entry:    00036ed8
 * Prototype: undefined FUN_00036ed8()
 */


void FUN_00036ed8(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_000165b4();
  if (iVar1 == 0) {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&LAB_000a8eee,&LAB_000a95f8_1);
      }
      else {
        handle_heartbeat();
      }
    }
    FUN_00016658();
  }
  else {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&LAB_000a8f18_1,&LAB_000a95f8_1);
      }
      else {
        handle_heartbeat();
      }
    }
    iVar1 = get_work_mode();
    puVar3 = *(undefined1 **)(iVar1 + 0xfec);
    *puVar3 = 0x80;
    puVar3[2] = 0x92;
    puVar3[1] = 0;
    puVar3[3] = 0x65;
    iVar1 = get_work_mode();
    iVar1 = *(int *)(iVar1 + 0xfec);
    *(undefined1 *)(iVar1 + 6) = 0;
    *(undefined1 *)(iVar1 + 7) = 0xf4;
    *(undefined1 *)(iVar1 + 8) = 0x51;
    *(undefined1 *)(iVar1 + 9) = 0xc2;
    *(undefined1 *)(iVar1 + 10) = 0x8c;
    *(undefined1 *)(iVar1 + 0xc) = 0;
    *(undefined1 *)(iVar1 + 0xb) = 1;
    *(undefined1 *)(iVar1 + 0xd) = 0;
    iVar1 = get_work_mode();
    set_system_timestamp
              (*(undefined4 *)(*(int *)(iVar1 + 0xfec) + 6),
               *(undefined4 *)(*(int *)(iVar1 + 0xfec) + 10));
  }
  iVar5 = 4;
  iVar1 = 0;
  do {
    iVar2 = get_work_mode();
    iVar4 = *(int *)(iVar2 + 0x1020);
    iVar2 = get_work_mode();
    iVar2 = getQuickNoteDataFromFlash
                      (iVar1,iVar4 + iVar5,0x29,iVar5 + 0x29 + *(int *)(iVar2 + 0x1020),0x119);
    if (iVar2 == -1) {
      iVar2 = get_work_mode();
      *(undefined1 *)(iVar1 * 0x143 + *(int *)(iVar2 + 0x1020) + 3) = 0;
      if (2 < LOG_LEVEL) {
        puVar3 = &LAB_000a8f46;
LAB_00036f60:
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(puVar3,&LAB_000a95f8_1,iVar1);
        }
        else {
          handle_heartbeat();
        }
      }
    }
    else if (iVar2 == 0) {
      iVar2 = get_work_mode();
      *(undefined1 *)(iVar1 * 0x143 + *(int *)(iVar2 + 0x1020) + 3) = 1;
      if (2 < LOG_LEVEL) {
        puVar3 = (undefined1 *)0xa8f72;
        goto LAB_00036f60;
      }
    }
    else if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(&LAB_000a8fb6_1,&LAB_000a95f8_1);
      }
      else {
        handle_heartbeat();
      }
    }
    iVar1 = iVar1 + 1;
    iVar5 = iVar5 + 0x143;
    if (iVar1 == 4) {
      return;
    }
  } while( true );
}



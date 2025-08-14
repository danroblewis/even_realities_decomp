/*
 * Function: FUN_0001965c
 * Entry:    0001965c
 * Prototype: undefined FUN_0001965c()
 */


void FUN_0001965c(undefined4 param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 local_1c8;
  int local_1c4 [2];
  undefined4 local_1bc;
  char local_1b4 [384];
  undefined1 auStack_34 [32];
  uint local_14;
  
  local_1c8 = 0x4b;
  fill_memory_buffer(local_1c4,0,0x1b4);
  iVar1 = dequeue_ancs(local_1c4);
  if ((iVar1 == 0) && ((1 < local_14 || (local_1b4[0] != '\0')))) {
    local_1c4[0] = FUN_0007d224();
    if (local_1c4[0] == 0) {
      local_1c4[0] = 1;
    }
    local_1bc = DAT_20006aac;
    FUN_0004a3d0("FROM:ancs",local_1c4);
    if ((local_14 < 2) && (iVar1 = FUN_00034bd4(local_1b4), iVar1 != 2)) {
      if (iVar1 != 3) {
        if (iVar1 != 1) {
          return;
        }
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("blocked! app(%s) not in whitelist \n",local_1b4);
        }
        else {
          handle_heartbeat();
        }
        FUN_0003384c(local_1c4);
        return;
      }
      uVar2 = 4;
    }
    else {
      uVar2 = 2;
    }
    local_1c8._0_2_ = CONCAT11(uVar2,(undefined1)local_1c8);
    if (DAT_20006ab2 == '\x02') {
      FUN_0008705a(local_1b4,"com.apple.mobilephone_missed",0x20);
    }
    FUN_0007ca80(auStack_34);
    ble_process_post_req(param_1,&local_1c8,local_1c4);
  }
  return;
}



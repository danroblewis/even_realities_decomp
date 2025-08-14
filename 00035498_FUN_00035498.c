/*
 * Function: FUN_00035498
 * Entry:    00035498
 * Prototype: undefined FUN_00035498()
 */


void FUN_00035498(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar6;
  
  iVar4 = param_1;
  iVar1 = malloc_maybe(0x15e3);
  if (iVar1 == 0) {
    if (IS_DEBUG != 0) {
      handle_heartbeat();
      return;
    }
    DEBUG_PRINT("[%s-%d] buf is NULL \n","get_whitelist_app_from_device",0x237);
    return;
  }
  *(undefined1 *)(param_2 + 1) = 0x6a;
  fill_memory_buffer(iVar1,0,0x15e3,0x6a,iVar4);
  uVar2 = FUN_000352e8(iVar1);
  if (uVar2 != 0) {
    uVar11 = 0;
    uVar10 = uVar2 % 0x11;
    uVar12 = 0x11 - uVar10 & 0xff;
    *(char *)(param_2 + 1) = (char)(uVar2 / 0x11) + '\x01';
    puVar13 = (undefined4 *)(param_2 + 3);
    while( true ) {
      puVar3 = (undefined4 *)(uVar11 * 0x11 + iVar1);
      if (uVar11 == uVar2 / 0x11) break;
      *(char *)(param_2 + 2) = (char)uVar11;
      puVar5 = puVar3;
      puVar8 = puVar13;
      do {
        puVar6 = puVar5 + 1;
        puVar9 = puVar8 + 1;
        *puVar8 = *puVar5;
        puVar5 = puVar6;
        puVar8 = puVar9;
      } while (puVar6 != puVar3 + 4);
      *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
      (**(code **)(param_1 + 0xc))(param_2,0x14);
      uVar11 = uVar11 + 1;
    }
    *(char *)(param_2 + 2) = (char)uVar11;
    if (uVar10 == 0) {
      fill_memory_buffer(puVar13,0,uVar12,uVar11 & 0xff,iVar4);
      iVar4 = 3;
      pcVar7 = *(code **)(param_1 + 0xc);
    }
    else {
      iVar4 = uVar10 + 3;
      memcpy(puVar13,puVar3,uVar10);
      fill_memory_buffer(param_2 + iVar4,0,uVar12);
      pcVar7 = *(code **)(param_1 + 0xc);
    }
    (*pcVar7)(param_2,iVar4);
    FUN_00076d7c(iVar1);
    return;
  }
  if (IS_DEBUG != 0) {
    handle_heartbeat("[%s-%d] total_len is %d \n","get_whitelist_app_from_device",0x23f,0);
    return;
  }
  DEBUG_PRINT("[%s-%d] total_len is %d \n","get_whitelist_app_from_device",0x23f);
  return;
}



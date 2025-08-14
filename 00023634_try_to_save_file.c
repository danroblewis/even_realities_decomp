/*
 * Function: try_to_save_file
 * Entry:    00023634
 * Prototype: undefined try_to_save_file()
 */


void try_to_save_file(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint local_f8;
  char local_f4;
  char local_f3;
  undefined1 local_f2;
  undefined1 local_f1;
  undefined1 local_f0;
  undefined1 auStack_ef [195];
  byte local_2c;
  
  FUN_000235a4(&local_f4);
  uVar1 = DAT_200079dc;
  uVar2 = DAT_200079d8;
  uVar5 = (uint)local_2c;
  if (((uVar5 < 0x15) && (local_f4 == '\r')) && (local_f3 == '\x0e')) {
    if ((DAT_200079d4 == 0x1c0000) && (0x1fffff < DAT_200079dc)) {
      return;
    }
    if (DAT_200079d8 < 0x1000) {
      FUN_00022834(DAT_200079dc,&DAT_20017062);
      CRC32_CHECKSUM_VALUE = FUN_0002360c(CRC32_CHECKSUM_VALUE,&DAT_20017062,DAT_200079d8);
      if (LOG_LEVEL < 1) {
        return;
      }
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): crc cal end crc32_value %08X\n","try_to_save_file",CRC32_CHECKSUM_VALUE);
        return;
      }
      handle_heartbeat();
      return;
    }
  }
  else {
    if (DAT_200079dc == 0) {
      local_f8 = CONCAT31(CONCAT21(CONCAT11(local_f3,local_f2),local_f1),local_f0);
      DAT_200079dc = local_f8;
      CRC32_CHECKSUM_VALUE = FUN_0002360c(CRC32_CHECKSUM_VALUE,&local_f3,4);
      if (local_f8 == 0x1c0000) {
        DAT_200079d4 = local_f8;
        iVar4 = get_work_mode();
        **(undefined1 **)(iVar4 + 0x100c) = 0xc;
        iVar4 = get_work_mode();
        if (**(int **)(iVar4 + 0x1054) != 0x10) {
          if (*(char *)(*(int *)(param_1 + 0x100c) + 7) == '\0') {
            *(undefined1 *)(*(int *)(param_1 + 0x100c) + 7) = 10;
          }
          uVar3 = get_work_mode();
          update_persist_task_status(uVar3,0x10,2);
        }
      }
      uVar1 = DAT_200079d8;
      memcpy(&DAT_20017062 + DAT_200079d8,auStack_ef,uVar5 - 5);
      iVar4 = uVar1 - 5;
      uVar1 = DAT_200079dc;
    }
    else {
      memcpy(&DAT_20017062 + DAT_200079d8,&local_f3,uVar5 - 1);
      iVar4 = uVar2 - 1;
    }
    DAT_200079d8 = iVar4 + uVar5;
    if ((DAT_200079d4 == 0x1c0000) && (0x1fffff < uVar1)) {
      return;
    }
    if (DAT_200079d8 < 0x1000) {
      return;
    }
  }
  FUN_00022834(DAT_200079dc,&DAT_20017062,0x1000);
  CRC32_CHECKSUM_VALUE = FUN_0002360c(CRC32_CHECKSUM_VALUE,&DAT_20017062,0x1000);
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): crc32_value %08X\n","try_to_save_file",CRC32_CHECKSUM_VALUE);
    }
    else {
      handle_heartbeat();
    }
  }
  DAT_200079dc = DAT_200079dc + 0x1000;
  iVar4 = DAT_200079d8 - 0x1000;
  validate_memory_bounds(&DAT_20017062,&DAT_20018062,iVar4,0x1400);
  DAT_200079d8 = iVar4;
  return;
}



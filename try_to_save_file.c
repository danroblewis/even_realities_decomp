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
  
  handle_message_dequeue_alt2(&local_f4);
  uVar1 = FILE_STORAGE_BUFFER_MANAGEMENT;
  uVar2 = FILE_STORAGE_BUFFER;
  uVar5 = (uint)local_2c;
  if (((uVar5 < 0x15) && (local_f4 == '\r')) && (local_f3 == '\x0e')) {
    if ((FILE_STORAGE_COMMIT_STATE == 0x1c0000) && (0x1fffff < FILE_STORAGE_BUFFER_MANAGEMENT)) {
      return;
    }
    if (FILE_STORAGE_BUFFER < 0x1000) {
      handle_retry_data_verification(FILE_STORAGE_BUFFER_MANAGEMENT,&DAT_20017062);
      CRC32_CHECKSUM_VALUE = calculate_crc32(CRC32_CHECKSUM_VALUE,&DAT_20017062,FILE_STORAGE_BUFFER)
      ;
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
    if (FILE_STORAGE_BUFFER_MANAGEMENT == 0) {
      local_f8 = CONCAT31(CONCAT21(CONCAT11(local_f3,local_f2),local_f1),local_f0);
      FILE_STORAGE_BUFFER_MANAGEMENT = local_f8;
      CRC32_CHECKSUM_VALUE = calculate_crc32(CRC32_CHECKSUM_VALUE,&local_f3,4);
      if (local_f8 == 0x1c0000) {
        FILE_STORAGE_COMMIT_STATE = local_f8;
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
      uVar1 = FILE_STORAGE_BUFFER;
      memcpy(&DAT_20017062 + FILE_STORAGE_BUFFER,auStack_ef,uVar5 - 5);
      iVar4 = uVar1 - 5;
      uVar1 = FILE_STORAGE_BUFFER_MANAGEMENT;
    }
    else {
      memcpy(&DAT_20017062 + FILE_STORAGE_BUFFER,&local_f3,uVar5 - 1);
      iVar4 = uVar2 - 1;
    }
    FILE_STORAGE_BUFFER = iVar4 + uVar5;
    if ((FILE_STORAGE_COMMIT_STATE == 0x1c0000) && (0x1fffff < uVar1)) {
      return;
    }
    if (FILE_STORAGE_BUFFER < 0x1000) {
      return;
    }
  }
  handle_retry_data_verification(FILE_STORAGE_BUFFER_MANAGEMENT,&DAT_20017062,0x1000);
  CRC32_CHECKSUM_VALUE = calculate_crc32(CRC32_CHECKSUM_VALUE,&DAT_20017062,0x1000);
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): crc32_value %08X\n","try_to_save_file",CRC32_CHECKSUM_VALUE);
    }
    else {
      handle_heartbeat();
    }
  }
  FILE_STORAGE_BUFFER_MANAGEMENT = FILE_STORAGE_BUFFER_MANAGEMENT + 0x1000;
  iVar4 = FILE_STORAGE_BUFFER - 0x1000;
  validate_memory_bounds(&DAT_20017062,&DAT_20018062,iVar4,0x1400);
  FILE_STORAGE_BUFFER = iVar4;
  return;
}



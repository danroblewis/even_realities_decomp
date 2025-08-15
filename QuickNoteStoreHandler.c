/*
 * Function: QuickNoteStoreHandler
 * Entry:    00024684
 * Prototype: undefined QuickNoteStoreHandler()
 */


int QuickNoteStoreHandler(uint param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  code *pcVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  
  local_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  iVar2 = manage_ble_connection_state_comprehensive(&DAT_20003960,&local_30,0,0);
  uVar1 = local_2c;
  if (iVar2 != 0) {
    if (LOG_LEVEL < 1) {
      return -1;
    }
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): quick note file queue get failed\r\n\n","getQuickNoteBKPQueueCacheData");
    }
    else {
      handle_heartbeat();
    }
    if (LOG_LEVEL < 1) {
      return -1;
    }
    pcVar4 = "%s(): quick note get queue data failed\n";
    goto LAB_000246d0;
  }
  if ((local_30 & 0xff) == 1) {
    uVar13 = local_2c & 0xff;
    if (3 < uVar13) goto LAB_000246ee;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): start quicknote text check...\r\n\n","QuickNoteStoreHandler");
      }
      else {
        handle_heartbeat();
      }
    }
    iVar2 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
    if (iVar2 == 0) goto LAB_0002471e;
    fill_memory_buffer(&DAT_20018465,0,0x800);
    iVar2 = get_work_mode();
    pcVar11 = *(code **)(iVar2 + 0x1030);
    uVar3 = get_work_mode();
    iVar2 = (*pcVar11)(uVar3,0x403000,&DAT_20018465,0x800);
    if (iVar2 != 0) goto LAB_00024762;
    iVar2 = uVar13 * 0x200;
    iVar15 = uVar13 * 0x143 + 4;
    puVar9 = (undefined4 *)(&DAT_20018466 + iVar2);
    iVar14 = iVar2 + 0x2001848f;
    iVar12 = uVar13 * 0x143 + 0x2d;
    if ((&DAT_20018465)[iVar2] == -0x56) {
      iVar2 = get_work_mode();
      iVar2 = memcmp_byte_arrays(puVar9,*(int *)(iVar2 + 0x1020) + iVar15,0x29);
      if (iVar2 != 0) {
        fill_memory_buffer(puVar9,0,0x29);
        iVar2 = get_work_mode();
        puVar6 = (undefined4 *)(*(int *)(iVar2 + 0x1020) + iVar15);
        puVar8 = puVar6;
        do {
          puVar7 = puVar8 + 1;
          puVar10 = puVar9 + 1;
          *puVar9 = *puVar8;
          puVar8 = puVar7;
          puVar9 = puVar10;
        } while (puVar7 != puVar6 + 10);
        iVar2 = 1;
        *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
      }
      iVar15 = get_work_mode();
      iVar15 = memcmp_byte_arrays(iVar14,*(int *)(iVar15 + 0x1020) + iVar12,0x119);
      if (iVar15 != 0) goto LAB_000247d0;
      if (iVar2 != 1) {
        if (LOG_LEVEL < 3) {
          return 0;
        }
        if (IS_DEBUG != 0) {
          handle_heartbeat();
          return 0;
        }
        DEBUG_PRINT("%s(): The current quicknote text is stored the same as in flash and does not need to be updated\n"
                    ,"QuickNoteStoreHandler");
        return 0;
      }
    }
    else {
      (&DAT_20018465)[iVar2] = 0xaa;
      fill_memory_buffer(puVar9,0,0x29);
      iVar2 = get_work_mode();
      puVar6 = (undefined4 *)(*(int *)(iVar2 + 0x1020) + iVar15);
      puVar8 = puVar6;
      do {
        puVar7 = puVar8 + 1;
        puVar10 = puVar9 + 1;
        *puVar9 = *puVar8;
        puVar8 = puVar7;
        puVar9 = puVar10;
      } while (puVar7 != puVar6 + 10);
      *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
LAB_000247d0:
      fill_memory_buffer(iVar14,0,0x119);
      iVar2 = get_work_mode();
      memcpy(iVar14,*(int *)(iVar2 + 0x1020) + iVar12,0x119);
    }
    reset_system_parameter_and_byte();
    iVar2 = get_work_mode();
    pcVar11 = *(code **)(iVar2 + 0x1038);
    uVar3 = get_work_mode();
    iVar2 = (*pcVar11)(uVar3,0x403000,0x1000);
    if (iVar2 == 0) {
      iVar2 = get_work_mode();
      pcVar11 = *(code **)(iVar2 + 0x1034);
      uVar3 = get_work_mode();
      iVar2 = (*pcVar11)(uVar3,0x403000,&DAT_20018465,0x800);
      if (iVar2 == 0) {
        if (LOG_LEVEL < 3) {
          return 0;
        }
        pcVar4 = "%s(): quicknote %d store sucess\n";
LAB_000248ee:
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(pcVar4,"QuickNoteStoreHandler",uVar1 & 0xff);
        }
        else {
          handle_heartbeat();
        }
        return 0;
      }
LAB_000248cc:
      if (LOG_LEVEL < 1) {
        return iVar2;
      }
      pcVar4 = "%s(): Flash write failed! %d\n\n";
      goto LAB_00024824;
    }
  }
  else {
    if ((local_30 & 0xff) != 2) {
      return 0;
    }
    uVar13 = local_2c & 0xff;
    if (3 < uVar13) {
LAB_000246ee:
      if (LOG_LEVEL < 1) {
        return -1;
      }
      pcVar4 = "%s(): quicknote upgrade index out of range\n";
LAB_000246d0:
      if (IS_DEBUG != 0) {
        handle_heartbeat();
        return -1;
      }
      DEBUG_PRINT(pcVar4,"QuickNoteStoreHandler");
      return -1;
    }
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): start quicknote text check...\r\n\n","QuickNoteStoreHandler");
      }
      else {
        handle_heartbeat();
      }
    }
    reset_system_parameter_and_byte();
    iVar2 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
    if (iVar2 == 0) {
LAB_0002471e:
      if (LOG_LEVEL < 1) {
        return -1;
      }
      pcVar5 = "mx25r6435f@0";
      pcVar4 = "%s():  [%s] device not ready.\n\n";
LAB_00024772:
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(pcVar4,"QuickNoteStoreHandler",pcVar5);
      }
      else {
        handle_heartbeat();
      }
      return -1;
    }
    fill_memory_buffer(&DAT_20018465,0,0x800);
    iVar2 = get_work_mode();
    pcVar11 = *(code **)(iVar2 + 0x1030);
    uVar3 = get_work_mode();
    iVar2 = (*pcVar11)(uVar3,0x403000,&DAT_20018465,0x800);
    if (iVar2 != 0) {
LAB_00024762:
      if (LOG_LEVEL < 1) {
        return -1;
      }
      pcVar5 = (char *)0x403000;
      pcVar4 = "%s():  form address [%d] read data failed.\n\n";
      goto LAB_00024772;
    }
    fill_memory_buffer(&DAT_20018465 + uVar13 * 0x200,0xff,0x200);
    iVar2 = get_work_mode();
    pcVar11 = *(code **)(iVar2 + 0x1038);
    uVar3 = get_work_mode();
    iVar2 = (*pcVar11)(uVar3,0x403000,0x1000);
    if (iVar2 == 0) {
      iVar2 = get_work_mode();
      pcVar11 = *(code **)(iVar2 + 0x1034);
      uVar3 = get_work_mode();
      iVar2 = (*pcVar11)(uVar3,0x403000,&DAT_20018465,0x800);
      if (iVar2 == 0) {
        if (LOG_LEVEL < 3) {
          return 0;
        }
        pcVar4 = "%s(): quicknote %d delete sucess\n";
        goto LAB_000248ee;
      }
      goto LAB_000248cc;
    }
  }
  if (LOG_LEVEL < 3) {
    return iVar2;
  }
  pcVar4 = "%s(): Flash erase failed! %d\n\n";
LAB_00024824:
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(pcVar4,"QuickNoteStoreHandler",iVar2);
    return iVar2;
  }
  handle_heartbeat();
  return iVar2;
}



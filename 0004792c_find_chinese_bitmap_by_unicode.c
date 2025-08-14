/*
 * Function: find_chinese_bitmap_by_unicode
 * Entry:    0004792c
 * Prototype: undefined find_chinese_bitmap_by_unicode()
 */


undefined4 find_chinese_bitmap_by_unicode(uint param_1,short param_2,short param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r2;
  uint uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined1 auStack_28 [4];
  ushort local_24;
  ushort local_22;
  
  uVar3 = (int)param_2 * (int)param_3 & 0xffff;
  puVar5 = auStack_28 + -(uVar3 + 7 & 0xfffffff8);
  if (param_1 - 0x20 < 0x60) {
    uVar1 = FUN_0007d84c(param_1 & 0xff,uVar3);
  }
  else {
    iVar2 = get_work_mode();
    if (*(int *)(iVar2 + 0x1030) == 0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      iVar2 = get_work_mode();
      pcVar6 = *(code **)(iVar2 + 0x1030);
      uVar1 = get_work_mode();
      iVar2 = (*pcVar6)(uVar1,(param_1 - 0xa4) * 4 + 0x140000,&local_24);
      if (iVar2 != 0) {
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): read flash fail\n\n","find_chinese_bitmap_by_unicode");
          }
          else {
            handle_heartbeat();
          }
        }
        return 0;
      }
      DEBUG_PRINT("unicode=%x, offset=%d\n",(uint)local_24,(uint)local_22);
      puVar4 = (undefined *)((uVar3 >> 2) * (uint)local_22);
      if (uVar3 == 0x1b0) {
        puVar4 = &UNK_000cf120 + (int)puVar4;
      }
      fill_memory_buffer(puVar5,0,uVar3);
      iVar2 = get_work_mode();
      pcVar6 = *(code **)(iVar2 + 0x1030);
      uVar1 = get_work_mode();
      iVar2 = (*pcVar6)(uVar1,puVar4 + 0x200000,puVar5,uVar3 >> 2);
      if ((iVar2 != 0) && (0 < LOG_LEVEL)) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): read flash fail: %d\n\n","find_chinese_bitmap_by_unicode",iVar2);
        }
        else {
          handle_heartbeat();
        }
      }
    }
    FUN_0004790c(puVar5,uVar3,&DAT_2001cf92);
    uVar1 = extraout_r2;
  }
  return uVar1;
}



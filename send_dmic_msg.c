/*
 * Function: send_dmic_msg
 * Entry:    00019ed4
 * Prototype: undefined send_dmic_msg()
 */


int send_dmic_msg(int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 local_e4;
  undefined1 auStack_e0 [204];
  
  local_e4 = 0;
  fill_memory_buffer(auStack_e0,0,199);
  local_e4 = CONCAT31(local_e4._1_3_,0xf1);
  do {
    local_e4._0_2_ = CONCAT11(DAT_20010321,(undefined1)local_e4);
    iVar2 = get_sensor_data_buffer_address();
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = dequeue_dmic((int)&local_e4 + 2);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(param_1 + 0xc))(&local_e4,0xca);
    if ((iVar2 < 0) && (DAT_20007558 = DAT_20007558 + 1, 9 < DAT_20007558)) {
      uVar3 = get_work_mode();
      handle_work_mode_finish(uVar3,1);
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): BLE send failed for %d times\n","send_dmic_msg",DAT_20007558);
        }
        else {
          handle_heartbeat();
        }
      }
      DAT_20007558 = 0;
      return iVar2;
    }
    DAT_2000755c = DAT_2000755c + 1;
    if (99 < DAT_2000755c) {
      DAT_2000755c = 0;
      uVar6 = thunk_FUN_00074f68();
      DAT_20007560 = DAT_20007560 + 1;
      if (0 < LOG_LEVEL) {
        lVar1 = (uVar6 & 0xffffffff) * 1000;
        uVar5 = (uint)lVar1;
        uVar4 = (int)(uVar6 >> 0x20) * 1000 + (int)((ulonglong)lVar1 >> 0x20) +
                (uint)(0xffff8000 < uVar5);
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): dmic_send_count %d send_fail_count %d time %lld\n","send_dmic_msg",
                      DAT_20007560 * 100,DAT_20007558,uVar5 + 0x7fff >> 0xf | uVar4 * 0x20000,
                      uVar4 >> 0xf);
        }
        else {
          handle_heartbeat("%s(): dmic_send_count %d send_fail_count %d time %lld\n");
        }
      }
    }
    DAT_20010321 = DAT_20010321 + 1;
  } while ((DAT_20010321 & 3) != 0);
  return 0;
}



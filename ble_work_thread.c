/*
 * Function: ble_work_thread
 * Entry:    00021da8
 * Prototype: undefined __stdcall ble_work_thread(undefined4 ble_context)
 */


void ble_work_thread(int ble_context)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  byte local_124;
  undefined1 auStack_123 [259];
  
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): start\n\n","ble_work_thread");
    }
    else {
      handle_heartbeat();
    }
  }
  iVar2 = ancs_main(ble_context);
  debug_init();
  if ((iVar2 != 0) && (2 < LOG_LEVEL)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): err:%d\n\n","ble_work_thread",iVar2);
    }
    else {
      handle_heartbeat();
    }
  }
  uVar3 = malloc_maybe(0x2b8);
  iVar2 = LOG_LEVEL;
  *(undefined4 *)(ble_context + 0x10) = uVar3;
  if (2 < iVar2) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): tx_size:%d\n\n","ble_work_thread",0x2b8);
    }
    else {
      handle_heartbeat();
    }
  }
  while( true ) {
    while (iVar2 = get_work_mode(), -1 < (int)((uint)*(ushort *)(iVar2 + 0x105c) << 0x18)) {
      calculate_ble_schedule_timing(0x8000,0);
    }
    uVar5 = handle_message_dequeue(&local_124);
    if ((int)uVar5 == 0) break;
    *(undefined1 *)(ble_context + 0x248) = 0;
    manage_ble_connection_state_comprehensive
              (ble_context + 0x218,(int)((ulonglong)uVar5 >> 0x20),0xffffffff,0xffffffff);
    *(undefined1 *)(ble_context + 0x248) = 1;
    bVar1 = DMIC_DATA_READY_FLAG;
    if ((*(int *)(ble_context + 0x35c) != 0) || (*(int *)(ble_context + 0x358) != 0))
    goto LAB_00021e6a;
    if (PENDING_EVENT_STATUS != -1) {
      *(undefined4 *)(ble_context + 0x35c) = 1;
      **(undefined1 **)(ble_context + 0x254) = 0xf5;
      *(char *)(*(int *)(ble_context + 0x254) + 1) = PENDING_EVENT_STATUS;
      PENDING_EVENT_STATUS = -1;
      *(undefined1 *)(*(int *)(ble_context + 0x254) + 2) = 0xcb;
      *(undefined4 *)(ble_context + 0x358) = 0;
      *(undefined4 *)(ble_context + 0x360) = 3;
      if (*(byte *)(*(int *)(ble_context + 0x254) + 1) - 9 < 2) {
        *(undefined1 *)(*(int *)(ble_context + 0x254) + 2) = *(undefined1 *)(ble_context + 0x18);
      }
      goto LAB_00021e6a;
    }
    uVar4 = (uint)DMIC_DATA_READY_FLAG;
    if (uVar4 != 0) {
      *(undefined4 *)(ble_context + 0x35c) = 1;
      **(undefined1 **)(ble_context + 0x254) = 0xf1;
      DMIC_DATA_READY_FLAG = 0;
      *(undefined1 *)(*(int *)(ble_context + 0x254) + 1) = 0;
      *(undefined1 *)(*(int *)(ble_context + 0x254) + 2) = 0xcc;
      *(undefined4 *)(ble_context + 0x358) = 0;
      goto LAB_00021e6a;
    }
    if (HEARTBEAT_PENDING_FLAG != 0) {
      *(undefined4 *)(ble_context + 0x35c) = 1;
      **(undefined1 **)(ble_context + 0x254) = 0xf4;
      *(byte *)(*(int *)(ble_context + 0x254) + 1) = bVar1;
      *(undefined1 *)(*(int *)(ble_context + 0x254) + 2) = 0xcb;
      HEARTBEAT_PENDING_FLAG = uVar4;
      *(undefined4 *)(ble_context + 0x358) = 0;
LAB_00021e6a:
      if (*(char *)(ble_context + 0x364) == '\0') {
        if (*(int *)(ble_context + 0x358) == 0) {
          process_ble_command(*(undefined4 *)
                               (ble_context + *(int *)(ble_context + 0x35c) * 4 + 0x250),
                              *(undefined4 *)(ble_context + 0x360),0);
        }
        else {
          process_ble_command(ble_context + 600,*(int *)(ble_context + 0x358),0);
          fill_memory_buffer(ble_context + 600,0,0x100);
        }
        *(undefined4 *)(ble_context + 0x358) = 0;
        *(undefined4 *)(ble_context + 0x35c) = 0;
      }
      else {
        iVar2 = update_work_mode_state();
        if (iVar2 == 0) {
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): charge plug off, call bt_start. \n\n","ble_work_thread",0);
            }
            else {
              handle_heartbeat();
            }
          }
          iVar2 = bt_start();
          if (iVar2 != 0) {
            DEBUG_PRINT("Advertising failed to start (err %d)\n",iVar2);
          }
        }
        else if (1 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): bt_le_adv_stop failed!!! err=%d\n\n","ble_work_thread",iVar2);
          }
          else {
            handle_heartbeat();
          }
        }
        *(undefined1 *)(ble_context + 0x364) = 0;
      }
    }
  }
  uVar4 = (uint)local_124;
  if (uVar4 < 0x15) {
    memcpy(*(undefined4 *)(ble_context + 0x254),auStack_123,uVar4);
    *(undefined4 *)(ble_context + 0x35c) = 1;
    *(undefined4 *)(ble_context + 0x358) = 0;
    *(uint *)(ble_context + 0x360) = (uint)local_124;
  }
  else {
    memcpy(ble_context + 600,auStack_123,uVar4);
    *(uint *)(ble_context + 0x358) = uVar4;
  }
  goto LAB_00021e6a;
}



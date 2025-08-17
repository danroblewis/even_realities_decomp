#include "__ble_context.h"

/*
 * Function: ble_work_thread
 * Entry:    00021da8
 * Prototype: undefined __stdcall ble_work_thread(undefined4 ble_context)
 */


void ble_work_thread(struct __ble_context* ble_context)

{
  byte bVar1;
  int iVar2;
  undefined4 ble_tx_buffer;
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
  ble_tx_buffer = malloc_maybe(0x2b8);
  iVar2 = LOG_LEVEL;
  ble_context->tx_buffer = ble_tx_buffer;
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
    ble_context->processing_flag = 0;
    manage_ble_connection_state_comprehensive
              (&ble_context->connection_state_area,(int)((ulonglong)uVar5 >> 0x20),0xffffffff,0xffffffff);
    ble_context->processing_flag = 1;
    bVar1 = DMIC_DATA_READY_FLAG;
    if ((ble_context->command_index != 0) || (ble_context->command_param != 0))
      goto LAB_00021e6a;
    if (PENDING_EVENT_STATUS != -1) {
      ble_context->command_index = 1;
      ble_context->command_buffer[0] = 0xf5;
      ble_context->command_buffer[1] = PENDING_EVENT_STATUS;
      PENDING_EVENT_STATUS = -1;
      ble_context->command_buffer[2] = 0xcb;
      ble_context->command_param = 0;
      ble_context->command_data = 3;
      if (ble_context->command_buffer[1] - 9 < 2) {
        ble_context->command_buffer[2] = ble_context->dmic_data;
      }
      goto LAB_00021e6a;
    }
    uVar4 = (uint)DMIC_DATA_READY_FLAG;
    if (uVar4 != 0) {
      ble_context->command_index = 1;
      ble_context->command_buffer[0] = 0xf1;
      DMIC_DATA_READY_FLAG = 0;
      ble_context->command_buffer[1] = 0;
      ble_context->command_buffer[2] = 0xcc;
      ble_context->command_param = 0;
      goto LAB_00021e6a;
    }
    if (HEARTBEAT_PENDING_FLAG != 0) {
      ble_context->command_index = 1;
      ble_context->command_buffer[0] = 0xf4;
      ble_context->command_buffer[1] = bVar1;
      ble_context->command_buffer[2] = 0xcb;
      HEARTBEAT_PENDING_FLAG = uVar4;
      ble_context->command_param = 0;
LAB_00021e6a:
      if (ble_context->work_mode_flag == '\0') {
        if (ble_context->command_param == 0) {
          process_ble_command(ble_context->command_table[ble_context->command_index],
                              ble_context->command_data,0);
        }
        else {
          process_ble_command(&ble_context->large_buffer, ble_context->command_param, 0);
          fill_memory_buffer(&ble_context->large_buffer,0,0x100);
        }
        ble_context->command_param = 0;
        ble_context->command_index = 0;
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
        ble_context->work_mode_flag = 0;
      }
    }
  }
  uVar4 = (uint)local_124;
  if (uVar4 < 0x15) {
    memcpy(ble_context->command_buffer,auStack_123,uVar4);
    ble_context->command_index = 1;
    ble_context->command_param = 0;
    ble_context->command_data = (uint)local_124;
  }
  else {
    memcpy(&ble_context->large_buffer,auStack_123,uVar4);
    ble_context->command_param = uVar4;
  }
  goto LAB_00021e6a;
}



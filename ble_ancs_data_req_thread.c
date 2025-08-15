/*
 * Function: ble_ancs_data_req_thread
 * Entry:    00019718
 * Prototype: undefined ble_ancs_data_req_thread()
 */


void ble_ancs_data_req_thread(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): enter\n","ble_ancs_data_req_thread",param_3,0,param_4);
    }
    else {
      handle_heartbeat();
    }
  }
  setup_bluetooth_stack(param_1 + 0x200,0,10);
  setup_bluetooth_stack(param_1 + 0x1e8,0,10);
  init_msgq_ancs();
  init_msgq_uid();
  get_schedule_timing(0x28000,0);
LAB_00019768:
  do {
    iVar1 = get_work_mode();
    if (*(char *)(iVar1 + 1) != '\x01') {
      iVar1 = get_work_mode();
      if (*(char *)(iVar1 + 1) != '\b') {
        iVar1 = get_work_mode();
        if ((int)((uint)*(ushort *)(iVar1 + 0x105c) << 0x18) < 0) {
          if (0 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): !!!!!!!!!wait -> ancs_get_attr_req_sem\n",
                          "ble_ancs_data_req_thread");
            }
            else {
              handle_heartbeat();
            }
          }
          FUN_00072908(param_1 + 0x200);
          iVar1 = dequeue_uid(&DAT_20006aac);
          if (iVar1 == 0) {
            if (0 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): !!!!!!!!!!!!!!get -> ancs_get_attr_req_sem %d evt_id %d\n",
                            "ble_ancs_data_req_thread",DAT_20006aac,(uint)DAT_20006ab0);
              }
              else {
                handle_heartbeat("%s(): !!!!!!!!!!!!!!get -> ancs_get_attr_req_sem %d evt_id %d\n",
                                 "ble_ancs_data_req_thread");
              }
            }
            if (DAT_20006ab0 < 2) {
              request_ancs_attr_ext();
              if (0 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): !!!!!!!!!!!!wait -> ancs_get_attr_req_sem add done, and wait -> ancs_get_attr_data_sem\n"
                              ,"ble_ancs_data_req_thread");
                }
                else {
                  handle_heartbeat();
                }
              }
              FUN_00072908(param_1 + 0x1e8);
            }
            else {
              *(undefined4 *)(param_1 + 0x1e4) = 2;
              *(undefined4 *)(param_1 + 0x3c) = DAT_20006aac;
              *(undefined1 *)(param_1 + 0x41) = 0;
              *(undefined1 *)(param_1 + 0x44) = 0x30;
              *(undefined1 *)(param_1 + 100) = 0x30;
              *(undefined1 *)(param_1 + 0x42) = 0;
              enqueue_ancs(param_1 + 0x34);
              fill_memory_buffer(param_1 + 0x34,0,0x1b4);
              if (0 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): !!!!!!!!!!!!wait -> ancs_get_attr_req_sem remove done, and wait -> ancs_get_attr_data_sem\n"
                              ,"ble_ancs_data_req_thread");
                }
                else {
                  handle_heartbeat();
                }
              }
            }
            process_ancs_data(param_1);
            if (0 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): !!!!!!!!!!!!!!!!wait -> ancs_get_attr_data_sem done\n",
                            "ble_ancs_data_req_thread");
              }
              else {
                handle_heartbeat();
              }
            }
          }
        }
        else {
          FUN_0007c0a8(1000);
        }
        goto LAB_00019768;
      }
    }
    get_schedule_timing(0x28000,0);
  } while( true );
}



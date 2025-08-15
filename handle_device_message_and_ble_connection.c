/*
 * Function: handle_device_message_and_ble_connection
 * Entry:    0005ffa4
 * Prototype: undefined handle_device_message_and_ble_connection()
 */


void handle_device_message_and_ble_connection(char *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 local_40;
  char *local_3c;
  int iStack_38;
  undefined4 local_30 [4];
  undefined4 local_20;
  char *local_1c;
  
  cVar2 = *param_1;
  if (cVar2 == '\0') {
    iVar1 = *(int *)(param_1 + 4);
    if (DAT_2000b05a == '\0') {
LAB_0005ffbe:
      if (iVar1 == 0) {
        return;
      }
      cVar2 = '\0';
      goto LAB_000600b0;
    }
    if (iVar1 == 0) {
LAB_00060032:
      if (DEVICE_MESSAGE_AND_BLE_CONNECTION_STATE == '\0') {
        return;
      }
      DEVICE_MESSAGE_AND_BLE_CONNECTION_STATE = 0;
      if (-1 < (int)((uint)DAT_2000b058 << 0x1f)) {
        DEVICE_MESSAGE_AND_BLE_CONNECTION_STATE = 0;
        return;
      }
      manage_task_state_decrement_with_priority_control(DAT_2000b008);
      return;
    }
LAB_00060086:
    enqueue_message_to_priority_queue(DAT_2000b01c);
    if ((DEVICE_MESSAGE_AND_BLE_CONNECTION_STATE != '\0') &&
       (DEVICE_MESSAGE_AND_BLE_CONNECTION_STATE = '\0', (int)((uint)DAT_2000b058 << 0x1f) < 0)) {
      manage_task_state_decrement_with_priority_control(DAT_2000b008);
    }
  }
  else {
    iVar1 = process_ble_connection_data(DAT_2000b01c,local_30,0,0);
    if (iVar1 < 0) {
      local_3c = "Failed to allocate buffer: %d";
    }
    else {
      iVar1 = process_interrupt_data_with_state_management
                        (local_30[0],(uint)(DAT_2000b020 << 0xf) >> 0x10);
      if (iVar1 == 0xbad0000) {
        iVar1 = *(int *)(param_1 + 4);
        if (DAT_2000b05a != '\0') {
          if (iVar1 == 0) goto LAB_00060032;
          cVar2 = '\0';
          goto LAB_00060086;
        }
        goto LAB_0005ffbe;
      }
      local_3c = "Failed to set buffer: 0x%08x";
    }
    local_40 = 3;
    iStack_38 = iVar1;
    execute_device_data_compression(&DAT_000881a0,0x1840,&local_40);
    if (DAT_2000b05a != '\0') {
      cVar2 = DAT_2000b05a;
      if (*(int *)(param_1 + 4) == 0) {
        if ((DEVICE_MESSAGE_AND_BLE_CONNECTION_STATE != '\0') &&
           (DEVICE_MESSAGE_AND_BLE_CONNECTION_STATE = '\0', (int)((uint)DAT_2000b058 << 0x1f) < 0))
        {
          manage_task_state_decrement_with_priority_control(DAT_2000b008);
        }
        goto LAB_00060008;
      }
      goto LAB_00060086;
    }
    if (*(int *)(param_1 + 4) == 0) goto LAB_00060008;
LAB_000600b0:
    iVar1 = enqueue_message_to_queue(&DAT_2000b024,param_1 + 4,0,0);
    if (iVar1 < 0) {
      local_1c = "No room in RX queue";
      local_20 = 2;
      execute_device_data_compression(&DAT_000881a0,0x1040,&local_20);
      enqueue_message_to_priority_queue(DAT_2000b01c,*(undefined4 *)(param_1 + 4));
      goto LAB_00060008;
    }
  }
  if (cVar2 == '\0') {
    return;
  }
LAB_00060008:
  DAT_2000b05a = 1;
  manage_device_interrupt_completion_state();
  return;
}



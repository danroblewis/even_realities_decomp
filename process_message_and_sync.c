/*
 * Function: process_message_and_sync
 * Entry:    00027448
 * Prototype: undefined __stdcall process_message_and_sync(undefined4 work_mode_context, undefined4 message_type, undefined4 message_data, undefined4 data_length)
 */


uint process_message_and_sync
               (int work_mode_context,int message_type,int message_data,uint data_length)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  iVar1 = get_system_ready_state();
  uVar8 = 0;
  if (iVar1 != 1) {
    while (MESSAGE_PROCESSING_AND_SYNC_STATE != '\0') {
      uVar8 = uVar8 + 1;
      if (uVar8 == 2000) {
        MESSAGE_PROCESSING_AND_SYNC_STATE = 0;
        return 2000;
      }
      delay_with_timing(1);
    }
    MESSAGE_PROCESSING_AND_SYNC_STATE = 1;
    uVar8 = uVar8 & 0xffff;
    *(char *)(work_mode_context + 0x6e1) = *(char *)(work_mode_context + 0x6e1) + '\x01';
    *(byte *)(work_mode_context + 0x6cc) = (byte)message_type & 0x3f | 0x80;
    puVar9 = (undefined4 *)(work_mode_context + 0x6cc);
    *(undefined1 *)(work_mode_context + 0x6cd) = *(undefined1 *)(work_mode_context + 0xfcf);
    *(undefined1 *)(work_mode_context + 0x6ce) = *(undefined1 *)(work_mode_context + 0xfd0);
    *(undefined1 *)(work_mode_context + 0x6cf) = *(undefined1 *)(work_mode_context + 0xfd1);
    *(undefined4 *)(work_mode_context + 0x6d8) = *(undefined4 *)(work_mode_context + 0xfe0);
    *(undefined2 *)(work_mode_context + 0x6dc) = *(undefined2 *)(work_mode_context + 0xfe4);
    *(undefined1 *)(work_mode_context + 0x6d0) = *(undefined1 *)(work_mode_context + 0xfc0);
    if (message_type - 0xbU < 2) {
      MESSAGE_AND_SYNC_PROCESSING_BUFFER = 4;
      puVar4 = puVar9;
      puVar7 = &MESSAGE_SYNC_PROCESSING_DATA;
      do {
        puVar3 = puVar4 + 1;
        puVar6 = puVar7 + 1;
        *puVar7 = *puVar4;
        puVar4 = puVar3;
        puVar7 = puVar6;
      } while (puVar3 != (undefined4 *)(work_mode_context + 0x6e0));
      *(undefined2 *)puVar6 = *(undefined2 *)puVar3;
      validate_memory_bounds(0x20018c71,message_data,data_length,0xfa);
      uVar2 = 0xdc;
      *(undefined1 *)(work_mode_context + 0x105a) = 1;
      pcVar5 = *(code **)(work_mode_context + 0x774);
    }
    else {
      if ((message_data != 0) && (data_length != 0)) {
        if (1 < data_length) {
          data_length = 2;
        }
        memcpy(work_mode_context + 0x6df,message_data,data_length);
      }
      if (message_type == 1) {
        MESSAGE_PROCESSING_AND_SYNC_STATE_2 = *(undefined1 *)(work_mode_context + 0x6e1);
        iVar1 = memcmp_byte_arrays(&MESSAGE_SYNC_PROCESSING_PARAMETERS,puVar9,0x16);
        if (iVar1 == 0) {
          MESSAGE_PROCESSING_AND_SYNC_STATE = 0;
          return uVar8;
        }
        MESSAGE_AND_SYNC_PROCESSING_BUFFER = 4;
        puVar4 = puVar9;
        puVar7 = &MESSAGE_SYNC_PROCESSING_DATA;
        do {
          puVar3 = puVar4 + 1;
          puVar6 = puVar7 + 1;
          *puVar7 = *puVar4;
          puVar4 = puVar3;
          puVar7 = puVar6;
        } while (puVar3 != (undefined4 *)(work_mode_context + 0x6e0));
      }
      else {
        MESSAGE_AND_SYNC_PROCESSING_BUFFER = 4;
        puVar4 = puVar9;
        puVar7 = &MESSAGE_SYNC_PROCESSING_DATA;
        do {
          puVar3 = puVar4 + 1;
          puVar6 = puVar7 + 1;
          *puVar7 = *puVar4;
          puVar4 = puVar3;
          puVar7 = puVar6;
        } while (puVar3 != (undefined4 *)(work_mode_context + 0x6e0));
      }
      uVar2 = 0x21;
      *(undefined2 *)puVar6 = *(undefined2 *)puVar3;
      *(undefined1 *)(work_mode_context + 0x105a) = 1;
      pcVar5 = *(code **)(work_mode_context + 0x774);
    }
    (*pcVar5)(&MESSAGE_AND_SYNC_PROCESSING_BUFFER,uVar2);
    while (*(char *)(work_mode_context + 0x105a) != '\x02') {
      uVar8 = uVar8 + 1 & 0xffff;
      if (uVar8 == 2000) {
        if (message_type != 1) {
          MESSAGE_PROCESSING_AND_SYNC_STATE = 0;
          return 2000;
        }
        fill_memory_buffer(&MESSAGE_SYNC_PROCESSING_PARAMETERS,0,0x16);
        MESSAGE_PROCESSING_AND_SYNC_STATE = 0;
        return 2000;
      }
      delay_with_timing(1);
    }
    if (message_type == 1) {
      puVar4 = &MESSAGE_SYNC_PROCESSING_PARAMETERS;
      do {
        puVar3 = puVar9 + 1;
        puVar7 = puVar4 + 1;
        *puVar4 = *puVar9;
        puVar4 = puVar7;
        puVar9 = puVar3;
      } while (puVar3 != (undefined4 *)(work_mode_context + 0x6e0));
      *(undefined2 *)puVar7 = *(undefined2 *)puVar3;
    }
  }
  MESSAGE_PROCESSING_AND_SYNC_STATE = 0;
  return uVar8;
}



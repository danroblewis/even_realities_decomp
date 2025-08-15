/*
 * Function: confirm_message
 * Entry:    00034524
 * Prototype: undefined confirm_message()
 */


void confirm_message(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte bVar10;
  uint uVar11;
  
  iVar5 = MESSAGE_CONFIRMATION_STATE;
  if (((MESSAGE_BUFFER_SYSTEM_STATUS_DATA != '\0') && (MESSAGE_CONFIRMATION_STATE == param_1)) &&
     (MESSAGE_BUFFER_CONFIRMATION_DATA == '\x04')) {
    uVar11 = DAT_20009064 & 0xff;
    pcVar3 = (char *)get_work_mode();
    if (((*pcVar3 == '\x01') && (uVar11 == 0)) &&
       (iVar4 = validate_data_entry_exists(10,iVar5), iVar4 != 0)) {
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): add found same message, uidtail %d\n","confirm_message",iVar5);
        }
        else {
          handle_heartbeat();
        }
      }
      fill_memory_buffer(&MESSAGE_BUFFER_MANAGEMENT_SYSTEM,0,0x1b4);
      return;
    }
    TIMEOUT_MESSAGE_COUNTER = 1;
    iVar5 = get_work_mode();
    if (*(char *)(iVar5 + 0xd5) != '\x04') {
      clear_timeout_message(0);
    }
    uVar6 = count_active_system_entries();
    if (DAT_20009064 == 0) {
      if (uVar6 == 10) {
        iVar5 = 0;
        puVar9 = &TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY;
        do {
          iVar4 = memcpy(puVar9,puVar9 + 0x6d,0x1b4);
          *(char *)(iVar4 + 0xc) = (char)iVar5;
          iVar5 = iVar5 + 1;
          puVar9 = puVar9 + 0x6d;
        } while (iVar5 != 9);
        uVar6 = 9;
      }
      iVar5 = memcpy(&TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY + uVar6 * 0x6d,
                     &MESSAGE_BUFFER_MANAGEMENT_SYSTEM);
      iVar4 = (&TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY)[uVar6 * 0x6d];
      *(char *)(iVar5 + 0xc) = (char)uVar6;
      if (iVar4 == 0) {
        uVar7 = get_work_mode_timestamp();
        (&TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY)[uVar6 * 0x6d] = uVar7;
      }
      (&DAT_20007dba)[uVar6 * 0x1b4] = 1;
      if ((&TIMEOUT_MESSAGE_STATE_TABLE)[uVar6 * 0x6d] != 0) {
        uVar7 = get_work_mode_timestamp();
        (&TIMEOUT_MESSAGE_STATE_TABLE)[uVar6 * 0x6d] = uVar7;
      }
    }
    else if (DAT_20009064 == 2) {
      if (uVar6 != 0) {
        bVar1 = false;
        bVar10 = 0;
        puVar9 = &TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY;
        do {
          if ((puVar9[2] == MESSAGE_CONFIRMATION_STATE) || (bVar1)) {
            iVar5 = memcpy(puVar9,puVar9 + 0x6d,0x1b4);
            bVar1 = true;
            *(byte *)(iVar5 + 0xc) = bVar10;
          }
          bVar10 = bVar10 + 1;
          puVar9 = puVar9 + 0x6d;
        } while (bVar10 < uVar6);
        if (bVar1) {
          fill_memory_buffer(&TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY + (uVar6 - 1) * 0x6d,0);
        }
      }
    }
    else if ((DAT_20009064 == 1) && (uVar6 != 0)) {
      puVar9 = &TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY;
      uVar8 = 0;
      do {
        if (puVar9[2] == MESSAGE_CONFIRMATION_STATE) {
          memcpy(&TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY + uVar8 * 0x6d,
                 &MESSAGE_BUFFER_MANAGEMENT_SYSTEM);
          break;
        }
        uVar8 = uVar8 + 1;
        puVar9 = puVar9 + 0x6d;
      } while ((uVar8 & 0xff) < uVar6);
    }
    fill_memory_buffer(&MESSAGE_BUFFER_MANAGEMENT_SYSTEM,0,0x1b4);
    for (uVar6 = 10; uVar6 < SYSTEM_MESSAGE_QUEUE; uVar6 = uVar6 + 1 & 0xff) {
      if ((&TIMEOUT_MESSAGE_STATES_DEBUG_LOGGING_STATE_3)[uVar6 * 0x1b4] == '\0') goto LAB_00034640;
      iVar5 = memcpy(&TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY + uVar6 * 0x6d,
                     &TIMEOUT_MESSAGE_STATES_DEBUG_LOGGING_STATE_2 + uVar6 * 0x6d,0x1b4);
      *(char *)(iVar5 + 0xc) = (char)uVar6;
      *(undefined1 *)(iVar5 + 0xd) = 0;
    }
    if (10 < SYSTEM_MESSAGE_QUEUE) {
LAB_00034640:
      SYSTEM_MESSAGE_QUEUE = SYSTEM_MESSAGE_QUEUE - 1;
    }
    fill_memory_buffer(&TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY + (uint)SYSTEM_MESSAGE_QUEUE * 0x6d,0
                      );
    iVar5 = get_work_mode();
    if (*(char *)(iVar5 + 0xd5) == '\x04') {
      iVar5 = get_work_mode();
      uVar2 = calculate_next_timeout_message_state();
      *(undefined1 *)(iVar5 + 0xdd) = uVar2;
    }
    else {
      clear_timeout_message(0);
    }
    if (uVar11 == 0) {
      iVar5 = find_active_system_status();
      iVar4 = get_work_mode();
      if (*(char *)(iVar4 + 0xd5) == '\x04') {
        if (iVar5 != 0xff) {
          check_timeout_message_states_and_set_flag();
        }
      }
      else {
        iVar5 = get_work_mode();
        if (((*(char *)(iVar5 + 0xd5) == '\0') ||
            ((iVar5 = get_work_mode(), *(char *)(iVar5 + 0x108f) != '\0' &&
             (iVar5 = get_work_mode(), *(char *)(iVar5 + 0xd5) == '\x06')))) &&
           (iVar5 = is_msg_expiration(), iVar5 != 1)) {
          SYSTEM_STATUS_AND_TIMER_CONTROL = 1;
        }
      }
    }
    if (MESSAGE_CONFIRMATION_FLAG == '\0') {
      log_timeout_message_states_for_debugging();
      log_debug_messages_with_heartbeat();
    }
    TIMEOUT_MESSAGE_COUNTER = 0;
  }
  return;
}



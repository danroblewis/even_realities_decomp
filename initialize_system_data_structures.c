/*
 * Function: initialize_system_data_structures
 * Entry:    00033c5c
 * Prototype: undefined initialize_system_data_structures()
 */


void initialize_system_data_structures(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  TIMEOUT_MESSAGE_COUNTER = 1;
  puVar2 = &TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY;
  do {
    iVar1 = fill_memory_buffer(puVar2,0,0x1b4,puVar2,in_r3);
    iVar3 = iVar3 + 1;
    puVar2 = (undefined4 *)(iVar1 + 0x1b4);
  } while (iVar3 != 0x14);
  SYSTEM_MESSAGE_QUEUE = 10;
  TIMEOUT_MESSAGE_STATE = 0;
  iVar3 = get_work_mode();
  *(undefined1 *)(iVar3 + 0xdd) = 0;
  log_timeout_message_states_for_debugging();
  log_debug_messages_with_heartbeat();
  TIMEOUT_MESSAGE_COUNTER = 0;
  return;
}



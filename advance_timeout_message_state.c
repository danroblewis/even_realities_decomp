/*
 * Function: advance_timeout_message_state
 * Entry:    0003439c
 * Prototype: undefined advance_timeout_message_state()
 */


void advance_timeout_message_state(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (((&TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY)[(uint)TIMEOUT_MESSAGE_STATE * 0x6d] != 0) &&
     ((&TIMEOUT_MESSAGE_STATE_AND_EXPIRATION_MANAGEMENT)[(uint)TIMEOUT_MESSAGE_STATE * 0x1b4] ==
      '\0')) {
    iVar2 = get_work_mode();
    uVar1 = calculate_next_timeout_message_state();
    *(undefined1 *)(iVar2 + 0xdd) = uVar1;
    iVar2 = get_work_mode();
    uVar5 = (uint)*(byte *)(iVar2 + 0xdd);
    if (uVar5 != 0) {
      iVar2 = get_work_mode();
      uVar5 = *(byte *)(iVar2 + 0xdd) - 1 & 0xff;
    }
    TIMEOUT_MESSAGE_STATE = (byte)uVar5;
    uVar3 = get_work_mode_timestamp();
    uVar4 = (uint)TIMEOUT_MESSAGE_STATE;
    (&TIMEOUT_MESSAGE_STATE_TABLE)[uVar5 * 0x6d] = uVar3;
    (&TIMEOUT_MESSAGE_STATE_AND_EXPIRATION_MANAGEMENT)[uVar4 * 0x1b4] = 1;
    iVar2 = get_work_mode();
    uVar1 = calculate_next_timeout_message_state();
    *(undefined1 *)(iVar2 + 0xdd) = uVar1;
  }
  log_timeout_message_states_for_debugging();
  return;
}



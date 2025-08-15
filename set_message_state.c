/*
 * Function: set_message_state
 * Entry:    00033bf0
 * Prototype: undefined __stdcall set_message_state(undefined4 message_index, undefined1 new_state)
 */


void set_message_state(int message_index,undefined1 new_state)

{
  (&DAT_20007db9)[message_index * 0x1b4] = new_state;
  return;
}



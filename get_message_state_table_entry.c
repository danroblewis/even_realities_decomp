/*
 * Function: get_message_state_table_entry
 * Entry:    00033c4c
 * Prototype: undefined __stdcall get_message_state_table_entry(undefined4 message_index)
 */


undefined4 * get_message_state_table_entry(int message_index)

{
  return &DAT_20007dac + message_index * 0x6d;
}



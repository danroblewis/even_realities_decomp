/*
 * Function: process_status_message
 * Entry:    000183ac
 * Prototype: undefined process_status_message()
 */


void process_status_message(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_28 [36];
  
  format_status_message(param_2,auStack_28);
  DEBUG_PRINT("bond_deleted conn: %s\n",auStack_28);
  DAT_20007514 = DAT_20007514 + -1;
  *(undefined1 *)(ANCS_CONNECTION_HANDLE + 0x367) = 0;
  return;
}



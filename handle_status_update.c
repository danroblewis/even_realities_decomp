/*
 * Function: handle_status_update
 * Entry:    00018730
 * Prototype: undefined handle_status_update()
 */


void handle_status_update(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_38 [36];
  
  puVar1 = (undefined4 *)get_connection_data_pointer();
  format_status_message(puVar1,auStack_38);
  iVar2 = get_work_mode();
  if (*(char *)(iVar2 + 0x1071) != '\0') {
    iVar2 = get_work_mode();
    *(undefined1 *)(iVar2 + 0x1071) = 0;
  }
  iVar2 = get_system_ready_state();
  if (iVar2 == 0) {
    iVar2 = get_work_mode();
    iVar2 = memcmp_byte_arrays(iVar2 + 0x1069,puVar1,7);
    if (iVar2 != 0) {
      iVar2 = get_work_mode();
      process_data_with_initialization_and_state_management(0,iVar2 + 0x1069);
      iVar2 = get_work_mode();
      *(undefined1 *)(iVar2 + 0x1070) = 0;
      iVar2 = get_work_mode();
      *(undefined4 *)(iVar2 + 0x104c) = 0;
      iVar2 = get_work_mode();
      z_spin_lock_valid(iVar2 + 0x80);
    }
  }
  iVar2 = get_work_mode();
  *(undefined4 *)(iVar2 + 0x1069) = *puVar1;
  *(undefined2 *)(iVar2 + 0x106d) = *(undefined2 *)(puVar1 + 1);
  *(undefined1 *)(iVar2 + 0x106f) = *(undefined1 *)((int)puVar1 + 6);
  DEBUG_PRINT("Pairing completed: %s, bonded: %d\n",auStack_38,param_2);
  DAT_20007514 = DAT_20007514 + 1;
  *(undefined1 *)(ANCS_CONNECTION_HANDLE + 0x367) = 0;
  return;
}



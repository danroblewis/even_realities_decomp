/*
 * Function: handle_state_management
 * Entry:    00019ac0
 * Prototype: undefined handle_state_management()
 */


undefined4 handle_state_management(int param_1)

{
  int iVar1;
  
  clear_system_flags();
  if (param_1 == 0) {
    iVar1 = get_work_mode();
    if (*(char *)(iVar1 + 0x1070) != '\x01') {
      return 0;
    }
    iVar1 = get_work_mode();
    *(undefined1 *)(iVar1 + 0x1070) = 0;
  }
  else {
    if (ANCS_CONNECTION_HANDLE == 0) {
      return 0;
    }
    handle_parameter_operation();
    iVar1 = get_work_mode();
    if (*(char *)(iVar1 + 0x1070) != '\0') {
      return 0;
    }
    iVar1 = get_work_mode();
    *(undefined1 *)(iVar1 + 0x1070) = 1;
  }
  iVar1 = get_work_mode();
  *(undefined4 *)(iVar1 + 0x104c) = 0;
  iVar1 = get_work_mode();
  z_spin_lock_valid(iVar1 + 0x80);
  return 0;
}



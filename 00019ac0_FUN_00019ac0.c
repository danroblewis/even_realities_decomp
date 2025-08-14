/*
 * Function: FUN_00019ac0
 * Entry:    00019ac0
 * Prototype: undefined FUN_00019ac0()
 */


undefined4 FUN_00019ac0(int param_1)

{
  int iVar1;
  
  FUN_00018ab0();
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
    FUN_000182c8();
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



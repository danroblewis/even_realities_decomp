/*
 * Function: check_and_clear_burial_point_flag
 * Entry:    0007dada
 * Prototype: undefined check_and_clear_burial_point_flag()
 */


void check_and_clear_burial_point_flag(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = get_work_mode();
  if ((*(char *)(iVar1 + 0x10ac) != '\0') && (uVar2 = get_burial_point_status_value(), uVar2 < 7)) {
    iVar1 = get_work_mode();
    *(undefined1 *)(iVar1 + 0x10ac) = 0;
  }
  return;
}



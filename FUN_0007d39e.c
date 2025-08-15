/*
 * Function: FUN_0007d39e
 * Entry:    0007d39e
 * Prototype: undefined FUN_0007d39e()
 */


void FUN_0007d39e(void)

{
  int iVar1;
  
  iVar1 = get_work_mode();
  if (**(char **)(iVar1 + 0x1014) != '\0') {
    iVar1 = get_work_mode();
    **(undefined1 **)(iVar1 + 0x1014) = 0;
  }
  return;
}



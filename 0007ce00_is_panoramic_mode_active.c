/*
 * Function: is_panoramic_mode_active
 * Entry:    0007ce00
 * Prototype: undefined is_panoramic_mode_active()
 */


bool is_panoramic_mode_active(void)

{
  int iVar1;
  
  iVar1 = get_work_mode();
  if (((**(int **)(iVar1 + 0x1054) == 0) &&
      (iVar1 = get_work_mode(), *(char *)(*(int *)(iVar1 + 0x1054) + 4) == '\x01')) &&
     (iVar1 = get_work_mode(), *(char *)(iVar1 + 0xd5) == '\0')) {
    iVar1 = get_work_mode();
    return *(char *)(iVar1 + 0xfe6) == '\x01';
  }
  return false;
}



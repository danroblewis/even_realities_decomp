/*
 * Function: FUN_000429f8
 * Entry:    000429f8
 * Prototype: undefined FUN_000429f8()
 */


void FUN_000429f8(void)

{
  int iVar1;
  
  iVar1 = get_work_mode();
  if (((((*(char *)(*(int *)(iVar1 + 0x1014) + 2) == '\x05') ||
        (iVar1 = get_work_mode(), *(char *)(*(int *)(iVar1 + 0x1014) + 2) == '\x13')) ||
       (iVar1 = get_work_mode(), *(char *)(*(int *)(iVar1 + 0x1014) + 2) == '\x14')) ||
      (iVar1 = get_work_mode(), *(char *)(*(int *)(iVar1 + 0x1014) + 2) == '\x15')) &&
     ((DAT_2001cdce == '\x02' &&
      (iVar1 = get_work_mode(), *(char *)(*(int *)(iVar1 + 0x1014) + 3) == '\x01')))) {
    DAT_2001cdd1 = 1;
  }
  return;
}



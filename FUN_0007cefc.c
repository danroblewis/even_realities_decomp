/*
 * Function: FUN_0007cefc
 * Entry:    0007cefc
 * Prototype: undefined FUN_0007cefc()
 */


undefined4 FUN_0007cefc(void)

{
  int iVar1;
  
  iVar1 = get_system_data_alt();
  if (((*(char *)(iVar1 + 4) == 'E') && (*(char *)(iVar1 + 5) == 'G')) &&
     (*(char *)(iVar1 + 6) == 'P')) {
    if (*(char *)(iVar1 + 7) == '0') {
      return 1;
    }
    if (*(char *)(iVar1 + 7) == '1') {
      if (*(byte *)(iVar1 + 8) - 0x30 < 4) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}



/*
 * Function: FUN_000861ae
 * Entry:    000861ae
 * Prototype: undefined FUN_000861ae()
 */


bool FUN_000861ae(int param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    return *(int *)(param_1 + 0xc) == 0;
  }
  return true;
}



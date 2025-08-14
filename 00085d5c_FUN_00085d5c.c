/*
 * Function: FUN_00085d5c
 * Entry:    00085d5c
 * Prototype: undefined FUN_00085d5c()
 */


bool FUN_00085d5c(int param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    return *(int *)(param_1 + 0xc) == 0;
  }
  return true;
}



/*
 * Function: FUN_00085c12
 * Entry:    00085c12
 * Prototype: undefined FUN_00085c12()
 */


bool FUN_00085c12(int param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    return *(int *)(param_1 + 0xc) == 0;
  }
  return true;
}



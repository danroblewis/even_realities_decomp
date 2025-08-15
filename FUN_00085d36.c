/*
 * Function: FUN_00085d36
 * Entry:    00085d36
 * Prototype: undefined FUN_00085d36()
 */


bool FUN_00085d36(undefined4 *param_1)

{
  if (*(char *)(param_1 + 4) == '\0') {
    return param_1[2] == 0;
  }
  if ((char *)*param_1 < (char *)param_1[3]) {
    return *(char *)*param_1 == -1;
  }
  return false;
}



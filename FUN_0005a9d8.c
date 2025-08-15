/*
 * Function: FUN_0005a9d8
 * Entry:    0005a9d8
 * Prototype: undefined FUN_0005a9d8()
 */


void FUN_0005a9d8(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  param_1 = param_1 + 4;
  if (ANCS_CLIENT_LIST_TAIL == (int *)0x0) {
    ANCS_CLIENT_LIST_HEAD = param_1;
    ANCS_CLIENT_LIST_TAIL = (int *)param_1;
    return;
  }
  *ANCS_CLIENT_LIST_TAIL = param_1;
  ANCS_CLIENT_LIST_TAIL = (int *)param_1;
  return;
}



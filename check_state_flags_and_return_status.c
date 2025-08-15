/*
 * Function: check_state_flags_and_return_status
 * Entry:    00084abe
 * Prototype: undefined check_state_flags_and_return_status()
 */


int check_state_flags_and_return_status(int *param_1)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 0x158) == 0) {
    iVar1 = 0;
    if (-1 < param_1[1] << 0x1e) {
      iVar1 = *(int *)(*param_1 + 0x120);
      if (iVar1 != 0) {
        iVar1 = 1;
      }
      return iVar1;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



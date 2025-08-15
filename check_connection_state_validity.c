/*
 * Function: check_connection_state_validity
 * Entry:    00072040
 * Prototype: undefined check_connection_state_validity()
 */


int check_connection_state_validity(uint *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    iVar1 = (*param_1 & 3) - (uint)DAT_2000b458;
    if (iVar1 != 0) {
      iVar1 = 1;
    }
    return iVar1;
  }
  return 1;
}



/*
 * Function: analyze_ble_connection_state
 * Entry:    0005caec
 * Prototype: undefined analyze_ble_connection_state()
 */


int analyze_ble_connection_state(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)check_ble_connection_state();
  if (piVar1 == (int *)0x0) {
    iVar2 = 3;
  }
  else {
    iVar2 = piVar1[1];
    if (*piVar1 == 0) {
      if (iVar2 == 0) {
        iVar2 = 3;
      }
      else {
        iVar2 = 2;
      }
    }
    else {
      if (iVar2 == 0) {
        if (DAT_2001d532 == '\0') {
          return 0;
        }
        if (piVar1[2] != 0) {
          return 1;
        }
      }
      else if ((piVar1[2] != 0) || (DAT_2001d532 == '\0')) {
        return 4;
      }
      if (iVar2 != 0) {
        iVar2 = 1;
      }
      iVar2 = iVar2 << 1;
    }
  }
  return iVar2;
}



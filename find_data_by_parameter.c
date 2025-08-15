/*
 * Function: find_data_by_parameter
 * Entry:    00033c18
 * Prototype: undefined find_data_by_parameter()
 */


undefined4 * find_data_by_parameter(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 10;
  piVar2 = &MESSAGE_CONFIRMATION_STATE;
  while ((((char)piVar2[2] == '\0' || (*(char *)((int)piVar2 + 6) != '\0')) || (*piVar2 != param_1))
        ) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x6d;
    if (iVar1 == 0x14) {
      return (undefined4 *)0x0;
    }
  }
  return &TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY + iVar1 * 0x6d;
}



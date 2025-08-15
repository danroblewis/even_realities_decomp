/*
 * Function: retry_nfc_operation_with_backoff
 * Entry:    0002563c
 * Prototype: undefined retry_nfc_operation_with_backoff()
 */


int retry_nfc_operation_with_backoff(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == 0) || (SYSTEM_CONFIGURATION_PARAMETER == 0)) {
    DEBUG_PRINT("input param valid \n");
    iVar1 = -1;
  }
  else {
    iVar2 = 10;
    do {
      iVar1 = FUN_0007ca18(SYSTEM_CONFIGURATION_PARAMETER,param_1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar1;
}



/*
 * Function: validate_and_process_ble_characteristics_with_validation_and_callback_execution
 * Entry:    00056654
 * Prototype: undefined validate_and_process_ble_characteristics_with_validation_and_callback_execution()
 */


int validate_and_process_ble_characteristics_with_validation_and_callback_execution(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","conn",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x509);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x509);
  }
  piVar1 = (int *)(param_1 + 0xd0);
  do {
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      return 0;
    }
  } while (*piVar1 != iVar2);
  *piVar1 = iVar2 + 1;
  return param_1;
}



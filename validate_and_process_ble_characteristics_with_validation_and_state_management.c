/*
 * Function: validate_and_process_ble_characteristics_with_validation_and_state_management
 * Entry:    00056080
 * Prototype: undefined validate_and_process_ble_characteristics_with_validation_and_state_management()
 */


void validate_and_process_ble_characteristics_with_validation_and_state_management
               (undefined4 param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",&DAT_000f3aa8,
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x46);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x46);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 4);
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  initialize_debug_system(&DAT_20003a60);
                    /* WARNING: Could not recover jumptable at 0x000560ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1,0xffffff92);
  return;
}



/*
 * Function: validate_and_process_ble_characteristics_with_state_management_and_parameter
 * Entry:    00056300
 * Prototype: undefined validate_and_process_ble_characteristics_with_state_management_and_parameter()
 */


void validate_and_process_ble_characteristics_with_state_management_and_parameter
               (int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int iVar3;
  
  do {
    do {
      iVar1 = thunk_FUN_000727ac(param_1 + 0x38,param_2,0,0);
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x14) == 0) {
          if (*(int *)(param_1 + 0x1c) == 0) {
            FUN_000813d6(param_1);
            FUN_0007350c(param_1 + 0x60,extraout_r1_01,0,0);
            return;
          }
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","conn->pending_no_cb == 0",
                       "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x314);
          uVar2 = 0x314;
        }
        else {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","sys_slist_is_empty(&conn->tx_pending)",
                       "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x313);
          DEBUG_PRINT2("\tPending TX packets\n");
          uVar2 = 0x313;
        }
                    /* WARNING: Subroutine does not return */
        assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",uVar2);
      }
      iVar3 = *(int *)(iVar1 + 0x18);
      *(undefined4 *)(iVar1 + 0x18) = 0;
      decrement_reference_count_and_cleanup_memory();
      param_2 = extraout_r1;
    } while (iVar3 == 0);
    validate_and_process_ble_characteristics_with_validation_and_state_management(param_1,iVar3);
    param_2 = extraout_r1_00;
  } while( true );
}



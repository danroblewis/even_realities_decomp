/*
 * Function: FUN_00063c3c
 * Entry:    00063c3c
 * Prototype: undefined FUN_00063c3c()
 */


void FUN_00063c3c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  char *local_14;
  
  if (DAT_2001d563 == '\0') {
    iVar1 = FUN_00063ba8(0);
    if (iVar1 != 0) {
      local_14 = "System power down";
      local_18 = 2;
      process_and_compress_data_with_validation(&DAT_00088268,0x10c0,&local_18,0);
      iVar1 = FUN_00063bcc();
      *(undefined1 *)(iVar1 + 8) = 0;
      FUN_00063c14(1);
      process_data_with_callback_execution_alt2(iVar1);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "check_if_power_state_allowed(POWER_MANAGER_LEVEL_SUSPENDED)",
                 "WEST_TOPDIR/nrf/subsys/caf/modules/power_manager.c",0xac);
    uVar2 = 0xac;
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","power_state == POWER_STATE_IDLE",
                 "WEST_TOPDIR/nrf/subsys/caf/modules/power_manager.c",0xab);
    uVar2 = 0xab;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/nrf/subsys/caf/modules/power_manager.c",uVar2);
}



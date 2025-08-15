/*
 * Function: process_data_with_callback_execution_alt5
 * Entry:    000526f4
 * Prototype: undefined process_data_with_callback_execution_alt5()
 */


undefined4 process_data_with_callback_execution_alt5(int param_1)

{
  if (*(int *)(param_1 + 0x2c) == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","(smpt->functions.output != ((void *)0))",
                 "WEST_TOPDIR/zephyr/subsys/mgmt/mcumgr/transport/src/smp.c",0x92);
    DEBUG_PRINT2("\tRequired transport output function pointer cannot be NULL\n");
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/subsys/mgmt/mcumgr/transport/src/smp.c",0x92);
  }
  init_data_fields();
  FUN_00072e50(param_1,0x80ab5);
  setup_error_handling(param_1 + 0x10);
  return 0;
}



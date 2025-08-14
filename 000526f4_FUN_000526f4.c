/*
 * Function: FUN_000526f4
 * Entry:    000526f4
 * Prototype: undefined FUN_000526f4()
 */


undefined4 FUN_000526f4(int param_1)

{
  if (*(int *)(param_1 + 0x2c) == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","(smpt->functions.output != ((void *)0))",
                 "WEST_TOPDIR/zephyr/subsys/mgmt/mcumgr/transport/src/smp.c",0x92);
    DEBUG_PRINT2("\tRequired transport output function pointer cannot be NULL\n");
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/mgmt/mcumgr/transport/src/smp.c",0x92);
  }
  FUN_00080b28();
  FUN_00072e50(param_1,0x80ab5);
  FUN_000864e8(param_1 + 0x10);
  return 0;
}



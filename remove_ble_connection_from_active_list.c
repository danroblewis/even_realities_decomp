/*
 * Function: remove_ble_connection_from_active_list
 * Entry:    00074274
 * Prototype: undefined remove_ble_connection_from_active_list()
 */


void remove_ble_connection_from_active_list(int param_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","thread->base.pended_on",
                 "WEST_TOPDIR/zephyr/kernel/sched.c",0x2d2);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/kernel/sched.c",0x2d2);
  }
  remove_ble_connection_from_list(*(int *)(param_1 + 8),param_1);
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfd;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/*
 * Function: FUN_000730e8
 * Entry:    000730e8
 * Prototype: undefined FUN_000730e8(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void FUN_000730e8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","queue","WEST_TOPDIR/zephyr/kernel/work.c",0x2c8);
    uVar1 = 0x2c8;
  }
  else if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","stack","WEST_TOPDIR/zephyr/kernel/work.c",0x2c9);
    uVar1 = 0x2c9;
  }
  else {
    if ((*(uint *)(param_1 + 0xf0) & 1) == 0) {
      *(undefined4 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xdc) = 0;
      *(int *)(param_1 + 0xe0) = param_1 + 0xe0;
      *(int *)(param_1 + 0xe4) = param_1 + 0xe0;
      *(int *)(param_1 + 0xe8) = param_1 + 0xe8;
      *(int *)(param_1 + 0xec) = param_1 + 0xe8;
      if (param_5 == (int *)0x0) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0x101;
        if ((char)param_5[1] == '\0') {
          uVar1 = 1;
        }
      }
      *(undefined4 *)(param_1 + 0xf0) = uVar1;
      initialize_ble_connection_with_timeout
                (param_1,param_2,param_3,&LAB_00072ab0_1,param_1,0,0,param_4,0);
      if ((param_5 != (int *)0x0) && (*param_5 != 0)) {
        FUN_00086412(param_1);
      }
      update_ble_connection_state_flags(param_1);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "!flag_test(&queue->flags, K_WORK_QUEUE_STARTED_BIT)",
                 "WEST_TOPDIR/zephyr/kernel/work.c",0x2ca);
    uVar1 = 0x2ca;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/kernel/work.c",uVar1);
}



/*
 * Function: handle_task_completion_state_transition
 * Entry:    0004bb0c
 * Prototype: undefined handle_task_completion_state_transition()
 */


int handle_task_completion_state_transition
              (int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = param_1[1] & 3;
  param_1[2] = param_2;
  if (uVar1 == 2) {
    param_1[1] = 0;
    if (*param_1 != 0) {
      FUN_000757b0();
    }
  }
  else {
    if (uVar1 == 3) {
      param_1[1] = 0;
      return *param_1;
    }
    if (uVar1 != 1) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0","WEST_TOPDIR/zephyr/lib/os/notify.c",0x45,
                   param_4);
                    /* WARNING: Subroutine does not return */
      assertion_failure("WEST_TOPDIR/zephyr/lib/os/notify.c",0x45);
    }
    param_1[1] = 0;
  }
  return 0;
}



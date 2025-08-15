/*
 * Function: FUN_00073cdc
 * Entry:    00073cdc
 * Prototype: undefined FUN_00073cdc()
 */


void FUN_00073cdc(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == (int *)&DAT_20006720) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!z_is_idle_thread_object(thread)",
                 "WEST_TOPDIR/zephyr/kernel/sched.c",0x484,param_4);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/kernel/sched.c",0x484);
  }
  iVar2 = *param_2;
  piVar1 = (int *)param_2[1];
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/*
 * Function: FUN_00073ec0
 * Entry:    00073ec0
 * Prototype: undefined FUN_00073ec0()
 */


void FUN_00073ec0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  
  FUN_00073e88();
  *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) | 2;
  if (param_2 != (int *)0x0) {
    param_1[2] = (int)param_2;
    if (param_1 == (int *)&DAT_20006720) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!z_is_idle_thread_object(thread)",
                   "WEST_TOPDIR/zephyr/kernel/sched.c",0xc1,param_4);
                    /* WARNING: Subroutine does not return */
      assertion_failure("WEST_TOPDIR/zephyr/kernel/sched.c",0xc1);
    }
    piVar1 = (int *)*param_2;
    if (param_2 != piVar1) {
      for (; piVar1 != (undefined4 *)0x0; piVar1 = (int *)*piVar1) {
        if ((*(char *)((int)param_1 + 0xe) != *(char *)((int)piVar1 + 0xe)) &&
           (*(char *)((int)param_1 + 0xe) < *(char *)((int)piVar1 + 0xe))) {
          puVar2 = (undefined4 *)piVar1[1];
          *param_1 = (int)piVar1;
          param_1[1] = (int)puVar2;
          *puVar2 = param_1;
          piVar1[1] = (int)param_1;
          return;
        }
        if (piVar1 == (undefined4 *)param_2[1]) break;
      }
    }
    puVar2 = (undefined4 *)param_2[1];
    *param_1 = (int)param_2;
    param_1[1] = (int)puVar2;
    *puVar2 = param_1;
    param_2[1] = (int)param_1;
  }
  return;
}



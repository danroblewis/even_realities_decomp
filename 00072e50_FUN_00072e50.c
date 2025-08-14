/*
 * Function: FUN_00072e50
 * Entry:    00072e50
 * Prototype: undefined FUN_00072e50()
 */


void FUN_00072e50(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","work != ((void *)0)",
                 "WEST_TOPDIR/zephyr/kernel/work.c",0x89);
    uVar1 = 0x89;
  }
  else {
    if (param_2 != 0) {
      fill_memory_buffer(param_1,0,0x10,param_4,param_4);
      *(int *)(param_1 + 4) = param_2;
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","handler != ((void *)0)",
                 "WEST_TOPDIR/zephyr/kernel/work.c",0x8a);
    uVar1 = 0x8a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/zephyr/kernel/work.c",uVar1);
}



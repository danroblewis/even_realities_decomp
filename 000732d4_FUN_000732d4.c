/*
 * Function: FUN_000732d4
 * Entry:    000732d4
 * Prototype: undefined FUN_000732d4()
 */


void FUN_000732d4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","dwork != ((void *)0)",
                 "WEST_TOPDIR/zephyr/kernel/work.c",0x340);
    uVar1 = 0x340;
  }
  else {
    if (param_2 != 0) {
      fill_memory_buffer(param_1,0,0x30,param_4,param_4);
      *(int *)(param_1 + 4) = param_2;
      *(undefined4 *)(param_1 + 0xc) = 0x100;
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","handler != ((void *)0)",
                 "WEST_TOPDIR/zephyr/kernel/work.c",0x341);
    uVar1 = 0x341;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/zephyr/kernel/work.c",uVar1);
}



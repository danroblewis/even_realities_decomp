/*
 * Function: FUN_00075574
 * Entry:    00075574
 * Prototype: undefined FUN_00075574()
 */


void FUN_00075574(int param_1,uint param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    if (param_2 < 0x40) {
      if (param_4 != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        *(uint *)(param_1 + 0xc) = (param_2 & 0x3f) << 8 | (uint)*(byte *)(param_1 + 0xc);
        *(int *)(param_1 + 0x10) = param_4;
        return;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","obj != ((void *)0)",
                   "WEST_TOPDIR/zephyr/kernel/poll.c",0x30,0);
      DEBUG_PRINT2("\tmust provide an object\n\n");
      uVar1 = 0x30;
    }
    else {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","type < ((1UL << (_POLL_NUM_TYPES)))",
                   "WEST_TOPDIR/zephyr/kernel/poll.c",0x2f,param_4);
      DEBUG_PRINT2("\tinvalid type\n\n");
      uVar1 = 0x2f;
    }
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","mode == K_POLL_MODE_NOTIFY_ONLY",
                 "WEST_TOPDIR/zephyr/kernel/poll.c",0x2d,param_4);
    DEBUG_PRINT2("\tonly NOTIFY_ONLY mode is supported\n\n");
    uVar1 = 0x2d;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/zephyr/kernel/poll.c",uVar1);
}



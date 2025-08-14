/*
 * Function: FUN_0005833c
 * Entry:    0005833c
 * Prototype: undefined FUN_0005833c()
 */


void FUN_0005833c(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_1 == (int *)0x0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","data",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0xc4);
    uVar1 = 0xc4;
  }
  else {
    piVar2 = (int *)(*param_1 + 0x148);
    if ((param_1 < &DAT_2000add4) || ((int *)0x2000ae9b < param_1)) {
      if (piVar2 == param_1) {
        fill_memory_buffer(piVar2,0,0x14);
        return;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","alloc_from_global",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0xcd);
      uVar1 = 0xcd;
    }
    else {
      if (piVar2 != param_1) {
        fill_memory_buffer(param_1,0,0x14);
        FUN_00086502(&DAT_20003a28,param_1);
        return;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!alloc_from_global",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0xcb);
      uVar1 = 0xcb;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",uVar1);
}



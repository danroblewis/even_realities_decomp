/*
 * Function: FUN_0004c278
 * Entry:    0004c278
 * Prototype: undefined FUN_0004c278()
 */


void FUN_0004c278(uint param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  
  if (0xf < param_3) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","index < 16",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_ipc.h",0x1e7,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_ipc.h",0x1e7);
  }
  uVar1 = FUN_000635a4(param_2);
  puVar2 = (uint *)(param_3 * 4 + 0x5002a180);
  if (param_4 == 0) {
    FUN_00064fd4(param_1,uVar1);
    *puVar2 = 0;
  }
  else {
    FUN_00064f78();
    *puVar2 = param_1 | 0x80000000;
  }
  return;
}



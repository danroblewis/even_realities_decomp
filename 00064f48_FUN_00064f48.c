/*
 * Function: FUN_00064f48
 * Entry:    00064f48
 * Prototype: undefined FUN_00064f48()
 */


void FUN_00064f48(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","eep",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/helpers/nrfx_gppi_dppi.c",0x44,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/helpers/nrfx_gppi_dppi.c",0x44);
  }
  *(uint *)(param_2 + 0x80) = param_1 | 0x80000000;
  return;
}



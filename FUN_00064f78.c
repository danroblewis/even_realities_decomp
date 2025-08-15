/*
 * Function: FUN_00064f78
 * Entry:    00064f78
 * Prototype: undefined FUN_00064f78()
 */


void FUN_00064f78(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","tep",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/helpers/nrfx_gppi_dppi.c",0x4a,param_4);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/modules/hal/nordic/nrfx/helpers/nrfx_gppi_dppi.c",0x4a);
  }
  *(uint *)(param_2 + 0x80) = param_1 | 0x80000000;
  return;
}



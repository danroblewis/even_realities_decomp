/*
 * Function: FUN_00064fd4
 * Entry:    00064fd4
 * Prototype: undefined FUN_00064fd4()
 */


void FUN_00064fd4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","tep",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/helpers/nrfx_gppi_dppi.c",99,param_4);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/modules/hal/nordic/nrfx/helpers/nrfx_gppi_dppi.c",99);
  }
  *(undefined4 *)(param_2 + 0x80) = 0;
  return;
}



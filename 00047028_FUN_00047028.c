/*
 * Function: FUN_00047028
 * Entry:    00047028
 * Prototype: undefined FUN_00047028()
 */


void FUN_00047028(int param_1,int param_2)

{
  if (param_1 != DAT_2000a05c) {
    jbd_spi_write_register();
    DAT_2000a05c = param_1;
  }
  if (param_2 != DAT_2000a058) {
    FUN_0007d67e(param_2);
    DAT_2000a058 = param_2;
  }
  return;
}



/*
 * Function: FUN_0007d67e
 * Entry:    0007d67e
 * Prototype: undefined FUN_0007d67e()
 */


void FUN_0007d67e(undefined4 param_1,undefined3 param_2,undefined4 param_3,undefined4 param_4)

{
  jbd_spi_write_command(0x46,&stack0xfffffff7,1,param_4,param_1,CONCAT13((char)param_1,param_2));
  return;
}



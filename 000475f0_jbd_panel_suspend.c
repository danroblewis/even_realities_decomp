/*
 * Function: jbd_panel_suspend
 * Entry:    000475f0
 * Prototype: undefined jbd_panel_suspend()
 */


undefined4 jbd_panel_suspend(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): SPI_DEEP_POWER_DOWN\n","jbd_panel_suspend",param_3,0,param_1,param_2);
    }
    else {
      handle_heartbeat();
    }
  }
  jbd_spi_write_command(0xb9,&stack0xfffffff7,1);
  return 0;
}



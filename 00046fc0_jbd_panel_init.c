/*
 * Function: jbd_panel_init
 * Entry:    00046fc0
 * Prototype: undefined __stdcall jbd_panel_init(undefined4 jbd_panel_context)
 */


undefined4 jbd_panel_init(int jbd_panel_context)

{
  undefined4 uVar1;
  
  *(int *)(jbd_panel_context + 0x374) = jbd_panel_context + -0x5c;
  panel_init();
  set_brightness_to_panel_reg(*(undefined1 *)(jbd_panel_context + 0x369));
  JBD_SPI_ID = spi_read_id();
  if (JBD_SPI_ID == 0x4010) {
    uVar1 = 0;
    *(undefined4 *)(jbd_panel_context + 0x35c) = 1;
  }
  else {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): JBD PANEL init failure!\n","jdb_panel_init");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/*
 * Function: panel_init
 * Entry:    00047538
 * Prototype: undefined panel_init()
 */


void panel_init(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  if (3 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): enter\n","panel_init");
    }
    else {
      handle_heartbeat();
    }
  }
  FUN_0007d74e();
  FUN_0007d77c(6);
  jbd_spi_write_register(1,0x10);
  FUN_0007d6ae(0);
  FUN_0007d658(0);
  FUN_0007d658(0,0x14);
  FUN_0007d658(0x18,0);
  FUN_0007d658(0x18,0x14);
  FUN_0007d658(0xc,10);
  FUN_0007d77c(0x71);
  FUN_0007d77c(0x97);
  FUN_0007d772(1);
  FUN_0007d77c(0x73);
  FUN_0007d77c(0x97);
  FUN_0007d772(1);
  FUN_0007d67e(0xf);
  jbd_spi_write_register(0x31,4);
  FUN_0007d77c(0xa3);
  FUN_0007d77c(0x97);
  FUN_0007d772(1,extraout_r1,extraout_r2,in_r3);
  return;
}



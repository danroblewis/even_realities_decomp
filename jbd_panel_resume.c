/*
 * Function: jbd_panel_resume
 * Entry:    00047638
 * Prototype: undefined jbd_panel_resume()
 */


undefined4 jbd_panel_resume(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): release from deep power down\n","jbd_panel_resume",param_3,0,param_4);
    }
    else {
      handle_heartbeat();
    }
  }
  panel_init();
  set_brightness_to_panel_reg(*(undefined1 *)(param_1 + 0x369));
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): resume completed\n","jbd_panel_resume",extraout_r2,0,param_4);
    }
    else {
      handle_heartbeat();
    }
  }
  return 0;
}



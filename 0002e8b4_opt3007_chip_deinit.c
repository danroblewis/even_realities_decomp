/*
 * Function: opt3007_chip_deinit
 * Entry:    0002e8b4
 * Prototype: undefined opt3007_chip_deinit()
 */


void opt3007_chip_deinit(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        )

{
  if (DAT_20007b6c != 0) {
    param_3 = 0;
    *(undefined4 *)(DAT_20007b6c + 0x10) = 0;
  }
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): opt3007_chip_deinit done!\n","opt3007_chip_deinit",param_3,0,param_4);
    }
    else {
      handle_heartbeat();
    }
  }
  DAT_20018da1 = 0;
  return;
}



/*
 * Function: setDelayExitValue
 * Entry:    00049000
 * Prototype: undefined setDelayExitValue()
 */


undefined4 setDelayExitValue(undefined4 param_1)

{
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): set delay exit time = %d\n","setDelayExitValue",param_1);
    }
    else {
      handle_heartbeat();
    }
  }
  DAT_2000a094 = param_1;
  return 0;
}



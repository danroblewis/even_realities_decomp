/*
 * Function: FUN_00032ef0
 * Entry:    00032ef0
 * Prototype: undefined FUN_00032ef0()
 */


void FUN_00032ef0(undefined4 param_1)

{
  if (IS_DEBUG == 0) {
    DEBUG_PRINT("set testmode is %d \n",param_1);
  }
  else {
    handle_heartbeat();
  }
  DAT_20019ef3 = (char)param_1;
  return;
}



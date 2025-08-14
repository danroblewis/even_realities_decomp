/*
 * Function: cleanDashBoardStartUpModeInfo
 * Entry:    00023c88
 * Prototype: undefined cleanDashBoardStartUpModeInfo()
 */


undefined4 cleanDashBoardStartUpModeInfo(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined1 uStack_c;
  undefined1 local_b;
  undefined2 uStack_a;
  
  uStack_a = (undefined2)((uint)param_2 >> 0x10);
  uStack_c = 0;
  local_b = 0;
  local_10 = 4;
  iVar1 = enqueue_message_to_queue(&DAT_20003994,&local_10,0,0);
  if (iVar1 == 0) {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): SEND APP Language Command...\n","cleanDashBoardStartUpModeInfo");
      }
      else {
        handle_heartbeat();
      }
    }
    z_spin_lock_valid(&DAT_200079e4);
    uVar2 = 0;
  }
  else {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): setting flash store queue fill failed\r\n\n",
                    "cleanDashBoardStartUpModeInfo");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



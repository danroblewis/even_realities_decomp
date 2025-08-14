/*
 * Function: check_bonded_addr
 * Entry:    000183e4
 * Prototype: undefined check_bonded_addr()
 */


void check_bonded_addr(undefined4 param_1)

{
  undefined1 auStack_28 [36];
  
  FUN_00018334(param_1,auStack_28);
  DAT_20007514 = DAT_20007514 + 1;
  *(undefined1 *)(DAT_20006ab8 + 0x367) = 0;
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): Got %s bind addr %d\n\n","check_bonded_addr",auStack_28);
    }
    else {
      handle_heartbeat("%s(): Got %s bind addr %d\n\n","check_bonded_addr",auStack_28);
    }
  }
  return;
}



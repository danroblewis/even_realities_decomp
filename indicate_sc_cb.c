/*
 * Function: indicate_sc_cb
 * Entry:    00018a38
 * Prototype: undefined indicate_sc_cb()
 */


void indicate_sc_cb(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    return;
  }
  DAT_2000ff70 = DAT_2000ff70 + 1;
  if (DAT_2000ff70 < 5) {
    ANCS_SECURITY_AND_CONDITIONAL_OPERATIONS = ANCS_SECURITY_AND_CONDITIONAL_OPERATIONS | 4;
    handle_conditional_operation(*param_1,1);
    return;
  }
  DAT_2000ff70 = 0;
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): disconnect because can not discover ancs.\n","indicate_sc_cb");
    }
    else {
      handle_heartbeat();
    }
  }
  bt_connection_disconnect(*param_1,0x13);
  return;
}



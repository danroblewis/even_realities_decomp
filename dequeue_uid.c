/*
 * Function: dequeue_uid
 * Entry:    00018ff8
 * Prototype: undefined dequeue_uid()
 */


int dequeue_uid(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_18 = 0;
  uStack_14 = 0;
  if (DAT_20006a48 == 0) {
    iVar1 = 1;
  }
  else {
    uStack_10 = param_3;
    iVar1 = manage_ble_connection_state_comprehensive(&DAT_20006a38,&local_18,0,0);
    if (iVar1 == 0) {
      *param_1 = local_18;
      param_1[1] = uStack_14;
    }
    else if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): D uid F\n","dequeue_uid");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  return iVar1;
}



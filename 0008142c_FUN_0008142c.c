/*
 * Function: FUN_0008142c
 * Entry:    0008142c
 * Prototype: undefined FUN_0008142c()
 */


void FUN_0008142c(int param_1)

{
  if (*(byte *)(param_1 + 0xd) - 7 < 2) {
    bt_connection_state_transition(param_1,1);
  }
  bt_connection_state_transition(param_1,0);
  return;
}



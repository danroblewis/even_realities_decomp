/*
 * Function: FUN_00082366
 * Entry:    00082366
 * Prototype: undefined FUN_00082366()
 */


void FUN_00082366(undefined4 param_1,int param_2,undefined4 param_3)

{
  handle_ble_connection_state_change
            (param_1,0xc,0xd,**(undefined2 **)(param_2 + 0xc),(*(undefined2 **)(param_2 + 0xc))[1],
             param_2,param_3);
  return;
}



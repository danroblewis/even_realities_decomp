/*
 * Function: process_component_init_messages
 * Entry:    00023acc
 * Prototype: undefined process_component_init_messages(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined4 param_8)
 */


undefined4 process_component_init_messages(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int in_stack_0000000c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar1 = 0;
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  for (; 0 < in_stack_0000000c; in_stack_0000000c = in_stack_0000000c + -1) {
    uVar1 = manage_ble_connection_state_comprehensive(&DAT_20003994,&uStack_18,0,0);
  }
  return uVar1;
}



/*
 * Function: clear_multiple_interrupt_flags
 * Entry:    0008523e
 * Prototype: undefined clear_multiple_interrupt_flags()
 */


undefined4 clear_multiple_interrupt_flags(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_1c;
  
  local_1c = 0;
  uVar1 = param_1;
  clear_interrupt_flag_and_update_status(param_1,param_2,0x14c,&local_1c,param_1);
  clear_interrupt_flag_and_update_status(param_1,param_2,0x104);
  clear_interrupt_flag_and_update_status(param_1,param_2,0x118);
  clear_interrupt_flag_and_update_status(param_1,param_2,0x110,&local_1c,uVar1);
  clear_interrupt_flag_and_update_status(param_1,param_2,0x120,&local_1c,uVar1);
  return local_1c;
}



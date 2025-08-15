/*
 * Function: setup_timer_interrupt_callback_with_parameter_validation
 * Entry:    00084cda
 * Prototype: undefined setup_timer_interrupt_callback_with_parameter_validation()
 */


undefined4
setup_timer_interrupt_callback_with_parameter_validation
          (int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x24);
  if ((int)uVar2 < (int)param_2) {
    uVar1 = 0xffffffea;
  }
  else {
    set_timer_interrupt_callback(*(undefined4 *)(param_1 + 4),param_2 & 0xff,param_3,uVar2,param_4);
    uVar1 = 0;
  }
  return uVar1;
}



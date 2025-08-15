/*
 * Function: clear_interrupt_flag_and_update_status
 * Entry:    00085214
 * Prototype: undefined clear_interrupt_flag_and_update_status()
 */


uint clear_interrupt_flag_and_update_status(int param_1,uint param_2,int param_3,uint *param_4)

{
  uint uVar1;
  
  uVar1 = 1 << (param_3 - 0x100U >> 2 & 0xff);
  param_2 = uVar1 & param_2;
  if ((param_2 != 0) && (param_2 = *(uint *)(param_1 + param_3), param_2 != 0)) {
    param_2 = 1;
    *(undefined4 *)(param_1 + param_3) = 0;
    *param_4 = *param_4 | uVar1;
  }
  return param_2;
}



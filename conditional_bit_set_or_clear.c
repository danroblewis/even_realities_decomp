/*
 * Function: conditional_bit_set_or_clear
 * Entry:    00082b98
 * Prototype: undefined conditional_bit_set_or_clear()
 */


uint conditional_bit_set_or_clear(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar1 = clear_bits_in_value(param_1 + 0xc,0xfffffffe,param_3,param_4,param_4);
    uVar1 = uVar1 & 1;
  }
  else {
    uVar2 = set_bits_in_value(param_1 + 0xc,1);
    uVar1 = ~(uint)uVar2 & (uint)((ulonglong)uVar2 >> 0x20);
  }
  return uVar1;
}



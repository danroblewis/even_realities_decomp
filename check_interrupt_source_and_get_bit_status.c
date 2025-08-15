/*
 * Function: check_interrupt_source_and_get_bit_status
 * Entry:    0008511a
 * Prototype: undefined check_interrupt_source_and_get_bit_status()
 */


uint check_interrupt_source_and_get_bit_status
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = check_interrupt_source_enabled_status(param_1,param_1,param_3,param_4,param_4);
  uVar1 = (uint)uVar2;
  if (uVar1 != 0) {
    uVar1 = get_shifted_bit_status_from_offset((int)((ulonglong)uVar2 >> 0x20));
  }
  return uVar1 & 1;
}



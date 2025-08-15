/*
 * Function: check_high_bit_set
 * Entry:    000869dc
 * Prototype: undefined check_high_bit_set()
 */


uint check_high_bit_set(void)

{
  undefined8 in_d0;
  undefined4 uStack_4;
  
  uStack_4 = (uint)((ulonglong)in_d0 >> 0x20);
  return (uStack_4 | 0x80000000) + 0x100000 >> 0x1f;
}



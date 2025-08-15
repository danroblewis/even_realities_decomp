/*
 * Function: increment_counter_with_overflow_wrapping
 * Entry:    0007e55a
 * Prototype: void increment_counter_with_overflow_wrapping(int * counter_ptr, int threshold_value)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void increment_counter_with_overflow_wrapping(int *counter_ptr, int
   threshold_value) */

void increment_counter_with_overflow_wrapping(int *counter_ptr,int threshold_value)

{
  uint uVar1;
  
  uVar1 = *(int *)threshold_value + 0x10000;
  *(uint *)threshold_value = uVar1;
  if ((uint)*(ushort *)((int)counter_ptr + 0xe) == uVar1 >> 0x10) {
    *(uint *)threshold_value = uVar1 - (uVar1 & 0xffff0000);
  }
  return;
}



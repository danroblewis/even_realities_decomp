/*
 * Function: calculate_64bit_hash_value
 * Entry:    0007e260
 * Prototype: void calculate_64bit_hash_value(ulonglong * value)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void calculate_formatting_multiplier(unsigned long long *value) */

void calculate_64bit_hash_value(ulonglong *value)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = (ulonglong)(uint)*value * 0x33333333;
  lVar2 = (ulonglong)*(uint *)((int)value + 4) * 0x33333333;
  lVar3 = lVar1 + lVar2;
  *value = lVar2 + (ulonglong)
                   ((int)((ulonglong)lVar3 >> 0x20) +
                   (uint)CARRY4((uint)lVar3,
                                (int)((ulonglong)lVar1 >> 0x20) + (uint)(0xcccccccc < (uint)lVar1) +
                                0x33333333));
  return;
}



/*
 * Function: extract_decimal_digit_from_number
 * Entry:    0007e290
 * Prototype: char extract_decimal_digit_from_number(uint64_t * value, int * digit_count)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: char extract_decimal_digit_for_formatting(uint64_t *value, int *digit_count)
    */

char extract_decimal_digit_from_number(uint64_t *value,int *digit_count)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  
  if (*digit_count < 1) {
    cVar2 = '0';
  }
  else {
    *digit_count = *digit_count + -1;
    lVar1 = (ulonglong)(uint)*value * 10;
    uVar3 = *(int *)((int)value + 4) * 10 + (int)((ulonglong)lVar1 >> 0x20);
    *(int *)value = (int)lVar1;
    *(uint *)((int)value + 4) = uVar3 & 0xfffffff;
    cVar2 = (byte)(uVar3 >> 0x1c) + 0x30;
  }
  return cVar2;
}



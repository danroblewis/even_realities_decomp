/*
 * Function: parse_decimal_string_to_integer
 * Entry:    0004bb64
 * Prototype: undefined __stdcall parse_decimal_string_to_integer(undefined4 string_ptr)
 */


int parse_decimal_string_to_integer(undefined4 *string_ptr)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = 0;
  pbVar2 = (byte *)*string_ptr;
  while( true ) {
    if (-1 < (int)((uint)(byte)(&DAT_000f8a6b)[*pbVar2] << 0x1d)) break;
    iVar1 = iVar1 * 10 + (uint)*pbVar2 + -0x30;
    pbVar2 = pbVar2 + 1;
  }
  *string_ptr = pbVar2;
  return iVar1;
}



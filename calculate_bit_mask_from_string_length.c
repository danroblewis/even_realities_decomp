/*
 * Function: calculate_bit_mask_from_string_length
 * Entry:    0007158c
 * Prototype: undefined __stdcall calculate_bit_mask_from_string_length(undefined4 string_buffer, undefined4 string_length)
 */


uint calculate_bit_mask_from_string_length(int string_buffer,uint string_length)

{
  uint uVar1;
  sbyte sVar2;
  
  do {
    uVar1 = string_length;
    if (uVar1 == 0) {
      return 0;
    }
    string_length = uVar1 - 1;
  } while (*(char *)(string_buffer + (uVar1 - 1)) == '\0');
  if (2 < uVar1) {
    if (uVar1 - 2 < 7) {
      sVar2 = (&DAT_000f7c35)[uVar1];
    }
    else {
      sVar2 = 0;
    }
    uVar1 = 1 << sVar2;
  }
  return uVar1;
}



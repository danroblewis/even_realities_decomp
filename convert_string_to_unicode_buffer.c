/*
 * Function: convert_string_to_unicode_buffer
 * Entry:    000478d8
 * Prototype: undefined convert_string_to_unicode_buffer()
 */


undefined * convert_string_to_unicode_buffer(undefined4 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  fill_memory_buffer(&DAT_2000f704,0,0x800);
  uVar2 = calculate_string_length(param_1);
  uVar1 = convert_utf8_to_unicode_with_validation(param_1,uVar2,&DAT_2000f704,0x400);
  *param_2 = uVar1;
  return &DAT_2000f704;
}



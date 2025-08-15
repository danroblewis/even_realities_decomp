/*
 * Function: compare_string_offsets
 * Entry:    00087036
 * Prototype: undefined __stdcall compare_string_offsets(undefined4 source_string, undefined4 target_string, undefined4 compare_length)
 */


int compare_string_offsets(byte *source_string,int target_string,int compare_length)

{
  byte *pbVar1;
  int comparison_result;
  byte *target_ptr;
  uint src_byte;
  
  if (compare_length == 0) {
    comparison_result = 0;
  }
  else {
    target_ptr = (byte *)(target_string + -1);
    pbVar1 = source_string;
    do {
      src_byte = (uint)*pbVar1;
      target_ptr = target_ptr + 1;
      if ((src_byte != *target_ptr) || (pbVar1 + 1 == source_string + compare_length)) break;
      pbVar1 = pbVar1 + 1;
    } while (src_byte != 0);
    comparison_result = src_byte - *target_ptr;
  }
  return comparison_result;
}



/*
 * Function: compare_byte_arrays_7_bytes
 * Entry:    000826b2
 * Prototype: undefined compare_byte_arrays_7_bytes()
 */


bool compare_byte_arrays_7_bytes
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = memcmp_byte_arrays(param_1,param_2,7,param_4,param_4);
  return iVar1 == 0;
}



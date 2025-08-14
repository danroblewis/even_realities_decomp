/*
 * Function: FUN_00080fa4
 * Entry:    00080fa4
 * Prototype: undefined FUN_00080fa4()
 */


bool FUN_00080fa4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = memcmp_byte_arrays(param_1,param_2,7,param_4,param_4);
  return iVar1 == 0;
}



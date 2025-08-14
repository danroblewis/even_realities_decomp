/*
 * Function: FUN_00055cf0
 * Entry:    00055cf0
 * Prototype: undefined FUN_00055cf0()
 */


bool FUN_00055cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = memcmp_byte_arrays(param_1,&DAT_000f3a16,0x40,param_4,param_4);
  return iVar1 == 0;
}



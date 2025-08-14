/*
 * Function: FUN_00055698
 * Entry:    00055698
 * Prototype: undefined FUN_00055698()
 */


int FUN_00055698(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = memcmp_byte_arrays(param_1 + 9,&DAT_000f2b3a,7,param_4,param_4);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}



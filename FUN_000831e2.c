/*
 * Function: FUN_000831e2
 * Entry:    000831e2
 * Prototype: undefined FUN_000831e2()
 */


void FUN_000831e2(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = memcmp_byte_arrays(param_1 + 0x90,*param_2,7);
  if (iVar1 == 0) {
    FUN_00083062(param_1 + 0x90,param_2[1]);
    return;
  }
  return;
}



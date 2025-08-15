/*
 * Function: FUN_0007eae4
 * Entry:    0007eae4
 * Prototype: undefined FUN_0007eae4()
 */


int FUN_0007eae4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = compare_byte_arrays(param_2,param_1 + 0x40,param_3,param_4,param_4);
  if (iVar1 != 0) {
    iVar1 = compare_byte_arrays(param_2,param_1 + 0xb0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = 1;
  }
  return iVar1 * 0x70 + param_1;
}



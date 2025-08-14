/*
 * Function: FUN_00085fa2
 * Entry:    00085fa2
 * Prototype: undefined FUN_00085fa2()
 */


int FUN_00085fa2(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00085f06(param_1,5);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x10) != '\0') {
      return iVar1;
    }
    if (*(uint *)(param_1 + 8) < 0x7fffffff) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) << 1;
      return iVar1;
    }
    FUN_00085dc4(param_1,5);
  }
  return 0;
}



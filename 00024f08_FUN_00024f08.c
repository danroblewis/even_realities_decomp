/*
 * Function: FUN_00024f08
 * Entry:    00024f08
 * Prototype: undefined FUN_00024f08()
 */


int FUN_00024f08(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000256dc(DAT_20007a44,0,param_1,4,param_4);
  if (*(char *)(param_1 + 2) == '\0') {
    if (iVar1 != 0) {
      return -1;
    }
    iVar1 = FUN_000256dc(DAT_20007a44,4,param_1 + 4,4,param_4);
  }
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return -iVar1;
}



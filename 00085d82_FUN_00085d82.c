/*
 * Function: FUN_00085d82
 * Entry:    00085d82
 * Prototype: undefined FUN_00085d82()
 */


int FUN_00085d82(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *extraout_r2;
  
  iVar1 = FUN_00085d5c(*(undefined4 *)(param_1 + 0x14),param_2,param_1,param_4,param_4);
  if (iVar1 != 0) {
    if (*extraout_r2 < extraout_r2[3]) {
      return iVar1;
    }
    FUN_00085d70(extraout_r2,8);
  }
  return 0;
}



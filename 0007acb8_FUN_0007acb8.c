/*
 * Function: FUN_0007acb8
 * Entry:    0007acb8
 * Prototype: undefined FUN_0007acb8()
 */


int FUN_0007acb8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_0007a3d4(param_1,0xf0,param_3,param_4,param_4);
    *param_1 = param_2;
    param_1[0x17] = 0x40;
    iVar1 = FUN_0007b194(param_1);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
    return iVar1;
  }
  return 1;
}



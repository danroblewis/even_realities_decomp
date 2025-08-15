/*
 * Function: FUN_00085fd2
 * Entry:    00085fd2
 * Prototype: undefined FUN_00085fd2()
 */


undefined4
FUN_00085fd2(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00085da2(param_1,7);
  if (iVar1 != 0) {
    if ((*(byte *)*param_1 & 0x1f) < 0x19) {
      uVar2 = FUN_00085e1a(param_1,param_2,1,param_4);
      return uVar2;
    }
    FUN_00085d70(param_1,10);
  }
  return 0;
}



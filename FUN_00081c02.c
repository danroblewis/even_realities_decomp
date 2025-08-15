/*
 * Function: FUN_00081c02
 * Entry:    00081c02
 * Prototype: undefined FUN_00081c02()
 */


undefined4 FUN_00081c02(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00083718(param_2 + 0xc);
  FUN_00082e62(*(undefined4 *)*param_1,uVar1,*(undefined4 *)(param_2 + 0xc),
               *(undefined2 *)(param_2 + 0x10),param_4);
  return 0;
}



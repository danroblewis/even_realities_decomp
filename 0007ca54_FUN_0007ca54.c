/*
 * Function: FUN_0007ca54
 * Entry:    0007ca54
 * Prototype: undefined FUN_0007ca54()
 */


undefined4 FUN_0007ca54(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((code *)**(undefined4 **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0007ca66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 8))(param_1,param_2,0,param_3);
    return uVar1;
  }
  return 0xffffffa8;
}



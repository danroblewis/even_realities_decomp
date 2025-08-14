/*
 * Function: FUN_000809b0
 * Entry:    000809b0
 * Prototype: undefined FUN_000809b0()
 */


uint FUN_000809b0(undefined4 param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 extraout_r3;
  
  uVar1 = FUN_00080a46();
  uVar2 = thunk_FUN_00064134(param_1);
  if (3 < uVar1) {
    FUN_00051c38();
    uVar2 = extraout_r3;
  }
  uVar3 = uVar1 ^ 1;
  switch(uVar2) {
  case 1:
    uVar3 = uVar1;
  case 3:
    uVar4 = 0;
    break;
  case 2:
    uVar4 = 1;
    break;
  case 4:
    uVar4 = 2;
    break;
  default:
    return 0xffffffff;
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = uVar4;
  }
  return uVar3;
}



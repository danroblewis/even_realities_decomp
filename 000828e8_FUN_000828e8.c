/*
 * Function: FUN_000828e8
 * Entry:    000828e8
 * Prototype: undefined FUN_000828e8()
 */


void FUN_000828e8(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  if (param_4 != (undefined4 *)0x0) {
    uVar1 = param_4[6];
    if (param_3 == (undefined4 *)0x0) {
      *(undefined4 *)(param_2 + 8) = uVar1;
      if (param_4 + 6 == *(undefined4 **)(param_2 + 0xc)) {
        *(undefined4 *)(param_2 + 0xc) = uVar1;
      }
    }
    else {
      *param_3 = uVar1;
      if (param_4 + 6 == *(undefined4 **)(param_2 + 0xc)) {
        *(undefined4 **)(param_2 + 0xc) = param_3;
      }
    }
    param_4[6] = 0;
    (*(code *)*param_4)(param_1,param_4,0);
  }
  if (*(int *)(param_2 + 8) != 0) {
    return;
  }
  FUN_00059e78(param_2);
  return;
}



/*
 * Function: FUN_000811a4
 * Entry:    000811a4
 * Prototype: undefined FUN_000811a4()
 */


void FUN_000811a4(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 & 0xff);
  if (param_3 == 0) {
    FUN_00081180(param_1,~uVar1);
    return;
  }
  *param_1 = *param_1 | uVar1;
  return;
}



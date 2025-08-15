/*
 * Function: FUN_000831be
 * Entry:    000831be
 * Prototype: undefined FUN_000831be()
 */


bool FUN_000831be(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 1 << (param_2 & 0xff);
  uVar2 = *param_1;
  *param_1 = uVar2 & ~uVar1;
  return (uVar1 & uVar2) != 0;
}



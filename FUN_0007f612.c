/*
 * Function: FUN_0007f612
 * Entry:    0007f612
 * Prototype: undefined FUN_0007f612()
 */


bool FUN_0007f612(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 1 << (param_2 & 0xff);
  uVar2 = *param_1;
  *param_1 = uVar2 | uVar1;
  return (uVar1 & uVar2) != 0;
}



/*
 * Function: FUN_00086554
 * Entry:    00086554
 * Prototype: undefined FUN_00086554()
 */


uint FUN_00086554(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = uVar1 & ~(1 << (param_2 & 0xff));
  return uVar1 >> (param_2 & 0xff) & 1;
}



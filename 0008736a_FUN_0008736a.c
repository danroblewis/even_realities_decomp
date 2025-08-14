/*
 * Function: FUN_0008736a
 * Entry:    0008736a
 * Prototype: undefined FUN_0008736a()
 */


void FUN_0008736a(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  
  do {
    puVar1 = param_1 + 1;
    *param_1 = *param_1 | *puVar1 << ((8 - param_3) * -4 + 0x20U & 0xff);
    param_1 = param_1 + 1;
    *param_1 = *puVar1 >> ((8 - param_3) * 4 & 0xffU);
  } while (param_1 < param_2);
  return;
}



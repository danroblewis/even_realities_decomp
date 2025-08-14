/*
 * Function: FUN_0002360c
 * Entry:    0002360c
 * Prototype: undefined FUN_0002360c()
 */


uint FUN_0002360c(uint param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  
  param_1 = ~param_1;
  pbVar1 = param_2 + param_3;
  for (; param_2 != pbVar1; param_2 = param_2 + 1) {
    param_1 = (&DAT_200075a0)[(*param_2 ^ param_1) & 0xff] ^ param_1 >> 8;
  }
  return ~param_1;
}



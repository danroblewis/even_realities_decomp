/*
 * Function: FUN_00052c98
 * Entry:    00052c98
 * Prototype: undefined FUN_00052c98()
 */


undefined1 * FUN_00052c98(byte *param_1,uint param_2)

{
  char *pcVar1;
  byte *pbVar2;
  
  if (0x3f < param_2) {
    param_2 = 0x40;
  }
  pbVar2 = param_1 + param_2;
  pcVar1 = &DAT_2001d470;
  for (; param_1 != pbVar2; param_1 = param_1 + 1) {
    *pcVar1 = "0123456789abcdef"[*param_1 >> 4];
    pcVar1[1] = "0123456789abcdef"[*param_1 & 0xf];
    pcVar1 = pcVar1 + 2;
  }
  (&DAT_2001d470)[param_2 * 2] = 0;
  return &DAT_2001d470;
}



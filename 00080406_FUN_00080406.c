/*
 * Function: FUN_00080406
 * Entry:    00080406
 * Prototype: undefined FUN_00080406()
 */


void FUN_00080406(int param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar1 = param_2 + param_3;
  pbVar2 = (byte *)(param_1 + -1);
  for (; pbVar1 != param_2; param_2 = param_2 + 1) {
    pbVar2[1] = *param_2 ^ 0x36;
    pbVar2[0x41] = *param_2 ^ 0x5c;
    pbVar2 = pbVar2 + 1;
  }
  iVar3 = 0x40 - param_3;
  if (0x40 < param_3) {
    iVar3 = 0;
  }
  fill_memory_buffer(param_3 + 0x40 + param_1,0x5c,iVar3);
  fill_memory_buffer(param_1 + param_3,0x36,iVar3);
  return;
}



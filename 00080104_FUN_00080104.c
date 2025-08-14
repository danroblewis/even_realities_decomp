/*
 * Function: FUN_00080104
 * Entry:    00080104
 * Prototype: undefined FUN_00080104()
 */


void FUN_00080104(int param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  
  pbVar2 = param_2 + 0x10;
  pbVar1 = (byte *)(param_1 + 0xf);
  if ((char)*param_2 < '\0') {
    bVar3 = 0x87;
  }
  else {
    bVar3 = 0;
  }
  while( true ) {
    pbVar2 = pbVar2 + -1;
    *pbVar1 = bVar3 ^ *pbVar2 << 1;
    if (pbVar2 == param_2) break;
    bVar3 = *pbVar2 >> 7;
    pbVar1 = pbVar1 + -1;
  }
  return;
}



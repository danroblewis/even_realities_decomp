/*
 * Function: FUN_0004bb64
 * Entry:    0004bb64
 * Prototype: undefined FUN_0004bb64()
 */


int FUN_0004bb64(undefined4 *param_1)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = 0;
  pbVar2 = (byte *)*param_1;
  while( true ) {
    if (-1 < (int)((uint)(byte)(&DAT_000f8a6b)[*pbVar2] << 0x1d)) break;
    iVar1 = iVar1 * 10 + (uint)*pbVar2 + -0x30;
    pbVar2 = pbVar2 + 1;
  }
  *param_1 = pbVar2;
  return iVar1;
}



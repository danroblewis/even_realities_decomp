/*
 * Function: FUN_00043e58
 * Entry:    00043e58
 * Prototype: undefined FUN_00043e58()
 */


int FUN_00043e58(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  while (iVar3 < 0x14c) {
    iVar1 = iVar3 * 2;
    iVar3 = iVar3 + 1;
    if ((ushort)(&DAT_0009890c)[iVar1] == param_1) {
      iVar2 = iVar2 + 1;
    }
    if ((ushort)(&DAT_0009890c)[iVar1] == param_2) {
      iVar2 = iVar2 + 1;
    }
  }
  if (1 < iVar2) {
    iVar2 = 2;
  }
  return iVar2;
}



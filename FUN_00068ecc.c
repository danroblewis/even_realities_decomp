/*
 * Function: FUN_00068ecc
 * Entry:    00068ecc
 * Prototype: undefined FUN_00068ecc()
 */


int FUN_00068ecc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0x1d4c) {
    if (param_2 == 8000) {
      iVar2 = 0x5f;
      iVar1 = 0x3c;
    }
    else {
      if (param_2 != 16000) goto LAB_00068ef2;
      iVar2 = 0xbe;
      iVar1 = 0x78;
    }
LAB_00068f5e:
    iVar1 = (iVar1 * 0x17) / 0x1e;
  }
  else {
    if (param_1 != 10000) {
      return 0;
    }
    if (param_2 == 8000) {
      iVar2 = 0x7d;
      iVar1 = 0x50;
    }
    else if (param_2 == 16000) {
      iVar2 = 0xfa;
      iVar1 = 0xa0;
    }
    else {
LAB_00068ef2:
      if (((param_2 != 24000) && (param_2 != 32000)) && (param_2 != 48000)) {
        return 0;
      }
      iVar1 = (param_2 * param_1) / 1000000;
      iVar2 = iVar1 + (param_2 / 800 + iVar1) / 2;
      if (param_1 == 0x1d4c) goto LAB_00068f5e;
    }
    iVar1 = iVar1 * 5;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    iVar1 = iVar1 >> 3;
  }
  return (iVar1 + iVar2 + 300) * 4;
}



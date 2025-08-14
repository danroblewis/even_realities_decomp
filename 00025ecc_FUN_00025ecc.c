/*
 * Function: FUN_00025ecc
 * Entry:    00025ecc
 * Prototype: undefined FUN_00025ecc()
 */


int FUN_00025ecc(char *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x88);
  bVar1 = param_1[0x10];
  cVar2 = param_1[0x11];
  if ((((*(int *)(param_1 + 0x80) != DAT_20007a9c) || ((uint)DAT_20018c6b != (uint)bVar1)) ||
      (DAT_20003024 != cVar2)) ||
     ((DAT_200023f8 != iVar3 || (DAT_20007a98 != *(int *)(param_1 + 0x84))))) {
    if (cVar2 == '\0') {
      iVar5 = -0x15e;
    }
    else if (cVar2 == '\x02') {
      iVar5 = 700;
    }
    else {
      iVar5 = 0;
    }
    if (*param_1 == '\x02') {
      iVar4 = 0x76c;
    }
    else {
      iVar4 = 4000;
    }
    DAT_200023f4 = (int)(iVar4 * (uint)bVar1) / iVar3;
    DAT_200023f8 = iVar3;
    DAT_20003024 = cVar2;
    DAT_20007a98 = *(int *)(param_1 + 0x84);
    DAT_20007a9c = *(int *)(param_1 + 0x80);
    DAT_20018c6b = bVar1;
    get_work_mode();
    iVar3 = *(int *)(param_1 + 0x84);
    iVar5 = (short)(ushort)(byte)param_1[0x10] * 0x32 + iVar5;
    if ((iVar3 == 0) && (iVar3 = *(int *)(param_1 + 0x80), iVar3 == 0)) {
      *(int *)(param_1 + 8) = iVar5 + -0x189c;
      *(int *)(param_1 + 0xc) = iVar5 + -0x2454;
    }
    else {
      *(int *)(param_1 + 8) = iVar3 - iVar5;
      *(int *)(param_1 + 0xc) = (iVar3 + -0x1194) - iVar5;
    }
  }
  return DAT_200023f4;
}



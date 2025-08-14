/*
 * Function: FUN_0004bb90
 * Entry:    0004bb90
 * Prototype: undefined FUN_0004bb90(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


char * FUN_0004bb90(undefined4 param_1,undefined4 param_2,byte *param_3,char *param_4,char *param_5)

{
  uint extraout_r2;
  byte bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  char *pcVar8;
  
  uVar7 = CONCAT44(param_2,param_1);
  uVar2 = (uint)param_3[3];
  bVar1 = (&DAT_000f8a6b)[uVar2];
  pcVar8 = param_4;
  if (uVar2 == 0x6f) {
    uVar2 = 8;
  }
  else {
    if (uVar2 < 0x70) {
      bVar6 = uVar2 == 0x58;
    }
    else {
      bVar6 = (uVar2 & 0xf7) == 0x70;
    }
    if (bVar6) {
      uVar2 = 0x10;
      uVar7 = CONCAT44(param_2,param_1);
    }
    else {
      uVar2 = 10;
      uVar7 = CONCAT44(param_2,param_1);
    }
  }
  do {
    uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
    uVar5 = (uint)uVar7;
    uVar7 = FUN_0000e244(uVar5,uVar4,uVar2,0,pcVar8);
    cVar3 = (char)extraout_r2;
    if (extraout_r2 < 10) {
      cVar3 = cVar3 + '0';
    }
    else if ((bVar1 & 3) == 1) {
      cVar3 = cVar3 + '7';
    }
    else {
      cVar3 = cVar3 + 'W';
    }
    param_5 = param_5 + -1;
    *param_5 = cVar3;
  } while ((uVar4 != 0 || uVar4 < (uVar2 <= uVar5)) && (param_4 < param_5));
  if ((int)((uint)*param_3 << 0x1a) < 0) {
    if (uVar2 == 8) {
      bVar1 = param_3[2] | 8;
    }
    else {
      if (uVar2 != 0x10) {
        return param_5;
      }
      bVar1 = param_3[2] | 0x10;
    }
    param_3[2] = bVar1;
  }
  return param_5;
}



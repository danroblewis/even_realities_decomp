/*
 * Function: FUN_0000fcf0
 * Entry:    0000fcf0
 * Prototype: undefined FUN_0000fcf0()
 */


/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0000fdd2 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0000fcf0(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 extraout_r2;
  undefined1 uVar5;
  int iVar6;
  undefined4 extraout_s1;
  
  FUN_000254a0(param_3,&DAT_20018c66);
  DAT_20018c66 = 1;
  switch(*(undefined1 *)(param_3 + 5)) {
  case 1:
    FUN_0007c3c2(param_3);
    *(undefined1 *)(param_3 + 5) = 2;
    DAT_20018c66 = extraout_r2;
    *(undefined1 *)(param_3 + 2) = 0;
    return;
  case 2:
    get_schedule_timing(0x667,0);
LAB_0000fd36:
    uVar5 = 3;
    break;
  case 3:
    if (*(char *)(param_3 + 2) == '\0') {
      if (*(char *)(param_3 + 7) == '\0') {
        if ((DAT_20003023 == '\0') && (*(char *)(param_3 + 0xb) == *(char *)(param_3 + 0xc))) {
          bVar1 = *(byte *)(param_3 + 0x13);
          iVar6 = (uint)bVar1 - (uint)DAT_2000f6e4;
          if (iVar6 < 0) {
            iVar6 = (uint)DAT_2000f6e4 - (uint)bVar1;
          }
          if (0x14 < iVar6) {
            DAT_2000f6e4 = (ushort)bVar1;
            goto LAB_0000fd68;
          }
        }
        else {
LAB_0000fd68:
          *(char *)(param_3 + 0xb) = *(char *)(param_3 + 0xc);
          FUN_000250f8(param_3 + 7,param_3 + 0x11,param_3 + 0x1c);
          DAT_20003023 = '\0';
        }
        *(undefined1 *)(param_3 + 5) = 4;
      }
      if (*(char *)(param_3 + 1) != '\0') {
        *(undefined1 *)(param_3 + 1) = 0;
      }
      DAT_20007a04 = 150.0;
switchD_0000fd08_caseD_e:
      FUN_00024d40();
      return;
    }
LAB_0000fd3e:
    uVar5 = 0xc;
    break;
  case 4:
    uVar4 = FUN_00024d2c();
    if ((float)uVar4 <= DAT_20007a04) {
      return;
    }
    if (*(char *)(param_3 + 7) == '\0') {
      uVar5 = 9;
    }
    else {
      uVar5 = 5;
    }
    break;
  case 5:
  case 6:
  case 7:
  case 9:
    if (*(char *)(param_3 + 7) == '\0') {
      uVar3 = FUN_0000d824(*(byte *)(param_3 + 0xb) + 3);
      uVar3 = FUN_00075acc(0,param_2,uVar3);
      FUN_0000d588(uVar3,extraout_s1,0,0x40490000);
      DAT_20007a04 = (float)FUN_0000dee8();
    }
    FUN_00024d40();
    uVar5 = 10;
    break;
  default:
    goto switchD_0000fd08_caseD_8;
  case 10:
    if ((*(char *)(param_3 + 1) == '\0') && (uVar4 = FUN_00024d2c(), (float)uVar4 < DAT_20007a04)) {
      return;
    }
    uVar5 = 0xb;
    break;
  case 0xb:
    cVar2 = *(char *)(param_3 + 7);
    if (*(char *)(param_3 + 1) == '\0') {
      if (cVar2 != '\0') {
        DAT_20018c66 = 1;
        return;
      }
      goto LAB_0000fd36;
    }
    if (*(char *)(param_3 + 2) != '\0') {
      if (cVar2 != '\0') {
        DAT_20018c66 = 1;
        return;
      }
      goto LAB_0000fd3e;
    }
    if (cVar2 != '\0') {
      DAT_20018c66 = 1;
      return;
    }
    uVar5 = 2;
    break;
  case 0xc:
    *(undefined1 *)(param_3 + 7) = 2;
    *(undefined1 *)(param_3 + 0xb) = 0x13;
    FUN_000250f8(param_3 + 7,param_3 + 0x11,param_3 + 0x1c);
    DAT_20003023 = '\x01';
    *(undefined1 *)(param_3 + 1) = 0;
    FUN_00024d40();
    uVar5 = 0xe;
    break;
  case 0xe:
    goto switchD_0000fd08_caseD_e;
  }
  *(undefined1 *)(param_3 + 5) = uVar5;
switchD_0000fd08_caseD_8:
  return;
}



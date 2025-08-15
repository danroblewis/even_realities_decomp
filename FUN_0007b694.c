/*
 * Function: FUN_0007b694
 * Entry:    0007b694
 * Prototype: undefined FUN_0007b694()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0007b694(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_2 == (undefined4 *)0x0) || (param_3 == (undefined4 *)0x0)) {
    return 0xf1000b;
  }
  if (param_1 == (undefined4 *)0x0) {
    return 0xf10000;
  }
  if (param_1[0x17] == 0) {
    if (0xfff < param_4) {
      return 0xf10005;
    }
  }
  else if ((param_1[0x17] == 1) && (0xffff < param_4)) {
    return 0xf10005;
  }
  if (*(char *)(param_1 + 0xf) == '\x04') {
    iVar3 = FUN_0007bbcc(param_1[0x10],param_1[0xc]);
    if (iVar3 == 0) {
      _DAT_50845400 = *DAT_20002f3c;
      _DAT_50845404 = DAT_20002f3c[1];
      _DAT_50845408 = DAT_20002f3c[2];
      _DAT_5084540c = DAT_20002f3c[3];
      _DAT_50845410 = DAT_20002f3c[4];
      _DAT_50845414 = DAT_20002f3c[5];
      _DAT_50845418 = DAT_20002f3c[6];
      _DAT_5084541c = DAT_20002f3c[7];
      uVar5 = param_1[0xc];
      if (uVar5 < 3) {
        iVar4 = uVar5 * 8 + 0x10;
        iVar3 = FUN_0007be24(param_1[0x10],uVar5,param_1[0x11],param_1[0x12],param_1[0x13],
                             param_1[0x14],param_1 + 4,iVar4);
        if (iVar3 != 0) {
          _DAT_50845400 = *DAT_20002f3c;
          _DAT_50845404 = DAT_20002f3c[1];
          _DAT_50845408 = DAT_20002f3c[2];
          _DAT_5084540c = DAT_20002f3c[3];
          _DAT_50845410 = DAT_20002f3c[4];
          _DAT_50845414 = DAT_20002f3c[5];
          _DAT_50845418 = DAT_20002f3c[6];
          _DAT_5084541c = DAT_20002f3c[7];
          FUN_0007a3d4(param_1 + 4,iVar4);
        }
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  iVar3 = FUN_0007a404(&DAT_20002f50,0xffffffff);
  if (iVar3 != 0) {
    FUN_000795b4("Fail to acquire mutex\n");
  }
  iVar3 = FUN_0007a464(0);
  if (iVar3 != 0) {
    FUN_000795b4("Fail to increase PM counter\n");
  }
  _DAT_50845810 = 1;
  _DAT_50845820 = 1;
  iVar3 = FUN_0007b468(param_1);
  if ((iVar3 != 0) || (iVar3 = FUN_0007b530(param_1), iVar3 != 0)) goto joined_r0x0007b70e;
  if ((uint)param_1[0xd] < 8) {
    uVar5 = 1 << (param_1[0xd] & 0xff);
    if ((uVar5 & 0x8a) == 0) {
      if ((uVar5 & 0x44) == 0) {
        if ((uVar5 & 1) == 0) goto LAB_0007b8f6;
      }
      else {
        _DAT_50845460 = *param_1;
        _DAT_50845464 = param_1[1];
        _DAT_50845468 = param_1[2];
        _DAT_5084546c = param_1[3];
      }
    }
    else {
      _DAT_50845440 = *param_1;
      _DAT_50845444 = param_1[1];
      _DAT_50845448 = param_1[2];
      _DAT_5084544c = param_1[3];
    }
    _DAT_50845b0c = (*(byte *)(param_2 + 1) & 1) << 1 | *(byte *)(param_3 + 1) & 1;
    uVar2 = _DAT_50845d28;
    uVar5 = _DAT_50845d2c;
    if (((param_1[0xd] & 0xfffffffb) != 3) &&
       (uVar2 = *param_3, uVar5 = param_4, param_1[0x18] != 1)) {
      uVar2 = _DAT_50845d28;
      uVar5 = _DAT_50845d2c;
      _DAT_50845d30 = *param_3;
      _DAT_50845d34 = param_4;
    }
    _DAT_50845d2c = uVar5;
    _DAT_50845d28 = uVar2;
    uVar2 = *param_2;
    uVar5 = param_4;
    if (param_1[0x17] != 1) {
      uVar2 = _DAT_50845c28;
      uVar5 = _DAT_50845c2c;
      _DAT_50845c30 = *param_2;
      _DAT_50845c34 = param_4;
    }
    _DAT_50845c2c = uVar5;
    _DAT_50845c28 = uVar2;
    iVar3 = FUN_0007a2b8(0x800);
    if (iVar3 == 0) {
      if ((uint)param_1[0xd] < 8) {
        uVar5 = 1 << (param_1[0xd] & 0xff);
        if ((uVar5 & 0x8a) == 0) {
          if ((uVar5 & 0x44) != 0) {
            *param_1 = _DAT_50845460;
            param_1[1] = _DAT_50845464;
            param_1[2] = _DAT_50845468;
            param_1[3] = _DAT_5084546c;
          }
        }
        else {
          *param_1 = _DAT_50845440;
          param_1[1] = _DAT_50845444;
          param_1[2] = _DAT_50845448;
          param_1[3] = _DAT_5084544c;
        }
      }
      param_1[0x16] = 1;
    }
  }
  else {
LAB_0007b8f6:
    iVar3 = 0xf10001;
  }
joined_r0x0007b70e:
  if (bVar1) {
    *(undefined1 *)(param_1 + 0xf) = 4;
    FUN_0007a3d4(param_1 + 4,0x20);
  }
  _DAT_50845810 = 0;
  _DAT_50845820 = 0;
  iVar4 = FUN_0007a464(1);
  if (iVar4 != 0) {
    FUN_000795b4("Fail to decrease PM counter\n");
  }
  iVar4 = FUN_0007a414(&DAT_20002f50);
  if (iVar4 == 0) {
    return iVar3;
  }
  FUN_000795b4("Fail to release mutex\n");
  return iVar3;
}



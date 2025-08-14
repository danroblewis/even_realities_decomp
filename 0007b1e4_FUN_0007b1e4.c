/*
 * Function: FUN_0007b1e4
 * Entry:    0007b1e4
 * Prototype: undefined FUN_0007b1e4()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0007b1e4(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0xf30003;
  }
  if (param_1 == (int *)0x0) {
    return 0xf30000;
  }
  if (*param_1 == 0) {
    uVar5 = 1;
    uVar4 = 1;
    iVar1 = FUN_0007a404(&DAT_20002f50,0xffffffff);
    if (iVar1 == 0) goto LAB_0007b21e;
LAB_0007b380:
    FUN_000795b4("Fail to acquire mutex\n");
    iVar1 = FUN_0007a464(0);
    uVar5 = uVar4;
  }
  else {
    if (1 < *param_1 - 1U) {
      return 0xf30001;
    }
    uVar4 = 2;
    iVar1 = FUN_0007a404(&DAT_20002f50,0xffffffff);
    uVar5 = uVar4;
    if (iVar1 != 0) goto LAB_0007b380;
LAB_0007b21e:
    iVar1 = FUN_0007a464(0);
  }
  if (iVar1 != 0) {
    FUN_000795b4("Fail to increase PM counter\n");
  }
  do {
    iVar2 = _DAT_50845910;
  } while (_DAT_50845910 != 0);
  FUN_0007a290(0xffffffff);
  FUN_0007a2ac(_DAT_50845a04 & 0xfffff7ff);
  iVar3 = 7;
  _DAT_50845818 = 1;
  _DAT_50845820 = 1;
  _DAT_50845900 = 7;
  _DAT_508457c4 = 1;
  _DAT_508456a4 = iVar2;
  _DAT_508457cc = param_1[0x12];
  _DAT_508457d0 = param_1[0x13];
  if (*param_1 == 0) {
LAB_0007b28e:
    _DAT_50845650 = param_1[6];
    _DAT_5084564c = param_1[5];
    _DAT_50845648 = param_1[4];
    _DAT_50845644 = param_1[3];
    iVar3 = param_1[2];
    _DAT_50845640 = iVar3;
  }
  else if (*param_1 - 1U < 2) {
    _DAT_5084565c = param_1[9];
    _DAT_50845658 = param_1[8];
    _DAT_50845654 = param_1[7];
    goto LAB_0007b28e;
  }
  _DAT_508457c0 = uVar5;
  if (param_3 != 0) {
    if (param_1[1] == 1) {
      iVar3 = 0x50845000;
    }
    if (param_1[1] == 1) {
      *(undefined4 *)(iVar3 + 0x684) = 1;
    }
    _DAT_50845c28 = *param_2;
    _DAT_50845b0c = (*(byte *)(param_2 + 1) & 1) << 1;
    _DAT_50845c2c = param_3;
    iVar1 = FUN_0007a2b8(0x800);
  }
  if (*param_1 != 0) {
    if (1 < *param_1 - 1U) goto LAB_0007b324;
    param_1[9] = _DAT_5084565c;
    param_1[8] = _DAT_50845658;
    param_1[7] = _DAT_50845654;
  }
  param_1[6] = _DAT_50845650;
  param_1[5] = _DAT_5084564c;
  param_1[4] = _DAT_50845648;
  param_1[3] = _DAT_50845644;
  param_1[2] = _DAT_50845640;
LAB_0007b324:
  param_1[0x12] = _DAT_508457cc;
  param_1[0x13] = _DAT_508457d0;
  _DAT_508457c4 = 1;
  _DAT_50845684 = 0;
  _DAT_508457c8 = 0;
  _DAT_50845818 = 0;
  _DAT_50845820 = 0;
  if (iVar1 != 0) {
    FUN_0007a3d4(param_1 + 2,0x10);
  }
  iVar2 = FUN_0007a464(1);
  if (iVar2 != 0) {
    FUN_000795b4("Fail to decrease PM counter\n");
  }
  iVar2 = FUN_0007a414(&DAT_20002f50);
  if (iVar2 == 0) {
    return iVar1;
  }
  FUN_000795b4("Fail to release mutex\n");
  return iVar1;
}



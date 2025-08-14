/*
 * Function: FUN_0004f1d0
 * Entry:    0004f1d0
 * Prototype: undefined FUN_0004f1d0()
 */


void FUN_0004f1d0(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined4 local_20;
  char *local_1c;
  
  uVar6 = 0;
switchD_0004f1f8_caseD_8:
  uVar9 = uVar6;
  if (param_3 <= uVar9) {
    return;
  }
  uVar7 = *(undefined1 *)(param_1 + 0x908);
  uVar6 = param_3;
  switch(uVar7) {
  case 0:
    cVar4 = *(char *)(param_2 + uVar9);
    uVar9 = uVar9 + 1;
    *(char *)(param_1 + 0x909) = cVar4;
    if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 0x918) = 0;
      *(int *)(param_1 + 0x8fc) = param_1 + 0x868;
      *(undefined4 *)(param_1 + 0x900) = 8;
      uVar7 = 1;
    }
    else if (cVar4 == '\x01') {
      *(undefined1 *)(param_1 + 0x918) = 1;
      *(undefined4 *)(param_1 + 0x900) = 1;
      *(undefined4 *)(param_1 + 0x914) = 0;
      *(int *)(param_1 + 0x8fc) = param_1 + 0x8e8;
      uVar7 = 2;
    }
    else {
      uVar7 = 8;
    }
    break;
  case 1:
    puVar1 = (undefined4 *)(param_2 + uVar9);
    uVar9 = uVar9 + 4;
    *(undefined4 *)(param_1 + 0x928) = *puVar1;
    uVar7 = 3;
    break;
  case 2:
    uVar6 = *(uint *)(param_1 + 0x914);
    if (0xff < uVar6) {
      local_1c = "App ID cannot be stored in response buffer.";
      local_20 = 2;
      FUN_0004d944(&DAT_000880e8,0x1080,&local_20,0);
      goto LAB_0004f296;
    }
    cVar4 = *(char *)(param_2 + uVar9);
    uVar9 = uVar9 + 1;
    *(char *)(param_1 + uVar6 + 0x92c) = cVar4;
    if (cVar4 == '\0') {
      uVar7 = 3;
    }
    else {
      *(uint *)(param_1 + 0x914) = uVar6 + 1;
    }
    break;
  case 3:
    uVar6 = (uint)*(byte *)(param_2 + uVar9);
    uVar9 = uVar9 + 1;
    *(uint *)(param_1 + 0x920) = uVar6;
    if (uVar6 < *(uint *)(param_1 + 0x900)) {
      *(undefined4 *)(param_1 + 0x924) =
           *(undefined4 *)(*(int *)(param_1 + 0x8fc) + uVar6 * 0x10 + 0xc);
      if (*(int *)(param_1 + 0x904) != 0) {
        if (*(char *)(*(int *)(param_1 + 0x8fc) + uVar6 * 0x10) != '\0') {
          *(int *)(param_1 + 0x904) = *(int *)(param_1 + 0x904) + -1;
        }
        uVar7 = 4;
        break;
      }
    }
LAB_0004f296:
    uVar7 = 8;
    break;
  case 4:
    pbVar2 = (byte *)(param_2 + uVar9);
    uVar9 = uVar9 + 1;
    *(ushort *)(param_1 + 0x91c) = (ushort)*pbVar2;
    uVar7 = 5;
    break;
  case 5:
    uVar5 = *(ushort *)(param_1 + 0x91c) | (ushort)*(byte *)(param_2 + uVar9) << 8;
    *(undefined2 *)(param_1 + 0x910) = 0;
    uVar9 = uVar9 + 1;
    *(ushort *)(param_1 + 0x91c) = uVar5;
    iVar8 = *(int *)(param_1 + 0x8fc) + *(int *)(param_1 + 0x920) * 0x10;
    if (uVar5 == 0) {
      if (*(char *)(*(int *)(param_1 + 0x8fc) + *(int *)(param_1 + 0x920) * 0x10) != '\0') {
        FUN_0007f7c8(param_1,param_1 + 0x918);
      }
      iVar8 = *(int *)(param_1 + 0x904);
      bVar10 = iVar8 != 0;
      if (bVar10) {
        iVar8 = 3;
      }
      uVar7 = (undefined1)iVar8;
      if (!bVar10) {
        uVar7 = 8;
      }
    }
    else if (*(short *)(iVar8 + 8) == 0) {
      uVar7 = 7;
    }
    else {
      iVar8 = *(int *)(iVar8 + 0xc);
      bVar10 = iVar8 != 0;
      if (bVar10) {
        iVar8 = 6;
      }
      uVar7 = (undefined1)iVar8;
      if (!bVar10) {
        uVar7 = 7;
      }
    }
    break;
  case 6:
    uVar6 = (uint)*(ushort *)(param_1 + 0x910);
    if ((uVar6 < *(ushort *)(*(int *)(param_1 + 0x8fc) + *(int *)(param_1 + 0x920) * 0x10 + 8)) &&
       (uVar6 < *(ushort *)(param_1 + 0x91c))) {
      *(ushort *)(param_1 + 0x910) = *(ushort *)(param_1 + 0x910) + 1;
      puVar3 = (undefined1 *)(param_2 + uVar9);
      uVar9 = uVar9 + 1;
      *(undefined1 *)(*(int *)(param_1 + 0x924) + uVar6) = *puVar3;
    }
    uVar6 = (uint)*(ushort *)(param_1 + 0x910);
    if ((*(ushort *)(param_1 + 0x91c) == uVar6) ||
       (uVar6 == *(ushort *)(*(int *)(param_1 + 0x8fc) + *(int *)(param_1 + 0x920) * 0x10 + 8) - 1))
    {
      if (*(char *)(*(int *)(param_1 + 0x8fc) + *(int *)(param_1 + 0x920) * 0x10) != '\0') {
        *(undefined1 *)(*(int *)(param_1 + 0x924) + uVar6) = 0;
      }
      if (*(ushort *)(param_1 + 0x91c) <= *(ushort *)(param_1 + 0x910)) goto LAB_0004f3be;
      uVar7 = 7;
    }
    break;
  case 7:
    uVar5 = *(ushort *)(param_1 + 0x910);
    bVar10 = uVar5 < *(ushort *)(param_1 + 0x91c);
    if (bVar10) {
      uVar5 = uVar5 + 1;
    }
    if (bVar10) {
      *(ushort *)(param_1 + 0x910) = uVar5;
    }
    if (bVar10) {
      uVar9 = uVar9 + 1;
    }
    if (*(ushort *)(param_1 + 0x910) == *(ushort *)(param_1 + 0x91c)) {
LAB_0004f3be:
      if (*(char *)(*(int *)(param_1 + 0x8fc) + *(int *)(param_1 + 0x920) * 0x10) != '\0') {
        FUN_0007f7c8(param_1,param_1 + 0x918);
      }
      iVar8 = *(int *)(param_1 + 0x904);
      bVar10 = iVar8 != 0;
      if (bVar10) {
        iVar8 = 3;
      }
      uVar7 = (undefined1)iVar8;
      if (!bVar10) {
        uVar7 = 8;
      }
    }
    break;
  case 8:
    goto switchD_0004f1f8_caseD_8;
  default:
    uVar7 = 8;
  }
  *(undefined1 *)(param_1 + 0x908) = uVar7;
  uVar6 = uVar9;
  goto switchD_0004f1f8_caseD_8;
}



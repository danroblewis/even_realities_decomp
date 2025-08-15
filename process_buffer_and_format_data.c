/*
 * Function: process_buffer_and_format_data
 * Entry:    000685f4
 * Prototype: undefined process_buffer_and_format_data()
 */


void process_buffer_and_format_data(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  iVar3 = *(int *)(param_1 + 0x20);
  pbVar1 = *(byte **)(param_1 + 0x30);
  iVar7 = *(int *)(param_1 + 0x34);
  uVar9 = iVar7 - (int)pbVar1;
  iVar10 = uVar9 * 8 - iVar3;
  if (iVar10 < 1) {
    uVar8 = uVar9 & ~((int)uVar9 >> 0x1f);
  }
  else {
    iVar11 = iVar10;
    iVar12 = iVar10 + -0x20;
    while( true ) {
      if (0x1f < iVar11) {
        iVar11 = 0x20;
      }
      uVar8 = uVar9 & ~((int)uVar9 >> 0x1f);
      iVar6 = iVar11 + iVar3;
      if (0x20 < iVar11 + iVar3) {
        iVar6 = 0x20 - iVar3;
        if (iVar11 <= 0x20 - iVar3) {
          iVar6 = iVar11;
        }
        if (iVar6 == 0) {
          uVar2 = iVar3 >> 3;
        }
        else {
          uVar2 = 4;
        }
        if ((int)uVar8 <= (int)uVar2) {
          uVar2 = uVar8;
        }
        if (uVar2 != 0) {
          *(int *)(param_1 + 0x34) = iVar7 + -1;
          *(char *)(iVar7 + -1) = (char)*(undefined4 *)(param_1 + 0x1c);
          while( true ) {
            uVar9 = *(uint *)(param_1 + 0x1c);
            uVar2 = uVar2 - 1;
            *(uint *)(param_1 + 0x1c) = uVar9 >> 8;
            if (uVar2 == 0) break;
            iVar3 = *(int *)(param_1 + 0x34);
            *(int *)(param_1 + 0x34) = iVar3 + -1;
            *(char *)(iVar3 + -1) = (char)(uVar9 >> 8);
          }
          pbVar1 = *(byte **)(param_1 + 0x30);
          iVar7 = *(int *)(param_1 + 0x34);
          uVar9 = iVar7 - (int)pbVar1;
          uVar8 = uVar9 & ~((int)uVar9 >> 0x1f);
        }
        *(undefined4 *)(param_1 + 0x1c) = 0;
        iVar6 = iVar11 - iVar6;
      }
      iVar3 = iVar6;
      if (iVar12 == (iVar10 + -0x20) - (iVar10 - 1U & 0xffffffe0)) break;
      iVar11 = iVar12;
      iVar12 = iVar12 + -0x20;
    }
  }
  uVar9 = iVar3 >> 3;
  if ((int)uVar8 <= iVar3 >> 3) {
    uVar9 = uVar8;
  }
  iVar3 = iVar3 + uVar9 * -8;
  *(int *)(param_1 + 0x20) = iVar3;
  if (uVar9 != 0) {
    *(int *)(param_1 + 0x34) = iVar7 + -1;
    *(char *)(iVar7 + -1) = (char)*(undefined4 *)(param_1 + 0x1c);
    while( true ) {
      uVar8 = *(uint *)(param_1 + 0x1c);
      uVar9 = uVar9 - 1;
      *(uint *)(param_1 + 0x1c) = uVar8 >> 8;
      if (uVar9 == 0) break;
      iVar3 = *(int *)(param_1 + 0x34);
      *(int *)(param_1 + 0x34) = iVar3 + -1;
      *(char *)(iVar3 + -1) = (char)(uVar8 >> 8);
    }
    iVar3 = *(int *)(param_1 + 0x20);
    pbVar1 = *(byte **)(param_1 + 0x30);
  }
  iVar7 = iVar3;
  if (7 < iVar3) {
    iVar7 = 0;
  }
  uVar9 = *(uint *)(param_1 + 8);
  if (7 < iVar3) {
    *(int *)(param_1 + 0x20) = iVar7;
  }
  if (uVar9 == 0) {
    uVar8 = 0xffffffff;
    uVar5 = 0x19;
    iVar3 = 0;
    uVar2 = 0;
  }
  else {
    iVar3 = 0;
    uVar8 = uVar9;
    do {
      uVar8 = uVar8 >> 1;
      iVar3 = iVar3 + 1;
    } while (uVar8 != 0);
    uVar5 = 0x19 - iVar3;
    uVar2 = 0xffffff >> (uVar5 & 0xff);
    uVar8 = ~uVar2;
  }
  uVar13 = *(uint *)(param_1 + 4);
  uVar8 = uVar13 + uVar2 & uVar8 & 0xffffff;
  if ((uVar13 + uVar2 >> 0x18 != 0) == (uVar9 + uVar13 >> 0x18 != 0)) {
    if ((uVar9 + uVar13 & 0xffffff) <= uVar8 + uVar2) {
      uVar5 = 0x1a - iVar3;
      uVar8 = uVar13 + (uVar2 >> 1) & ~(uVar2 >> 1) & 0xffffff;
    }
    uVar9 = *(uint *)(param_1 + 0x10);
    if (uVar8 < uVar13) {
      uVar9 = uVar9 | 1;
    }
    *(uint *)(param_1 + 0x10) = uVar9;
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  pbVar4 = *(byte **)(param_1 + 0x2c);
  *(uint *)(param_1 + 4) = uVar8;
  uVar9 = uVar5;
  if (8 < (int)uVar5) {
    do {
      if ((uVar8 < 0xff0000) || (*(int *)(param_1 + 0x10) != 0)) {
        if ((-1 < (int)uVar2) && (pbVar1 < pbVar4)) {
          *(byte **)(param_1 + 0x30) = pbVar1 + 1;
          *pbVar1 = (char)*(undefined4 *)(param_1 + 0x10) + (char)uVar2;
          pbVar4 = *(byte **)(param_1 + 0x2c);
          pbVar1 = *(byte **)(param_1 + 0x30);
        }
        iVar3 = *(int *)(param_1 + 0x14);
        while (0 < iVar3) {
          if (pbVar4 <= pbVar1) {
            *(int *)(param_1 + 0x14) = iVar3 + -1;
            if (0 < iVar3 + -1) {
              *(undefined4 *)(param_1 + 0x14) = 0;
            }
            break;
          }
          *(byte **)(param_1 + 0x30) = pbVar1 + 1;
          *pbVar1 = -(*(int *)(param_1 + 0x10) == 0);
          pbVar1 = *(byte **)(param_1 + 0x30);
          iVar3 = *(int *)(param_1 + 0x14) + -1;
          pbVar4 = *(byte **)(param_1 + 0x2c);
          *(int *)(param_1 + 0x14) = iVar3;
        }
        uVar8 = *(uint *)(param_1 + 4);
        *(undefined4 *)(param_1 + 0x10) = 0;
        uVar2 = uVar8 >> 0x10;
        *(uint *)(param_1 + 0xc) = uVar2;
      }
      else {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
      uVar9 = uVar9 - 8;
      uVar8 = (uVar8 & 0xffff) << 8;
      *(uint *)(param_1 + 4) = uVar8;
    } while (8 < (int)uVar9);
    uVar5 = (uVar5 - 8) - (uVar5 - 9 & 0xfffffff8);
  }
  if ((uVar8 < 0xff0000) || (*(int *)(param_1 + 0x10) != 0)) {
    if ((-1 < (int)uVar2) && (pbVar1 < pbVar4)) {
      *(byte **)(param_1 + 0x30) = pbVar1 + 1;
      *pbVar1 = (char)*(undefined4 *)(param_1 + 0x10) + (char)uVar2;
      pbVar4 = *(byte **)(param_1 + 0x2c);
      pbVar1 = *(byte **)(param_1 + 0x30);
    }
    iVar3 = *(int *)(param_1 + 0x14);
    while (0 < iVar3) {
      if (pbVar4 <= pbVar1) {
        iVar7 = iVar3 + -1;
        *(int *)(param_1 + 0x14) = iVar7;
        iVar3 = iVar7;
        if (0 < iVar7) {
          iVar3 = 0;
        }
        if (0 < iVar7) {
          *(int *)(param_1 + 0x14) = iVar3;
        }
        break;
      }
      *(byte **)(param_1 + 0x30) = pbVar1 + 1;
      *pbVar1 = -(*(int *)(param_1 + 0x10) == 0);
      pbVar1 = *(byte **)(param_1 + 0x30);
      iVar3 = *(int *)(param_1 + 0x14) + -1;
      pbVar4 = *(byte **)(param_1 + 0x2c);
      *(int *)(param_1 + 0x14) = iVar3;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    uVar8 = *(uint *)(param_1 + 4);
    uVar2 = uVar8 >> 0x10;
    *(uint *)(param_1 + 0xc) = uVar2;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar3;
  }
  *(uint *)(param_1 + 4) = (uVar8 & 0xffff) << 8;
  if (iVar3 == 0) {
    iVar3 = (int)uVar2 >> (8 - uVar5 & 0xff);
  }
  else {
    if (pbVar1 < pbVar4) {
      *(byte **)(param_1 + 0x30) = pbVar1 + 1;
      *pbVar1 = (byte)uVar2;
      iVar3 = *(int *)(param_1 + 0x14);
      pbVar4 = *(byte **)(param_1 + 0x2c);
      pbVar1 = *(byte **)(param_1 + 0x30);
    }
    if (iVar3 < 2) {
LAB_0006889e:
      if (uVar5 == 8) {
        iVar3 = 0xff;
      }
      else {
        iVar3 = 0;
      }
    }
    else {
      do {
        if (pbVar4 <= pbVar1) {
          iVar7 = iVar3 + -1;
          if (iVar3 != 2) {
            iVar7 = 1;
          }
          *(int *)(param_1 + 0x14) = iVar7;
          goto LAB_0006889e;
        }
        *(byte **)(param_1 + 0x30) = pbVar1 + 1;
        *pbVar1 = 0xff;
        pbVar1 = *(byte **)(param_1 + 0x30);
        iVar3 = *(int *)(param_1 + 0x14) + -1;
        pbVar4 = *(byte **)(param_1 + 0x2c);
        *(int *)(param_1 + 0x14) = iVar3;
      } while (1 < iVar3);
      if (uVar5 == 8) {
        iVar3 = 0xff;
      }
      else {
        iVar3 = 0;
      }
    }
  }
  if (pbVar1 < pbVar4) {
    *pbVar1 = *pbVar1 & (byte)(0xff >> (uVar5 & 0xff));
    **(byte **)(param_1 + 0x30) = (byte)(iVar3 << (8 - uVar5 & 0xff)) | **(byte **)(param_1 + 0x30);
  }
  return;
}



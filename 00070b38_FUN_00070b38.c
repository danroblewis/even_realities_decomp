/*
 * Function: FUN_00070b38
 * Entry:    00070b38
 * Prototype: undefined FUN_00070b38()
 */


void FUN_00070b38(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  if (0 < *param_2) {
    iVar7 = 0;
    piVar8 = param_2 + 1;
    piVar6 = param_2;
    do {
      piVar8 = piVar8 + 1;
      iVar5 = *piVar8;
      uVar1 = *(uint *)(param_1 + 0x20);
      iVar3 = uVar1 + 1;
      if (iVar3 < 0x21) {
        *(int *)(param_1 + 0x20) = iVar3;
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | (uint)(0 < iVar5) << (uVar1 & 0xff);
      }
      else {
        FUN_00068908(param_1,(uint)(0 < iVar5),1,iVar3,param_4);
      }
      if (0 < iVar5) {
        iVar3 = (uint)*(byte *)(param_2 + 1) * 0x44 + 0x900a0;
        uVar1 = *(uint *)(param_1 + 8) >> 10;
        uVar4 = uVar1 * *(ushort *)(iVar3 + (iVar5 + -1) * 4) + *(int *)(param_1 + 4);
        *(uint *)(param_1 + 4) = uVar4;
        uVar1 = *(ushort *)(iVar3 + (iVar5 + -1) * 4 + 2) * uVar1;
        uVar2 = *(uint *)(param_1 + 0x10) | uVar4 >> 0x18;
        uVar4 = uVar4 & 0xffffff;
        *(uint *)(param_1 + 8) = uVar1;
        *(uint *)(param_1 + 0x10) = uVar2;
        *(uint *)(param_1 + 4) = uVar4;
        if (uVar1 < 0x10000) {
          FUN_0006897c(param_1);
          uVar4 = *(uint *)(param_1 + 4);
          uVar1 = *(uint *)(param_1 + 8);
          uVar2 = *(uint *)(param_1 + 0x10);
        }
        iVar3 = piVar6[4];
        uVar4 = (uVar1 >> 10) * (uint)*(ushort *)(&LAB_0008fe60 + (iVar3 + 8) * 4) + uVar4;
        *(uint *)(param_1 + 4) = uVar4;
        uVar1 = (uVar1 >> 10) * (uint)*(ushort *)(&LAB_0008fe62 + (iVar3 + 8) * 4);
        *(uint *)(param_1 + 4) = uVar4 & 0xffffff;
        *(uint *)(param_1 + 8) = uVar1;
        *(uint *)(param_1 + 0x10) = uVar2 | uVar4 >> 0x18;
        if (uVar1 < 0x10000) {
          FUN_0006897c(param_1);
        }
        if (iVar5 != 1) {
          iVar3 = piVar6[5];
          uVar1 = *(uint *)(param_1 + 8) >> 10;
          uVar2 = uVar1 * *(ushort *)(&LAB_0008fea4 + (iVar3 + 8) * 4) + *(int *)(param_1 + 4);
          *(uint *)(param_1 + 4) = uVar2;
          uVar1 = uVar1 * *(ushort *)(&LAB_0008fea6 + (iVar3 + 8) * 4);
          *(uint *)(param_1 + 8) = uVar1;
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2 >> 0x18;
          *(uint *)(param_1 + 4) = uVar2 & 0xffffff;
          if (uVar1 < 0x10000) {
            FUN_0006897c(param_1);
          }
          if (iVar5 != 2) {
            iVar3 = piVar6[6];
            uVar1 = *(uint *)(param_1 + 8) >> 10;
            uVar2 = uVar1 * *(ushort *)(&LAB_0008fee8 + (iVar3 + 8) * 4) + *(int *)(param_1 + 4);
            *(uint *)(param_1 + 4) = uVar2;
            uVar1 = uVar1 * *(ushort *)(&LAB_0008feea + (iVar3 + 8) * 4);
            *(uint *)(param_1 + 8) = uVar1;
            *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2 >> 0x18;
            *(uint *)(param_1 + 4) = uVar2 & 0xffffff;
            if (uVar1 < 0x10000) {
              FUN_0006897c(param_1);
            }
            if (iVar5 != 3) {
              iVar3 = piVar6[7];
              uVar1 = *(uint *)(param_1 + 8) >> 10;
              uVar2 = uVar1 * *(ushort *)(&LAB_0008ff2c + (iVar3 + 8) * 4) + *(int *)(param_1 + 4);
              *(uint *)(param_1 + 4) = uVar2;
              uVar1 = uVar1 * *(ushort *)(&LAB_0008ff2e + (iVar3 + 8) * 4);
              *(uint *)(param_1 + 8) = uVar1;
              *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2 >> 0x18;
              *(uint *)(param_1 + 4) = uVar2 & 0xffffff;
              if (uVar1 < 0x10000) {
                FUN_0006897c(param_1);
              }
              if (iVar5 != 4) {
                iVar3 = piVar6[8];
                uVar1 = *(uint *)(param_1 + 8) >> 10;
                uVar2 = uVar1 * *(ushort *)(&LAB_0008ff70 + (iVar3 + 8) * 4) + *(int *)(param_1 + 4)
                ;
                *(uint *)(param_1 + 4) = uVar2;
                uVar1 = uVar1 * *(ushort *)(&LAB_0008ff72 + (iVar3 + 8) * 4);
                *(uint *)(param_1 + 8) = uVar1;
                *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2 >> 0x18;
                *(uint *)(param_1 + 4) = uVar2 & 0xffffff;
                if (uVar1 < 0x10000) {
                  FUN_0006897c(param_1);
                }
                if (iVar5 != 5) {
                  iVar3 = piVar6[9];
                  uVar1 = *(uint *)(param_1 + 8) >> 10;
                  uVar2 = uVar1 * *(ushort *)(&LAB_0008ffb4 + (iVar3 + 8) * 4) +
                          *(int *)(param_1 + 4);
                  *(uint *)(param_1 + 4) = uVar2;
                  uVar1 = uVar1 * *(ushort *)(&LAB_0008ffb6 + (iVar3 + 8) * 4);
                  *(uint *)(param_1 + 8) = uVar1;
                  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2 >> 0x18;
                  *(uint *)(param_1 + 4) = uVar2 & 0xffffff;
                  if (uVar1 < 0x10000) {
                    FUN_0006897c(param_1);
                  }
                  if (iVar5 != 6) {
                    iVar3 = piVar6[10];
                    uVar1 = *(uint *)(param_1 + 8) >> 10;
                    uVar2 = uVar1 * *(ushort *)(&LAB_0008fff8 + (iVar3 + 8) * 4) +
                            *(int *)(param_1 + 4);
                    *(uint *)(param_1 + 4) = uVar2;
                    uVar1 = uVar1 * *(ushort *)(&LAB_0008fffa + (iVar3 + 8) * 4);
                    *(uint *)(param_1 + 8) = uVar1;
                    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2 >> 0x18;
                    *(uint *)(param_1 + 4) = uVar2 & 0xffffff;
                    if (uVar1 < 0x10000) {
                      FUN_0006897c(param_1);
                    }
                    if (iVar5 != 7) {
                      iVar3 = piVar6[0xb];
                      uVar1 = *(uint *)(param_1 + 8) >> 10;
                      uVar2 = uVar1 * *(ushort *)(&LAB_0009003c + (iVar3 + 8) * 4) +
                              *(int *)(param_1 + 4);
                      *(uint *)(param_1 + 4) = uVar2;
                      uVar1 = uVar1 * *(ushort *)(&LAB_0009003e + (iVar3 + 8) * 4);
                      *(uint *)(param_1 + 8) = uVar1;
                      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2 >> 0x18;
                      *(uint *)(param_1 + 4) = uVar2 & 0xffffff;
                      if (uVar1 < 0x10000) {
                        FUN_0006897c(param_1);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 8;
    } while (iVar7 < *param_2);
  }
  return;
}



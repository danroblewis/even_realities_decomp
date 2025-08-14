/*
 * Function: FUN_0007e3ce
 * Entry:    0007e3ce
 * Prototype: undefined FUN_0007e3ce()
 */


undefined4 FUN_0007e3ce(int *param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint extraout_r3;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  
  iVar8 = param_1[3];
  iVar7 = param_1[8];
  iVar9 = iVar7 + iVar8 * 4;
  if ((*(byte *)(iVar7 + iVar8 * 4) & 3) == 2) {
    uVar6 = *(uint *)(iVar7 + iVar8 * 4);
    *param_3 = 0;
    *param_4 = 0;
    if (uVar6 >> 2 == 0) goto LAB_0007e3f8;
    FUN_0007e378();
    param_1[2] = param_1[3];
LAB_0007e41c:
    uVar2 = 1;
  }
  else {
    *param_3 = 0;
    *param_4 = 0;
LAB_0007e3f8:
    if (param_1[4] << 0x1e < 0) {
      piVar10 = param_1;
      iVar4 = param_2;
      piVar11 = param_3;
      iVar3 = (*(code *)param_1[7])(iVar9);
      bVar1 = *(byte *)(iVar7 + iVar8 * 4);
      iVar5 = (uint)bVar1 << 0x1f;
      if (iVar5 < 0) {
        uVar6 = bVar1 & 2;
        if ((bVar1 & 2) == 0) {
          FUN_0007e378(param_1,iVar3,iVar5,uVar6,piVar10,uVar6,piVar11);
          param_1[2] = param_1[3];
          if (param_2 != 0) {
            *(uint *)(param_1[8] + *param_1 * 4) = uVar6;
          }
          *param_4 = iVar3 + param_2;
          iVar4 = FUN_0007e35c(param_1,*param_1);
          *param_1 = iVar4;
          param_1[4] = param_1[4] | 8;
          *(byte *)(iVar7 + iVar8 * 4) = *(byte *)(iVar7 + iVar8 * 4) & 0xfe;
          *param_3 = iVar9;
        }
        else {
          if (param_2 != 0) {
            FUN_0007e390(param_1,param_2);
            uVar6 = extraout_r3;
          }
          iVar7 = FUN_0007e35c(param_1,param_1[1],iVar3,uVar6,piVar10,iVar4);
          param_1[1] = iVar7;
          if (param_1[3] == param_1[2]) {
            iVar7 = FUN_0007e35c(param_1,param_1[3],iVar3,param_1[2],piVar10,iVar4);
            param_1[2] = iVar7;
          }
          *param_1 = param_1[2];
          param_1[3] = param_1[2];
          param_1[4] = param_1[4] | 8;
        }
        goto LAB_0007e41c;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



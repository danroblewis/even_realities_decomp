/*
 * Function: FUN_00086208
 * Entry:    00086208
 * Prototype: undefined FUN_00086208()
 */


int FUN_00086208(int *param_1,undefined4 param_2,byte *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  iVar2 = FUN_0007158c(param_3,param_4);
  iVar4 = *param_1;
  uVar1 = param_1[3];
  if (iVar2 == 1) {
    uVar3 = (uint)*param_3;
    if (uVar3 < 0x18) {
      uVar5 = iVar4 + 1;
      if (uVar1 < uVar5) goto LAB_000715fe;
      iVar2 = 0;
      goto LAB_000715e0;
    }
    uVar5 = iVar4 + 2;
    if (uVar1 < uVar5) {
LAB_000715fe:
      FUN_000861c2(param_1,8,uVar3,uVar5,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
      return 0;
    }
LAB_000715d4:
    uVar1 = 0;
  }
  else {
    uVar3 = iVar2 + 1;
    uVar5 = iVar4 + uVar3;
    if (uVar1 < uVar5) goto LAB_000715fe;
    if (iVar2 == 0) {
      uVar3 = (uint)*param_3;
      goto LAB_000715e0;
    }
    if (6 < iVar2 - 2U) goto LAB_000715d4;
    uVar1 = (uint)(byte)(&DAT_000f7c35)[iVar2];
  }
  uVar3 = uVar1 + 0x18 & 0xff;
LAB_000715e0:
  iVar4 = FUN_000861d4(param_1,param_2,uVar3);
  if (iVar4 == 0) {
    return 0;
  }
  pbVar7 = param_3 + iVar2;
  while (pbVar7 != param_3) {
    pbVar6 = (byte *)*param_1;
    *param_1 = (int)(pbVar6 + 1);
    pbVar7 = pbVar7 + -1;
    *pbVar6 = *pbVar7;
  }
  param_1[2] = param_1[2] + 1;
  return iVar4;
}



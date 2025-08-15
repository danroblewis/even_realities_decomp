/*
 * Function: FUN_00063654
 * Entry:    00063654
 * Prototype: undefined FUN_00063654(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined1 param_7)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00063654(uint param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
            int param_6,char param_7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int extraout_r1;
  int extraout_r1_00;
  int iVar4;
  undefined *extraout_r2;
  undefined *puVar5;
  undefined *extraout_r2_00;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  
  uVar1 = FUN_0006349c();
  uVar10 = FUN_00063610();
  uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
  uVar2 = (uint)uVar10;
  iVar6 = (uVar3 - param_4) - (uint)(param_3 > uVar2);
  puVar5 = extraout_r2;
  if (param_4 < uVar3 || uVar3 - param_4 < (uint)(param_3 <= uVar2)) {
    if (param_7 == '\0') {
      DAT_2000b2d0 = DAT_2000b2d0 | 1 << (param_1 & 0xff);
      goto LAB_0006374a;
    }
  }
  else {
    iVar6 = 0x800001;
    if (param_4 - uVar3 == (uint)(param_3 < uVar2) &&
        (uint)(0x800000 < param_3 - uVar2) <= (param_4 - uVar3) - (uint)(param_3 < uVar2)) {
      if (param_4 != *(uint *)(&DAT_2000669c + param_1 * 0x10) ||
          param_3 != *(uint *)(&DAT_20006698 + param_1 * 0x10)) {
        iVar8 = 0x10000 << (param_1 & 0xff);
        _DAT_50015348 = iVar8;
        FUN_00084c5e(param_1);
        iVar9 = 3;
        uVar2 = param_3 & 0xffffff;
        iVar4 = extraout_r1;
        while( true ) {
          *(uint *)(iVar4 + (param_1 + 0x150) * 4) = uVar2 & 0xffffff;
          *(int *)(iVar4 + 0x344) = iVar8;
          iVar6 = *(int *)(iVar4 + 0x504);
          puVar5 = (undefined *)0x7ffffd;
          if (((uVar2 - iVar6) - 3 & 0xffffff) < 0x7ffffe) break;
          if (*(int *)(((param_1 + 0x50) * 4 & 0xffff) + 0x50015000) != 0) {
            iVar6 = *(int *)(iVar4 + 0x504);
            if ((iVar6 - (param_3 & 0xffffff) & 0xffffff) < 0x800001) break;
            FUN_00084c5e(param_1);
            iVar4 = extraout_r1_00;
            puVar5 = extraout_r2_00;
          }
          if (param_7 != '\0') goto LAB_00063722;
          uVar2 = iVar9 + iVar6;
          iVar9 = iVar9 + 1;
        }
      }
LAB_0006374a:
      *(undefined4 *)(&DAT_20006690 + param_1 * 0x10) = param_5;
      iVar6 = param_1 * 0x10;
      puVar5 = &DAT_20006690 + iVar6;
      uVar7 = 0;
      *(uint *)(&DAT_20006698 + iVar6) = param_3;
      *(uint *)(&DAT_2000669c + iVar6) = param_4;
      *(int *)(&DAT_20006694 + iVar6) = param_6;
      goto LAB_00063726;
    }
  }
LAB_00063722:
  uVar7 = 0xffffffea;
  param_6 = iVar6;
LAB_00063726:
  FUN_00063524(param_1,uVar1,puVar5,param_6);
  return uVar7;
}



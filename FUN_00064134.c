/*
 * Function: FUN_00064134
 * Entry:    00064134
 * Prototype: undefined FUN_00064134()
 */


uint FUN_00064134(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int extraout_r2;
  int extraout_r2_00;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_20 = param_1;
  uStack_1c = param_2;
  local_18 = param_3;
  uStack_14 = param_4;
  iVar1 = FUN_0007ef04(param_1,&local_20);
  if (iVar1 == 1) {
    iVar1 = FUN_00084e72(*(undefined4 *)(&DAT_0008bb90 + param_1 * 8),&local_20);
  }
  if (iVar1 == 0) {
    iVar1 = FUN_00084e72(*(undefined4 *)(&DAT_0008bb94 + param_1 * 8),&local_18);
    if (iVar1 == 1) {
      local_18 = CONCAT31(local_18._1_3_,3);
      local_18 = CONCAT13(3,(undefined3)local_18);
    }
    else if (iVar1 != 0) goto LAB_000641c0;
    iVar1 = 0;
    uVar5 = local_20 & 0xff;
    uVar6 = local_18 & 0xff;
    puVar3 = &DAT_000f694f;
    do {
      iVar2 = FUN_00084d70(*puVar3,uVar5);
      iVar4 = extraout_r2;
      if (((((iVar2 != 0) &&
            (iVar2 = FUN_00084d70(*(undefined1 *)(extraout_r2 + 1),uVar6), iVar4 = extraout_r2_00,
            iVar2 != 0)) &&
           ((*(char *)(extraout_r2_00 + 2) == '\x04' ||
            (local_20._3_1_ == *(char *)(extraout_r2_00 + 2))))) &&
          ((*(char *)(extraout_r2_00 + 3) == '\x04' ||
           (local_18._3_1_ == *(char *)(extraout_r2_00 + 3))))) &&
         ((*(char *)(extraout_r2_00 + 4) == '\x04' ||
          (local_20._2_1_ == *(char *)(extraout_r2_00 + 4))))) {
        if (*(byte *)(extraout_r2_00 + 5) - 2 < 3) {
          return (uint)*(byte *)(extraout_r2_00 + 5);
        }
        goto LAB_000641c0;
      }
      iVar1 = iVar1 + 1;
      puVar3 = (undefined1 *)(iVar4 + 6);
    } while (iVar1 != 3);
    uVar5 = 1;
  }
  else {
LAB_000641c0:
    uVar5 = 0xff;
  }
  return uVar5;
}



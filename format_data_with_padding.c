/*
 * Function: format_data_with_padding
 * Entry:    00086e1c
 * Prototype: undefined format_data_with_padding(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


undefined4
format_data_with_padding
          (undefined4 param_1,uint *param_2,uint *param_3,undefined4 param_4,code *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar4 = param_2[4];
  if ((int)param_2[4] < (int)param_2[2]) {
    uVar4 = param_2[2];
  }
  *param_3 = uVar4;
  if (*(char *)((int)param_2 + 0x43) != '\0') {
    *param_3 = uVar4 + 1;
  }
  if ((int)(*param_2 << 0x1a) < 0) {
    *param_3 = *param_3 + 2;
  }
  if ((*param_2 & 6) == 0) {
    for (iVar1 = 0; iVar1 < (int)(param_2[3] - *param_3); iVar1 = iVar1 + 1) {
      iVar3 = (*param_5)(param_1,param_4,(int)param_2 + 0x19,1);
      if (iVar3 == -1) goto LAB_00086eca;
    }
  }
  uVar4 = (uint)*(byte *)((int)param_2 + 0x43);
  if (uVar4 != 0) {
    uVar4 = 1;
  }
  uVar5 = uVar4;
  if ((int)(*param_2 << 0x1a) < 0) {
    uVar5 = uVar4 + 2;
    *(undefined1 *)((int)param_2 + uVar4 + 0x43) = 0x30;
    *(undefined1 *)((int)param_2 + uVar4 + 0x44) = *(undefined1 *)((int)param_2 + 0x45);
  }
  iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x43,uVar5);
  if (iVar1 == -1) {
LAB_00086eca:
    uVar2 = 0xffffffff;
  }
  else {
    uVar4 = *param_2 & 6;
    bVar7 = uVar4 == 4;
    if (bVar7) {
      uVar5 = param_2[3];
      uVar4 = *param_3;
    }
    else {
      uVar5 = 0;
    }
    uVar6 = 0;
    if (bVar7) {
      uVar5 = uVar5 - uVar4;
    }
    if (bVar7) {
      uVar5 = uVar5 & ~((int)uVar5 >> 0x1f);
    }
    if ((int)param_2[4] < (int)param_2[2]) {
      uVar5 = uVar5 + (param_2[2] - param_2[4]);
    }
    for (; uVar5 != uVar6; uVar6 = uVar6 + 1) {
      iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x1a,1);
      if (iVar1 == -1) goto LAB_00086eca;
    }
    uVar2 = 0;
  }
  return uVar2;
}



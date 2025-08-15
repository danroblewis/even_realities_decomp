/*
 * Function: format_float_digits_with_validation
 * Entry:    0007932c
 * Prototype: undefined format_float_digits_with_validation()
 */


undefined4
format_float_digits_with_validation
          (undefined4 param_1,uint *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  char *local_34 [4];
  
  iVar12 = 0;
  local_34[0] = "+-";
  local_34[1] = "00";
  local_34[2] = "xX";
  pcVar3 = (code *)&UNK_0008712b;
  if (param_2[6] == 3) {
    pcVar3 = (code *)&UNK_00087127;
  }
  uVar6 = param_2[2];
  uVar4 = uVar6 - 1;
  if (uVar4 < 0x15d) {
    iVar10 = 0;
  }
  else {
    iVar10 = uVar6 - 0x15d;
    uVar6 = 0x15d;
  }
  if (0x15c < uVar4) {
    param_2[2] = uVar6;
  }
  puVar9 = param_2 + 7;
  *param_2 = *param_2 | 0xd00;
  puVar11 = puVar9;
LAB_00079384:
  do {
    iVar1 = find_character_in_string(local_34[iVar12],*(undefined1 *)*param_3,2);
    puVar8 = puVar11;
    if (iVar1 != 0) {
      if (iVar12 == 1) {
        if (param_2[1] == 0) {
          param_2[1] = 8;
          *param_2 = *param_2 | 0x200;
        }
        *param_2 = *param_2 & 0xfffffaff;
        uVar4 = param_2[2];
        param_2[2] = uVar4 - 1;
        if (uVar4 == 0) {
          iVar12 = 2;
          goto LAB_00079384;
        }
      }
      else if (iVar12 == 2) {
        if ((*param_2 & 0x600) != 0x200) break;
        *param_2 = *param_2 | 0x100;
        uVar4 = param_2[2];
        param_2[1] = 0x10;
        param_2[2] = uVar4 - 1;
        if (uVar4 == 0) break;
      }
      else {
        uVar4 = param_2[2];
        param_2[2] = uVar4 - 1;
        if (uVar4 == 0) {
          iVar12 = 1;
          goto LAB_00079384;
        }
      }
      pbVar5 = (byte *)*param_3;
      *param_3 = (int)(pbVar5 + 1);
      puVar8 = (uint *)((int)puVar11 + 1);
      *(byte *)puVar11 = *pbVar5;
      iVar1 = param_3[1];
      param_3[1] = iVar1 + -1;
      if ((iVar1 + -1 < 1) && (iVar1 = (*(code *)param_2[0x60])(param_1,param_3), iVar1 != 0)) {
        iVar12 = 0;
        goto LAB_000794a0;
      }
    }
    iVar12 = iVar12 + 1;
    puVar11 = puVar8;
  } while (iVar12 != 3);
  if (param_2[1] == 0) {
    param_2[1] = 10;
  }
  iVar12 = 0;
  format_float_digits(param_2[5],"A-Fa-f8901234567]" + (0x10 - param_2[1]));
  while( true ) {
    puVar8 = puVar11;
    if (param_2[2] == 0) break;
    pbVar5 = (byte *)*param_3;
    uVar4 = (uint)*pbVar5;
    if (*(char *)(param_2[5] + uVar4) == '\0') break;
    if ((uVar4 == 0x30) && ((int)(*param_2 << 0x14) < 0)) {
      iVar12 = iVar12 + 1;
      if (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        param_2[2] = param_2[2] + 1;
      }
    }
    else {
      *param_2 = *param_2 & 0xfffff6ff;
      puVar8 = (uint *)((int)puVar11 + 1);
      *(byte *)puVar11 = *pbVar5;
    }
    iVar1 = param_3[1];
    param_3[1] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      iVar1 = (*(code *)param_2[0x60])(param_1,param_3);
      if (iVar1 != 0) break;
    }
    else {
      *param_3 = *param_3 + 1;
    }
    param_2[2] = param_2[2] - 1;
    puVar11 = puVar8;
  }
LAB_000794a0:
  puVar11 = puVar8;
  if ((int)(*param_2 << 0x17) < 0) {
    if (puVar9 < puVar8) {
      puVar11 = (uint *)((int)puVar8 + -1);
      (*(code *)param_2[0x5f])(param_1,*(byte *)((int)puVar8 + -1),param_3);
    }
    if (puVar11 == puVar9) {
      return 1;
    }
  }
  if ((*param_2 & 0x10) == 0) {
    *(byte *)puVar11 = 0;
    uVar2 = (*pcVar3)(param_1,puVar9,0,param_2[1]);
    puVar7 = (undefined4 *)*param_4;
    uVar4 = *param_2;
    *param_4 = puVar7 + 1;
    puVar7 = (undefined4 *)*puVar7;
    if ((uVar4 & 0x20) == 0) {
      if ((int)(uVar4 << 0x1f) < 0) {
        *(short *)puVar7 = (short)uVar2;
      }
      else {
        *puVar7 = uVar2;
      }
    }
    else {
      *puVar7 = uVar2;
    }
    param_2[3] = param_2[3] + 1;
  }
  param_2[4] = (uint)((int)puVar11 + param_2[4] + (iVar12 - (int)puVar9));
  return 0;
}



/*
 * Function: format_integer_for_printf_with_padding
 * Entry:    00077594
 * Prototype: undefined format_integer_for_printf_with_padding(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


code * format_integer_for_printf_with_padding
                 (undefined4 param_1,uint *param_2,undefined4 param_3,code *param_4,int *param_5)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  char *pcVar13;
  uint uVar14;
  undefined1 uVar15;
  code *local_24;
  
  bVar2 = (byte)param_2[6];
  pcVar8 = (char *)((int)param_2 + 0x43);
  local_24 = param_4;
  if (0x78 < bVar2) {
switchD_000775d0_caseD_65:
    *(byte *)((int)param_2 + 0x42) = bVar2;
LAB_0007763c:
    pcVar8 = (char *)((int)param_2 + 0x42);
    uVar10 = 1;
LAB_00077798:
    param_2[4] = uVar10;
    *(undefined1 *)((int)param_2 + 0x43) = 0;
    goto LAB_000776aa;
  }
  pcVar13 = pcVar8;
  if (bVar2 < 99) {
    if (bVar2 == 0) {
LAB_00077776:
      param_2[4] = 0;
      goto LAB_000776aa;
    }
    if (bVar2 != 0x58) goto switchD_000775d0_caseD_65;
    pcVar5 = "0123456789ABCDEF";
    uVar15 = 0x58;
  }
  else {
    switch(bVar2) {
    case 99:
      uVar9 = *(undefined4 *)*param_5;
      *param_5 = (int)((undefined4 *)*param_5 + 1);
      *(char *)((int)param_2 + 0x42) = (char)uVar9;
      goto LAB_0007763c;
    case 100:
    case 0x69:
      uVar11 = *param_2;
      puVar7 = (uint *)*param_5;
      *param_5 = (int)(puVar7 + 1);
      if (((int)(uVar11 << 0x18) < 0) || (-1 < (int)(uVar11 << 0x19))) {
        uVar10 = *puVar7;
      }
      else {
        uVar10 = (uint)(short)*puVar7;
      }
      if (-1 < (int)uVar10) {
        pcVar5 = "0123456789ABCDEF";
        uVar11 = 10;
        goto LAB_000776f6;
      }
      param_2[2] = param_2[1];
      *(undefined1 *)((int)param_2 + 0x43) = 0x2d;
      if (-1 < (int)param_2[1]) {
        *param_2 = uVar11 & 0xfffffffb;
      }
      uVar10 = -uVar10;
      pcVar5 = "0123456789ABCDEF";
      uVar11 = 10;
      goto LAB_00077674;
    default:
      goto switchD_000775d0_caseD_65;
    case 0x6e:
      puVar12 = (undefined4 *)*param_5;
      uVar11 = *param_2;
      uVar10 = param_2[5];
      *param_5 = (int)(puVar12 + 1);
      puVar7 = (uint *)*puVar12;
      if (((int)(uVar11 << 0x18) < 0) || (-1 < (int)(uVar11 << 0x19))) {
        *puVar7 = uVar10;
      }
      else {
        *(short *)puVar7 = (short)uVar10;
      }
      goto LAB_00077776;
    case 0x6f:
    case 0x75:
      puVar7 = (uint *)*param_5;
      uVar10 = *param_2;
      *param_5 = (int)(puVar7 + 1);
      if (((int)(uVar10 << 0x18) < 0) || (-1 < (int)(uVar10 << 0x19))) {
        uVar10 = *puVar7;
      }
      else {
        uVar10 = (uint)(ushort)*puVar7;
      }
      pcVar5 = "0123456789ABCDEF";
      if (bVar2 == 0x6f) {
        uVar11 = 8;
      }
      else {
        uVar11 = 10;
      }
      goto LAB_000776f0;
    case 0x70:
      *param_2 = *param_2 | 0x20;
    case 0x78:
      uVar15 = 0x78;
      pcVar5 = "0123456789abcdef";
      break;
    case 0x73:
      puVar12 = (undefined4 *)*param_5;
      *param_5 = (int)(puVar12 + 1);
      pcVar8 = (char *)*puVar12;
      iVar3 = find_character_in_string(pcVar8,0,param_2[1],puVar12,param_1,param_2,param_3);
      if (iVar3 != 0) {
        param_2[1] = iVar3 - (int)pcVar8;
      }
      uVar10 = param_2[1];
      goto LAB_00077798;
    }
  }
  *(undefined1 *)((int)param_2 + 0x45) = uVar15;
  puVar7 = (uint *)*param_5;
  uVar11 = *param_2;
  *param_5 = (int)(puVar7 + 1);
  if (((int)(uVar11 << 0x18) < 0) || (-1 < (int)(uVar11 << 0x19))) {
    uVar10 = *puVar7;
  }
  else {
    uVar10 = (uint)(ushort)*puVar7;
  }
  if ((int)(uVar11 << 0x1f) < 0) {
    *param_2 = uVar11 | 0x20;
  }
  if (uVar10 == 0) {
    *param_2 = *param_2 & 0xffffffdf;
  }
  uVar11 = 0x10;
LAB_000776f0:
  *(undefined1 *)((int)param_2 + 0x43) = 0;
LAB_000776f6:
  uVar14 = param_2[1];
  param_2[2] = uVar14;
  if ((((int)uVar14 < 0) || (*param_2 = *param_2 & 0xfffffffb, uVar10 != 0)) || (uVar14 != 0)) {
LAB_00077674:
    do {
      pcVar13 = pcVar13 + -1;
      *pcVar13 = pcVar5[uVar10 - uVar11 * (uVar10 / uVar11)];
      bVar1 = uVar11 <= uVar10;
      uVar10 = uVar10 / uVar11;
    } while (bVar1);
  }
  if (((uVar11 == 8) && ((int)(*param_2 << 0x1f) < 0)) && ((int)param_2[1] <= (int)param_2[4])) {
    pcVar13[-1] = '0';
    pcVar13 = pcVar13 + -1;
  }
  param_2[4] = (int)pcVar8 - (int)pcVar13;
  pcVar8 = pcVar13;
LAB_000776aa:
  iVar3 = format_data_with_padding(param_1,param_2,&local_24,param_3,param_4);
  if ((iVar3 == -1) || (iVar3 = (*param_4)(param_1,param_3,pcVar8,param_2[4]), iVar3 == -1)) {
LAB_000776be:
    pcVar4 = (code *)0xffffffff;
  }
  else {
    if ((int)(*param_2 << 0x1e) < 0) {
      for (iVar3 = 0; iVar3 < (int)(param_2[3] - (int)local_24); iVar3 = iVar3 + 1) {
        iVar6 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
        if (iVar6 == -1) goto LAB_000776be;
      }
    }
    pcVar4 = (code *)param_2[3];
    if ((int)param_2[3] < (int)local_24) {
      pcVar4 = local_24;
    }
  }
  return pcVar4;
}



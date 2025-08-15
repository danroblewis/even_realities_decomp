/*
 * Function: parse_json_string_with_escape_sequences
 * Entry:    00064290
 * Prototype: undefined parse_json_string_with_escape_sequences()
 */


undefined4 parse_json_string_with_escape_sequences(int param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  iVar5 = *param_2;
  iVar8 = param_2[2];
  pbVar10 = (byte *)(iVar8 + 1 + iVar5);
  if (*(char *)(iVar5 + iVar8) == '\"') {
    iVar9 = 0;
    for (pbVar11 = pbVar10; (uint)((int)pbVar11 - iVar5) < (uint)param_2[1]; pbVar11 = pbVar11 + 1)
    {
      if (*pbVar11 == 0x22) {
        pbVar2 = (byte *)(*(code *)param_2[4])(pbVar11 + ((1 - iVar9) - (iVar5 + iVar8)));
        pbVar12 = pbVar2;
        if (pbVar2 != (byte *)0x0) goto LAB_000642d6;
        break;
      }
      if (*pbVar11 == 0x5c) {
        pbVar11 = pbVar11 + 1;
        if ((uint)param_2[1] <= (uint)((int)pbVar11 - iVar5)) break;
        iVar9 = iVar9 + 1;
      }
    }
  }
  if (pbVar10 != (byte *)0x0) {
LAB_0006433e:
    param_2[2] = (int)pbVar10 - *param_2;
  }
  return 0;
LAB_000642d6:
  if (pbVar11 <= pbVar10) {
    *pbVar12 = 0;
    *(undefined4 *)(param_1 + 0xc) = 0x10;
    *(byte **)(param_1 + 0x10) = pbVar2;
    param_2[2] = (int)(pbVar11 + (1 - *param_2));
    return 1;
  }
  bVar7 = *pbVar10;
  if (bVar7 == 0x5c) {
    bVar7 = pbVar10[1];
    if (0x75 < bVar7) goto switchD_0006434e_caseD_6f;
    if (bVar7 < 0x6e) {
      if (bVar7 == 0x62) {
        bVar7 = 8;
      }
      else if (bVar7 < 99) {
        if (((bVar7 != 0x2f) && (bVar7 != 0x5c)) && (bVar7 != 0x22)) goto switchD_0006434e_caseD_6f;
      }
      else {
        if (bVar7 != 0x66) goto switchD_0006434e_caseD_6f;
        bVar7 = 0xc;
      }
      goto LAB_00064386;
    }
    switch(bVar7) {
    case 0x6e:
      bVar7 = 10;
      break;
    default:
switchD_0006434e_caseD_6f:
      (*(code *)param_2[5])(pbVar2);
      goto LAB_0006433e;
    case 0x72:
      bVar7 = 0xd;
      break;
    case 0x74:
      bVar7 = 9;
      break;
    case 0x75:
      if (((int)pbVar11 - (int)pbVar10 < 6) ||
         (uVar3 = FUN_00084e9a(pbVar10 + 2), uVar3 - 0xdc00 < 0x400))
      goto switchD_0006434e_caseD_6f;
      if (uVar3 - 0xd800 < 0x400) {
        if ((((int)pbVar11 - (int)(pbVar10 + 6) < 6) || (pbVar10[6] != 0x5c)) ||
           ((pbVar10[7] != 0x75 || (uVar4 = FUN_00084e9a(pbVar10 + 8), 0x3ff < uVar4 - 0xdc00))))
        goto switchD_0006434e_caseD_6f;
        iVar5 = 0xc;
        uVar3 = ((uVar3 & 0x3ff) << 10 | uVar4 & 0x3ff) + 0x10000;
LAB_00064404:
        bVar1 = 0xf0;
        iVar8 = 4;
      }
      else if (uVar3 < 0x80) {
        iVar5 = 6;
        bVar1 = 0;
        iVar8 = 1;
      }
      else if (uVar3 < 0x800) {
        iVar5 = 6;
        bVar1 = 0xc0;
        iVar8 = 2;
      }
      else {
        if (0xffff < uVar3) {
          if (uVar3 < 0x110000) {
            iVar5 = 6;
            goto LAB_00064404;
          }
          goto switchD_0006434e_caseD_6f;
        }
        iVar5 = 6;
        bVar1 = 0xe0;
        iVar8 = 3;
      }
      for (pbVar6 = pbVar12 + (iVar8 - 1U & 0xff); bVar7 = (byte)uVar3, pbVar12 != pbVar6;
          pbVar6 = pbVar6 + -1) {
        *pbVar6 = bVar7 & 0x3f | 0x80;
        uVar3 = uVar3 >> 6;
      }
      if (iVar8 == 1) {
        bVar7 = bVar7 & 0x7f;
      }
      else {
        bVar7 = bVar7 | bVar1;
      }
      pbVar6 = pbVar12 + iVar8;
      goto LAB_00064388;
    }
LAB_00064386:
    pbVar6 = pbVar12 + 1;
    iVar5 = 2;
LAB_00064388:
    pbVar10 = pbVar10 + iVar5;
  }
  else {
    pbVar10 = pbVar10 + 1;
    pbVar6 = pbVar12 + 1;
  }
  *pbVar12 = bVar7;
  pbVar12 = pbVar6;
  goto LAB_000642d6;
}



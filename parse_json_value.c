/*
 * Function: parse_json_value
 * Entry:    00012910
 * Prototype: undefined parse_json_value()
 */


undefined4 parse_json_value(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  byte *pbVar14;
  bool bVar15;
  undefined8 uVar16;
  byte *local_64;
  byte abStack_60 [64];
  undefined4 uVar17;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar10 = *param_2;
  if (iVar10 == 0) {
    return 0;
  }
  uVar8 = param_2[2];
  uVar13 = param_2[1];
  if (uVar13 < uVar8 + 4) {
    if (uVar8 + 5 <= uVar13) {
LAB_00012974:
      iVar3 = compare_string_offsets(iVar10 + uVar8,"false",5);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 1;
        pbVar6 = (byte *)(param_2[2] + 5);
        goto LAB_00012988;
      }
      if (uVar8 + 4 <= uVar13) goto LAB_00012992;
    }
LAB_00012952:
    if (uVar13 <= uVar8) {
      return 0;
    }
    uVar7 = (uint)*(byte *)(iVar10 + uVar8);
    if (uVar7 == 0x22) {
      uVar4 = parse_json_string_with_escape_sequences(param_1,param_2);
      return uVar4;
    }
    if ((uVar7 == 0x2d) || (uVar7 - 0x30 < 10)) {
      iVar3 = 0;
      local_64 = (byte *)0x0;
      pbVar6 = (byte *)(iVar10 + uVar8);
      pbVar14 = abStack_60;
      do {
        bVar2 = *pbVar6;
        if (bVar2 < 0x46) {
          if (bVar2 < 0x2b) goto LAB_000129fa;
          if ((1 << (uint)(byte)(bVar2 - 0x2b) & 0x4007fe5U) == 0) {
            bVar15 = bVar2 == 0x2e;
            goto LAB_000129ea;
          }
        }
        else {
          bVar15 = bVar2 == 0x65;
LAB_000129ea:
          if (!bVar15) goto LAB_000129fa;
        }
        iVar3 = iVar3 + 1;
        *pbVar14 = bVar2;
        if ((iVar3 == 0x3f) || (pbVar6 = pbVar6 + 1, pbVar14 = pbVar14 + 1, iVar3 == uVar13 - uVar8)
           ) goto LAB_000129fa;
      } while( true );
    }
    if (uVar7 == 0x5b) {
      uVar7 = param_2[3];
      if (999 < uVar7) {
        return 0;
      }
      param_2[3] = uVar7 + 1;
      if (*(char *)(iVar10 + uVar8) != '[') {
        return 0;
      }
      param_2[2] = uVar8 + 1;
      FUN_00084ed8(param_2);
      uVar8 = param_2[2];
      if (uVar13 <= uVar8) {
LAB_00012a9a:
        param_2[2] = uVar8 - 1;
        return 0;
      }
      if (*(char *)(iVar10 + uVar8) == ']') {
        piVar11 = (int *)0x0;
        param_2[3] = uVar7;
      }
      else {
        param_2[2] = uVar8 - 1;
        piVar9 = (int *)0x0;
        piVar12 = (int *)0x0;
        do {
          piVar5 = (int *)json_alloc(param_2[4]);
          piVar11 = piVar12;
          if (piVar5 == (int *)0x0) goto LAB_00012c08;
          piVar11 = piVar5;
          if (piVar12 != (int *)0x0) {
            *piVar9 = (int)piVar5;
            piVar5[1] = (int)piVar9;
            piVar11 = piVar12;
          }
          param_2[2] = param_2[2] + 1;
          FUN_00084ed8(param_2);
          iVar10 = parse_json_value(piVar5,param_2);
          if (iVar10 == 0) goto LAB_00012c08;
          FUN_00084ed8(param_2);
          if ((uint)param_2[1] <= (uint)param_2[2]) goto LAB_00012c0e;
          cVar1 = *(char *)(*param_2 + param_2[2]);
          piVar9 = piVar5;
          piVar12 = piVar11;
        } while (cVar1 == ',');
        if (cVar1 != ']') {
LAB_00012c0e:
          cleanup_json_node(piVar11);
          return 0;
        }
        param_2[3] = param_2[3] + -1;
        piVar11[1] = (int)piVar5;
      }
      uVar4 = 0x20;
    }
    else {
      if (uVar7 != 0x7b) {
        return 0;
      }
      uVar7 = param_2[3];
      if (999 < uVar7) {
        return 0;
      }
      param_2[3] = uVar7 + 1;
      if (*(char *)(iVar10 + uVar8) != '{') {
        return 0;
      }
      param_2[2] = uVar8 + 1;
      FUN_00084ed8(param_2);
      uVar8 = param_2[2];
      if (uVar13 <= uVar8) goto LAB_00012a9a;
      if (*(char *)(iVar10 + uVar8) == '}') {
        piVar11 = (int *)0x0;
        param_2[3] = uVar7;
      }
      else {
        param_2[2] = uVar8 - 1;
        piVar9 = (int *)0x0;
        piVar12 = (int *)0x0;
        do {
          piVar5 = (int *)json_alloc(param_2[4]);
          piVar11 = piVar12;
          if (piVar5 == (int *)0x0) goto LAB_00012c08;
          piVar11 = piVar5;
          if (piVar12 != (int *)0x0) {
            *piVar9 = (int)piVar5;
            piVar5[1] = (int)piVar9;
            piVar11 = piVar12;
          }
          param_2[2] = param_2[2] + 1;
          FUN_00084ed8(param_2);
          iVar10 = parse_json_string_with_escape_sequences(piVar5,param_2);
          if (iVar10 == 0) goto LAB_00012c08;
          FUN_00084ed8(param_2);
          iVar10 = piVar5[4];
          piVar5[4] = 0;
          piVar5[8] = iVar10;
          uVar8 = param_2[2];
          if (((uint)param_2[1] <= uVar8) || (*(char *)(*param_2 + uVar8) != ':'))
          goto LAB_00012c08;
          param_2[2] = uVar8 + 1;
          FUN_00084ed8(param_2);
          iVar10 = parse_json_value(piVar5,param_2);
          if (iVar10 == 0) goto LAB_00012c08;
          FUN_00084ed8(param_2);
          if ((uint)param_2[1] <= (uint)param_2[2]) goto LAB_00012c0e;
          cVar1 = *(char *)(*param_2 + param_2[2]);
          piVar9 = piVar5;
          piVar12 = piVar11;
        } while (cVar1 == ',');
        if (cVar1 != '}') goto LAB_00012c0e;
        param_2[3] = param_2[3] + -1;
        piVar11[1] = (int)piVar5;
      }
      uVar4 = 0x40;
    }
    *(int **)(param_1 + 8) = piVar11;
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    pbVar6 = (byte *)(param_2[2] + 1);
  }
  else {
    iVar3 = compare_string_offsets(iVar10 + uVar8,&DAT_000f6977,4);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 4;
    }
    else {
      if (uVar8 + 5 <= uVar13) goto LAB_00012974;
LAB_00012992:
      iVar3 = compare_string_offsets(iVar10 + uVar8,"true",4);
      if (iVar3 != 0) goto LAB_00012952;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = 1;
    }
    pbVar6 = (byte *)(param_2[2] + 4);
  }
LAB_00012988:
  param_2[2] = (int)pbVar6;
  return 1;
LAB_000129fa:
  abStack_60[iVar3] = 0;
  uVar16 = FUN_00077a10(abStack_60,&local_64);
  pbVar6 = local_64;
  uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uVar4 = (undefined4)uVar16;
  if (local_64 == abStack_60) {
    return 0;
  }
  iVar10 = float_compare_boolean_or_swapped(uVar4,uVar17,0xffc00000,0x41dfffff);
  if (iVar10 == 0) {
    iVar10 = float_compare_boolean_or(uVar4,uVar17,0,0xc1e00000);
    if (iVar10 == 0) {
      uVar4 = float_to_int(uVar4,uVar17);
    }
    else {
      uVar4 = 0x80000000;
    }
  }
  else {
    uVar4 = 0x7fffffff;
  }
  *(undefined8 *)(param_1 + 0x18) = uVar16;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0xc) = 8;
  pbVar6 = pbVar6 + (param_2[2] - (int)abStack_60);
  goto LAB_00012988;
LAB_00012c08:
  if (piVar11 == (int *)0x0) {
    return 0;
  }
  goto LAB_00012c0e;
}



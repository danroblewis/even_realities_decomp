/*
 * Function: format_float_for_printf_with_precision
 * Entry:    0007712c
 * Prototype: undefined format_float_for_printf_with_precision(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


uint format_float_for_printf_with_precision
               (undefined4 param_1,uint *param_2,undefined4 param_3,code *param_4,int *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint *puVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  char local_35;
  uint local_34;
  uint local_30;
  uint local_2c [2];
  
  puVar1 = (undefined4 *)get_format_string_data_pointer();
  uVar7 = *puVar1;
  uVar2 = calculate_string_length(uVar7);
  local_30 = 0;
  bVar12 = (byte)param_2[6];
  uVar13 = *param_2;
  puVar8 = (uint *)(*param_5 + 7U & 0xfffffff8);
  *param_5 = (int)(puVar8 + 2);
  uVar10 = *puVar8;
  uVar11 = puVar8[1];
  param_2[0x12] = uVar10;
  param_2[0x13] = uVar11;
  iVar3 = check_float_nan(uVar10,uVar11 & 0x7fffffff,0xffffffff,0x7fefffff);
  if ((iVar3 == 0) &&
     (iVar3 = float_compare_boolean_or(uVar10,uVar11 & 0x7fffffff,0xffffffff,0x7fefffff), iVar3 == 0
     )) {
    iVar3 = float_compare_boolean_inverted(uVar10,uVar11,0,0);
    if (iVar3 != 0) {
      *(undefined1 *)((int)param_2 + 0x43) = 0x2d;
    }
    pcVar6 = "INF";
    pcVar9 = "inf";
LAB_000771b6:
    if (0x47 < bVar12) {
      pcVar6 = pcVar9;
    }
    uVar10 = 0;
    param_2[4] = 3;
    *param_2 = uVar13 & 0xfffffffb;
  }
  else {
    iVar3 = check_float_nan(uVar10,uVar11,uVar10,uVar11);
    if (iVar3 != 0) {
      pcVar6 = "NAN";
      if ((int)uVar11 < 0) {
        *(undefined1 *)((int)param_2 + 0x43) = 0x2d;
      }
      pcVar9 = "nan";
      goto LAB_000771b6;
    }
    if (param_2[1] == 0xffffffff) {
      uVar11 = 6;
LAB_00077214:
      param_2[1] = uVar11;
    }
    else if (((bVar12 & 0xdf) == 0x47) && (param_2[1] == 0)) {
      uVar11 = 1;
      goto LAB_00077214;
    }
    uVar13 = uVar13 | 0x400;
    *param_2 = uVar13;
    pcVar6 = (char *)format_float_with_precision
                               (uVar10,param_1,param_2[1],uVar13,&local_35,&local_34,bVar12,
                                &local_30,0);
    if (bVar12 == 0x67) {
      if (((int)(local_34 + 3) < 0 != SCARRY4(local_34,3)) || ((int)param_2[1] < (int)local_34)) {
        bVar12 = 0x65;
        goto LAB_0007728c;
      }
LAB_0007724e:
      if ((int)local_34 < (int)local_30) {
        if ((int)local_34 < 1) {
          iVar3 = 2 - local_34;
        }
        else {
          iVar3 = 1;
        }
        uVar13 = local_30 + iVar3;
LAB_000772e6:
        param_2[4] = uVar13;
      }
      else {
        param_2[4] = local_34;
        if ((int)(*param_2 << 0x1f) < 0) {
          uVar13 = local_34 + 1;
          goto LAB_000772e6;
        }
      }
LAB_000772e8:
      uVar10 = 0;
      param_2[0x16] = local_34;
    }
    else {
      if (bVar12 == 0x47) {
        if (((int)(local_34 + 3) < 0 == SCARRY4(local_34,3)) && ((int)local_34 <= (int)param_2[1]))
        {
          bVar12 = 0x67;
          goto LAB_0007724e;
        }
        bVar12 = 0x45;
      }
      else if (0x65 < bVar12) {
        if (bVar12 != 0x66) goto LAB_0007724e;
        uVar13 = param_2[1];
        if ((int)local_34 < 1) {
          if ((uVar13 == 0) && (-1 < (int)(*param_2 << 0x1f))) {
            uVar13 = 1;
          }
          else {
            uVar13 = uVar13 + 2;
          }
        }
        else {
          param_2[4] = local_34;
          if ((uVar13 == 0) && (-1 < (int)(*param_2 << 0x1f))) goto LAB_000772e8;
          uVar13 = uVar13 + 1 + local_34;
        }
        goto LAB_000772e6;
      }
LAB_0007728c:
      local_34 = local_34 - 1;
      uVar10 = format_integer_with_sign(param_2 + 0x14,local_34,bVar12);
      param_2[4] = local_30 + uVar10;
      if ((1 < (int)local_30) || ((int)(*param_2 << 0x1f) < 0)) {
        param_2[4] = local_30 + uVar10 + 1;
      }
    }
    if (local_35 != '\0') {
      *(undefined1 *)((int)param_2 + 0x43) = 0x2d;
    }
  }
  iVar3 = format_data_with_padding(param_1,param_2,local_2c,param_3,param_4);
  uVar13 = local_30;
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  if ((int)(*param_2 << 0x15) < 0) {
    if (bVar12 < 0x66) {
      if (((int)local_30 < 2) && (-1 < (int)(*param_2 << 0x1f))) {
        iVar5 = 1;
LAB_0007752c:
        iVar3 = (*param_4)(param_1,param_3,pcVar6,iVar5);
        if (iVar3 == -1) {
          return 0xffffffff;
        }
      }
      else {
        iVar3 = (*param_4)(param_1,param_3,pcVar6,1);
        if (iVar3 == -1) {
          return 0xffffffff;
        }
        iVar3 = (*param_4)(param_1,param_3,uVar7,uVar2);
        if (iVar3 == -1) {
          return 0xffffffff;
        }
        iVar5 = uVar13 - 1;
        iVar3 = float_compare_boolean(param_2[0x12],param_2[0x13],0,0);
        if (iVar3 == 0) {
          pcVar6 = (char *)((int)pcVar6 + 1);
          goto LAB_0007752c;
        }
        for (iVar3 = 0; iVar3 < iVar5; iVar3 = iVar3 + 1) {
          iVar4 = (*param_4)(param_1,param_3,(int)param_2 + 0x1a,1);
          if (iVar4 == -1) {
            return 0xffffffff;
          }
        }
      }
      pcVar6 = (char *)(param_2 + 0x14);
    }
    else {
      iVar3 = float_compare_boolean(param_2[0x12],param_2[0x13],0,0);
      uVar13 = local_30;
      if (iVar3 != 0) {
        iVar3 = (*param_4)(param_1,param_3,"0",1);
        uVar13 = local_30;
        if (iVar3 == -1) {
          return 0xffffffff;
        }
        if (((int)local_34 < (int)local_30) || ((int)(*param_2 << 0x1f) < 0)) {
          iVar3 = (*param_4)(param_1,param_3,uVar7,uVar2);
          if (iVar3 == -1) {
            return 0xffffffff;
          }
          for (iVar3 = 0; iVar3 < (int)(uVar13 - 1); iVar3 = iVar3 + 1) {
            iVar5 = (*param_4)(param_1,param_3,(int)param_2 + 0x1a,1);
            if (iVar5 == -1) {
              return 0xffffffff;
            }
          }
        }
        goto LAB_0007737a;
      }
      if (0 < (int)local_34) {
        uVar10 = param_2[0x16];
        if ((int)local_30 <= (int)param_2[0x16]) {
          uVar10 = local_30;
        }
        if ((0 < (int)uVar10) && (iVar3 = (*param_4)(param_1,param_3,pcVar6), iVar3 == -1)) {
          return 0xffffffff;
        }
        for (iVar3 = 0; uVar11 = param_2[0x16],
            iVar3 < (int)(uVar11 - (uVar10 & ~((int)uVar10 >> 0x1f))); iVar3 = iVar3 + 1) {
          iVar5 = (*param_4)(param_1,param_3,(int)param_2 + 0x1a,1);
          if (iVar5 == -1) {
            return 0xffffffff;
          }
        }
        if ((((int)local_34 < (int)uVar13) || ((int)(*param_2 << 0x1f) < 0)) &&
           (iVar3 = (*param_4)(param_1,param_3,uVar7,uVar2), iVar3 == -1)) {
          return 0xffffffff;
        }
        uVar10 = uVar13 - local_34;
        if ((int)(uVar13 - uVar11) <= (int)(uVar13 - local_34)) {
          uVar10 = uVar13 - uVar11;
        }
        if ((0 < (int)uVar10) &&
           (iVar3 = (*param_4)(param_1,param_3,(char *)(uVar11 + (int)pcVar6),uVar10), iVar3 == -1))
        {
          return 0xffffffff;
        }
        for (iVar3 = 0; iVar3 < (int)((uVar13 - local_34) - (uVar10 & ~((int)uVar10 >> 0x1f)));
            iVar3 = iVar3 + 1) {
          iVar5 = (*param_4)(param_1,param_3,(int)param_2 + 0x1a,1);
          if (iVar5 == -1) {
            return 0xffffffff;
          }
        }
        goto LAB_0007737a;
      }
      iVar3 = (*param_4)(param_1,param_3,"0",1);
      uVar10 = local_30;
      if (iVar3 == -1) {
        return 0xffffffff;
      }
      if ((local_30 == 0 && local_34 == 0) && (-1 < (int)(*param_2 << 0x1f))) goto LAB_0007737a;
      iVar3 = (*param_4)(param_1,param_3,uVar7,uVar2);
      if (iVar3 == -1) {
        return 0xffffffff;
      }
      for (iVar3 = 0; -iVar3 != local_34 && iVar3 <= (int)-local_34; iVar3 = iVar3 + 1) {
        iVar5 = (*param_4)(param_1,param_3,(int)param_2 + 0x1a,1);
        if (iVar5 == -1) {
          return 0xffffffff;
        }
      }
    }
  }
  else {
    uVar10 = param_2[4];
  }
  iVar3 = (*param_4)(param_1,param_3,pcVar6,uVar10);
  if (iVar3 == -1) {
    return 0xffffffff;
  }
LAB_0007737a:
  if ((int)(*param_2 << 0x1e) < 0) {
    for (iVar3 = 0; iVar3 < (int)(param_2[3] - local_2c[0]); iVar3 = iVar3 + 1) {
      iVar5 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
      if (iVar5 == -1) {
        return 0xffffffff;
      }
    }
  }
  if ((int)param_2[3] < (int)local_2c[0]) {
    return local_2c[0];
  }
  return param_2[3];
}



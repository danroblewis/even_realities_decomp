/*
 * Function: process_ble_data_packet_by_format
 * Entry:    0005bd18
 * Prototype: undefined process_ble_data_packet_by_format(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


/* WARNING: Type propagation algorithm not settling */

void process_ble_data_packet_by_format
               (undefined4 param_1,int param_2,byte *param_3,int param_4,int *param_5)

{
  short sVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  byte *pbVar7;
  uint uVar9;
  byte *pbVar10;
  undefined4 local_78;
  char *local_74;
  uint local_70;
  uint local_6c;
  undefined1 *local_68;
  int local_64;
  undefined1 local_5c [2];
  undefined2 local_5a;
  undefined1 *local_58;
  undefined2 local_54;
  undefined2 local_52;
  undefined1 local_50 [2];
  undefined2 local_4e;
  byte local_4c;
  undefined2 local_4a;
  undefined1 *local_3c;
  undefined1 auStack_38 [8];
  undefined1 **local_30;
  short local_2c;
  byte *pbVar8;
  
  if (param_2 != 0) {
    pcVar6 = (code *)param_5[1];
    goto LAB_0005bd2e;
  }
  if ((char)param_5[4] == '\x02') {
    uVar9 = (uint)*param_3;
    if (uVar9 == 6) {
      uVar3 = 2;
LAB_0005bd6e:
      sVar1 = 0;
      local_50[0] = uVar3;
      pbVar10 = param_3 + 1;
      for (uVar9 = param_4 - 1; uVar9 = uVar9 & 0xffff, *param_3 <= uVar9; uVar9 = uVar9 - *param_3)
      {
        sVar1 = *(short *)pbVar10;
        if (sVar1 == 0) goto switchD_0005bf6a_caseD_1;
        local_54 = *(undefined2 *)(pbVar10 + 2);
        uVar4 = (uint)local_50[0];
        local_52 = *(undefined2 *)(pbVar10 + 4);
        if (uVar4 == 0) {
          local_58 = local_50;
          local_4e = *(undefined2 *)(pbVar10 + 6);
        }
        else if (uVar4 == 2) {
          *(undefined2 *)((int)param_5 + 10) = local_54;
          *(undefined2 *)(param_5 + 3) = local_52;
          *(short *)(param_5 + 2) = sVar1;
          local_70 = 10;
          local_6c = uVar4;
          sVar1 = FUN_00082aee(param_1,0x5c005,param_5,0x8275f);
          if (sVar1 == 0) {
            return;
          }
          goto LAB_0005bd8c;
        }
        if ((*param_5 == 0) || (iVar2 = compare_data_structures(local_50), iVar2 == 0)) {
          local_5c[0] = 0;
          local_5a = 0x2802;
          fill_memory_buffer(auStack_38,0,0x10);
          local_3c = local_5c;
          local_30 = &local_58;
          local_2c = sVar1;
          iVar2 = (*(code *)param_5[1])(param_1,&local_3c,param_5);
          if (iVar2 == 0) {
            return;
          }
        }
        pbVar10 = pbVar10 + *param_3;
      }
      goto LAB_0005bd82;
    }
    uVar3 = 0;
    if (uVar9 == 8) goto LAB_0005bd6e;
LAB_0005bd56:
    local_70 = uVar9;
    local_78 = 3;
    local_74 = "Invalid data len %u";
    ble_data_processing_wrapper(&DAT_00088128,0x1840,&local_78);
  }
  else {
    if ((char)param_5[4] == '\x03') {
      uVar9 = (uint)*param_3;
      uVar3 = 0;
      if (uVar9 != 7) {
        if (uVar9 != 0x15) goto LAB_0005bd56;
        uVar3 = 2;
      }
      sVar1 = 0;
      local_50[0] = uVar3;
      pbVar10 = param_3 + 1;
      for (uVar9 = param_4 - 1; uVar9 = uVar9 & 0xffff, *param_3 <= uVar9; uVar9 = uVar9 - *param_3)
      {
        sVar1 = *(short *)pbVar10;
        if (sVar1 == 0) goto switchD_0005bf6a_caseD_1;
        if (local_50[0] == '\0') {
          local_4e = *(undefined2 *)(pbVar10 + 5);
        }
        else if (local_50[0] == '\x02') {
          puVar5 = (undefined4 *)((int)local_50 + 1);
          pbVar8 = pbVar10 + 5;
          do {
            pbVar7 = pbVar8 + 4;
            *puVar5 = *(undefined4 *)pbVar8;
            puVar5 = puVar5 + 1;
            pbVar8 = pbVar7;
          } while (pbVar7 != pbVar10 + 0x15);
        }
        if ((*param_5 == 0) || (iVar2 = compare_data_structures(local_50), iVar2 == 0)) {
          local_54 = *(undefined2 *)(pbVar10 + 3);
          local_52 = CONCAT11(local_52._1_1_,pbVar10[2]);
          local_5c[0] = 0;
          local_58 = local_50;
          local_5a = 0x2803;
          fill_memory_buffer(auStack_38,0,0x10);
          local_3c = local_5c;
          local_30 = &local_58;
          local_2c = sVar1;
          iVar2 = (*(code *)param_5[1])(param_1,&local_3c,param_5);
          if (iVar2 == 0) {
            return;
          }
        }
        pbVar10 = pbVar10 + *param_3;
      }
    }
    else {
      if (*(char *)*param_5 != '\0') goto switchD_0005bf6a_caseD_1;
      local_64 = *(ushort *)((char *)*param_5 + 2) - 0x2900;
      pbVar10 = param_3 + 1;
      sVar1 = 0;
      for (uVar9 = param_4 - 1; uVar9 = uVar9 & 0xffff, *param_3 <= uVar9; uVar9 = uVar9 - *param_3)
      {
        sVar1 = *(short *)pbVar10;
        if (sVar1 == 0) goto switchD_0005bf6a_caseD_1;
        switch(local_64) {
        case 0:
        case 2:
        case 3:
          local_50 = *(undefined1 (*) [2])(pbVar10 + 2);
          break;
        default:
          goto switchD_0005bf6a_caseD_1;
        case 4:
          local_50 = *(undefined1 (*) [2])(pbVar10 + 2);
          local_4e = *(undefined2 *)(pbVar10 + 4);
          local_4c = pbVar10[6];
          local_4a = *(undefined2 *)(pbVar10 + 7);
        }
        local_68 = (undefined1 *)*param_5;
        fill_memory_buffer(auStack_38,0,0x10);
        local_3c = local_68;
        local_30 = (undefined1 **)local_50;
        local_2c = sVar1;
        iVar2 = (*(code *)param_5[1])(param_1,&local_3c,param_5);
        if (iVar2 == 0) {
          return;
        }
        pbVar10 = pbVar10 + *param_3;
      }
    }
LAB_0005bd82:
    if ((uVar9 == 0) && (sVar1 != 0)) {
LAB_0005bd8c:
      FUN_00082d2e(param_1,sVar1,param_5);
      return;
    }
  }
switchD_0005bf6a_caseD_1:
  pcVar6 = (code *)param_5[1];
LAB_0005bd2e:
  (*pcVar6)(param_1,0,param_5);
  return;
}



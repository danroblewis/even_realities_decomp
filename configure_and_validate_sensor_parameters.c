/*
 * Function: configure_and_validate_sensor_parameters
 * Entry:    00030528
 * Prototype: undefined configure_and_validate_sensor_parameters()
 */


int configure_and_validate_sensor_parameters
              (char *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  byte *pbVar12;
  uint local_1c;
  
  local_1c = param_2;
  iVar6 = transmit_sensor_data_with_retry(0xff20,0x3c00ffff,param_3,param_4,param_1);
  if ((((iVar6 == 0) && (iVar6 = transmit_sensor_data_with_retry(0x4444,0x10000), iVar6 == 0)) &&
      (iVar6 = transmit_sensor_data_with_retry(0x4820,6), iVar6 == 0)) &&
     ((*param_1 != '\x01' ||
      (iVar6 = transmit_sensor_data_with_retry(0x4794,0x5a637955), iVar6 == 0)))) {
    uVar11 = **(uint **)(param_1 + 0x10);
    iVar6 = transmit_sensor_data_with_retry(0xff20,0x3c00f091);
    if (((iVar6 == 0) && (iVar6 = transmit_sensor_data_with_retry(0x4820,6), iVar6 == 0)) &&
       ((*param_1 != '\0' ||
        (iVar6 = transmit_sensor_data_with_retry(0x4794,0x5a637955), iVar6 == 0)))) {
      uVar9 = uVar11 & 0x7f;
      if (uVar9 != 0) {
        uVar9 = 1;
      }
      for (iVar6 = 0; uVar9 + (uVar11 >> 7) != iVar6; iVar6 = iVar6 + 1) {
        iVar7 = transmit_sensor_data_with_retry
                          (0x4704,*(int *)(*(int *)(param_1 + 0x10) + 4) + iVar6 * 0x80);
        if (iVar7 != 0) {
          return iVar7;
        }
        iVar7 = transmit_sensor_data_with_retry(0x4710,5);
        if (iVar7 != 0) {
          return iVar7;
        }
        iVar7 = transmit_sensor_data_with_retry(0x472c,0xf0);
        if (iVar7 != 0) {
          return iVar7;
        }
        iVar7 = transmit_sensor_data_with_retry(0x4714,1);
        if (iVar7 != 0) {
          return iVar7;
        }
        iVar7 = FUN_0007cfac();
        if (iVar7 != 0) {
          return iVar7;
        }
      }
      iVar6 = transmit_sensor_data_with_retry(0x472c,0x16);
      if ((iVar6 == 0) && (iVar6 = transmit_sensor_data_with_retry(0x4820,4), iVar6 == 0)) {
        pbVar12 = *(byte **)(param_1 + 4);
        uVar9 = *(uint *)(param_1 + 8);
        uVar5 = *(ushort *)(param_1 + 0xc);
        uVar11 = set_sensor_operation_mode(*param_1);
        if (uVar11 == 0) {
          for (; uVar11 < uVar9; uVar11 = uVar11 + 4) {
            iVar6 = FUN_0007cfdc(uVar5 + uVar11 & 0xffff,
                                 (uint)pbVar12[1] << 0x10 | (uint)*pbVar12 << 0x18 |
                                 (uint)pbVar12[3] | (uint)pbVar12[2] << 8);
            pbVar12 = pbVar12 + 4;
            if (iVar6 != 0) goto LAB_00030622;
          }
          local_1c = transmit_sensor_data_with_retry(0x4820,4);
          if (local_1c == 0) {
            pbVar12 = *(byte **)(param_1 + 4);
            uVar11 = *(uint *)(param_1 + 8);
            iVar6 = transmit_sensor_data_with_retry(0xff20,0x3c00f091);
            if ((iVar6 == 0) && (uVar9 = transmit_sensor_data_with_retry(0x4820,4), uVar9 == 0)) {
              for (; uVar9 < uVar11; uVar9 = uVar9 + 4) {
                iVar6 = FUN_0007d05e(&local_1c,*(int *)(param_1 + 0xc) + uVar9 & 0xffff);
                if ((iVar6 != 0) ||
                   (pbVar1 = pbVar12 + 1, bVar4 = *pbVar12, pbVar2 = pbVar12 + 3,
                   pbVar3 = pbVar12 + 2, pbVar12 = pbVar12 + 4,
                   ((uint)*pbVar1 << 0x10 | (uint)bVar4 << 0x18 | (uint)*pbVar2 | (uint)*pbVar3 << 8
                   ) != local_1c)) goto LAB_00030622;
              }
              iVar6 = FUN_0007d02a(*(undefined2 *)(*(int *)(param_1 + 0x10) + 8),0x20222022,*param_1
                                  );
              if (iVar6 == 0) {
                puVar10 = *(undefined4 **)(param_1 + 0x10);
                uVar8 = FUN_0007cf34(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                                     *puVar10);
                iVar6 = FUN_0007d02a(*(undefined2 *)(puVar10 + 3),uVar8,*param_1);
                if (iVar6 == 0) {
                  if (*param_1 != '\x01') {
                    return 0;
                  }
                  iVar6 = transmit_sensor_data_with_retry(0x4794,0);
                  return iVar6;
                }
              }
            }
          }
        }
LAB_00030622:
        iVar6 = -1;
      }
    }
  }
  return iVar6;
}



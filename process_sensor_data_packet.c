/*
 * Function: process_sensor_data_packet
 * Entry:    00030340
 * Prototype: undefined process_sensor_data_packet()
 */


undefined4 process_sensor_data_packet(uint param_1,uint param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  ushort *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  bool bVar13;
  uint local_24;
  
  uVar12 = param_4 + 0xe & 0xffff;
  uVar8 = param_1;
  local_24 = param_2;
  puVar3 = (undefined4 *)malloc_maybe(uVar12);
  if (puVar3 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  *puVar3 = 0x2000008;
  *(char *)((int)puVar3 + 5) = (char)(param_4 + 0xc);
  *(char *)(puVar3 + 1) = (char)(param_4 + 0xc >> 8);
  iVar9 = param_1 + param_2 + param_4;
  pbVar6 = param_3;
  while ((uint)((int)pbVar6 - (int)param_3) < param_4) {
    iVar9 = iVar9 + ((uint)pbVar6[1] << 0x10 | (uint)*pbVar6 << 0x18 | (uint)pbVar6[3] |
                    (uint)pbVar6[2] << 8);
    pbVar6 = pbVar6 + 4;
  }
  uVar1 = -iVar9;
  *(char *)((int)puVar3 + 6) = (char)(uVar1 >> 0x18);
  *(char *)((int)puVar3 + 7) = (char)(uVar1 >> 0x10);
  uVar7 = (param_4 >> 0x10) << 0x18 | (param_4 >> 0x18) << 0x10 | (param_4 & 0xff) << 8 |
          param_4 >> 8 & 0xff;
  *(ushort *)(puVar3 + 2) = (ushort)((uVar1 & 0xff) << 8) | (ushort)(uVar1 >> 8) & 0xff;
  *(char *)((int)puVar3 + 10) = (char)param_1;
  *(char *)((int)puVar3 + 0xb) = (char)param_2;
  *(short *)(puVar3 + 3) = (short)uVar7;
  if ((param_4 != 0) && (param_3 != (byte *)0x0)) {
    memcpy((int)puVar3 + 0xe,param_3,param_4,uVar7,uVar8);
  }
  cVar10 = '\x05';
  do {
    iVar9 = (*(code *)DISPLAY_DISPATCH_THREAD_FINAL_EXTENDED_ULTIMATE_COMPREHENSIVE_COMPLETION_STATE
                      [1])(puVar3,uVar12);
    if (-1 < iVar9) break;
    cVar10 = cVar10 + -1;
  } while (cVar10 != -1);
  call_data_verification_handler_with_memory_cleanup(puVar3);
  if (cVar10 == -1) {
    return 0xffffffff;
  }
  iVar9 = transmit_sensor_data_with_retry(0x1c10,&DAT_20000800);
  if (iVar9 != 0) {
    return 0xffffffff;
  }
  iVar9 = transmit_sensor_data_with_retry(0x4408,0x15);
  if (iVar9 != 0) {
    return 0xffffffff;
  }
  uVar8 = SENSOR_CALIBRATION_DATA_BUFFER - 1 & 0xff;
  if (uVar8 < 5) {
    cVar10 = (&UNK_000a49a0)[uVar8];
    uVar2 = (&UNK_000a499b)[uVar8];
  }
  else {
    uVar2 = 0;
    cVar10 = '\0';
  }
  call_sensor_callback_function(uVar2);
  local_24 = 0;
  if (SENSOR_CALIBRATION_DATA_BUFFER == 3) {
    iVar9 = 100;
  }
  else {
    iVar9 = 10;
  }
  while( true ) {
    iVar4 = read_sensor_data_with_retry(0x4410,&local_24);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    if ((int)(local_24 << 2) < 0) break;
    call_sensor_callback_function(1);
    bVar13 = iVar9 == 0;
    iVar9 = iVar9 + -1;
    if (bVar13) {
      return 0xffffffff;
    }
  }
  local_24 = local_24 & 0xffff0000;
  puVar5 = (ushort *)malloc_maybe(cVar10 + '\f');
  if (puVar5 == (ushort *)0x0) {
    return 0xffffffff;
  }
  cVar11 = '\x05';
  local_24 = CONCAT31(local_24._1_3_,0x18);
  while (iVar9 = (*(code *)*
                           DISPLAY_DISPATCH_THREAD_FINAL_EXTENDED_ULTIMATE_COMPREHENSIVE_COMPLETION_STATE
                 )(&local_24,2,puVar5,cVar10 + '\f'), iVar9 < 0) {
    cVar11 = cVar11 + -1;
    if (cVar11 == -1) {
      call_data_verification_handler_with_memory_cleanup(puVar5);
      return 0xffffffff;
    }
  }
  *puVar5 = *puVar5 << 8 | *puVar5 >> 8;
  puVar5[1] = puVar5[1] << 8 | puVar5[1] >> 8;
  puVar5[5] = puVar5[5] << 8 | puVar5[5] >> 8;
  uVar8 = *(uint *)(puVar5 + 2);
  *(uint *)(puVar5 + 2) =
       uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18;
  if ((byte)puVar5[4] != param_1) {
    return 0xffffffff;
  }
  if (*(byte *)((int)puVar5 + 9) != param_2) {
    return 0xffffffff;
  }
  if (*(int *)(puVar5 + 6) != 0) {
    return 0xffffffff;
  }
  call_data_verification_handler_with_memory_cleanup(puVar5);
  return 0;
}



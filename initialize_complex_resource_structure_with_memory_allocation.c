/*
 * Function: initialize_complex_resource_structure_with_memory_allocation
 * Entry:    0004cd4c
 * Prototype: undefined __stdcall initialize_complex_resource_structure_with_memory_allocation(undefined4 resource_context)
 */


int initialize_complex_resource_structure_with_memory_allocation(int resource_context)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r2;
  int extraout_r2_00;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int *ptr;
  int iVar8;
  undefined8 uVar9;
  
  iVar6 = *(int *)(resource_context + 0x10);
  puVar7 = *(undefined4 **)(resource_context + 4);
  ptr = (int *)(iVar6 + 0x3bc);
  if (*ptr != 0) {
    return -0x78;
  }
  *ptr = 1;
  iVar2 = 1;
  iVar3 = puVar7[2];
  uVar1 = puVar7[10];
  while( true ) {
    uVar9 = calculate_aligned_memory_size(iVar2,uVar1);
    uVar1 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (iVar3 - 4U <= (uint)uVar9) break;
    iVar2 = extraout_r2 + 1;
  }
  if (extraout_r2 + -1 == 0) {
    iVar2 = -0xc;
  }
  else {
    uVar4 = 0x80000000 >> LZCOUNT(extraout_r2 + -1);
    *(uint *)(iVar6 + 0x260) = puVar7[1] + 7 & 0xfffffffc;
    uVar1 = calculate_aligned_memory_size(uVar4,puVar7[10]);
    *(undefined4 *)(iVar6 + 0x264) = uVar1;
    iVar2 = extraout_r2_00 + (uVar4 * puVar7[10] + 3 & 0xfffffffc) * 2;
    *(int *)(iVar6 + 600) = iVar2;
    *(uint *)(iVar6 + 0x254) = iVar2 + (uVar4 * 0x12 + 9 & 0xfffffffc) + uVar4 * 8 + 8;
    uVar1 = puVar7[1];
    *(uint *)(iVar6 + 0x25c) = uVar4;
    *(undefined4 *)(iVar6 + 0x250) = uVar1;
    *(undefined4 **)(iVar6 + 0x2a4) = puVar7;
    *(undefined1 **)(iVar6 + 0x2a8) = &LAB_0007eb36_1;
    iVar2 = initialize_resource_structure_with_memory_layout(iVar6 + 0x1c8,*puVar7);
    if (iVar2 == 0) {
      iVar8 = *(int *)(resource_context + 4);
      iVar3 = *(int *)(resource_context + 0x10);
      iVar2 = *(int *)(iVar8 + 0x20);
      if (*(int *)(iVar8 + 0x1c) == 1) {
        iVar2 = iVar2 + -0x10;
      }
      initialize_memory_buffer_with_zero_fill(iVar3 + 0x2c0);
      initialize_ble_connection_with_timeout_and_state_management
                (iVar3 + 0x2c0,*(int *)(iVar8 + 0x24) * 0x400 + 0x2002a268,0x400,iVar2,0);
      initialize_data_structure_with_validation(iVar3 + 0x2b0,&LAB_0007eb1c_1);
      pcVar5 = *(code **)(*(int *)(*(int *)(iVar8 + 0x14) + 8) + 4);
      if (pcVar5 == (code *)0x0) {
LAB_0004ce44:
        iVar2 = -0x58;
      }
      else {
        iVar2 = (*pcVar5)(*(int *)(iVar8 + 0x14),*(undefined4 *)(iVar8 + 0x18),&DAT_0007eb11,iVar3);
        if (iVar2 == 0) {
          pcVar5 = *(code **)(*(int *)(*(int *)(iVar8 + 0x14) + 8) + 0x10);
          if (pcVar5 == (code *)0x0) goto LAB_0004ce44;
          iVar2 = (*pcVar5)(*(int *)(iVar8 + 0x14),*(undefined4 *)(iVar8 + 0x18),1);
          if (iVar2 == 0) {
            *(undefined4 *)(iVar6 + 0x1a8) = 0x4cefd;
            *(undefined4 *)(iVar6 + 0x1ac) = 0x7ecc5;
            iVar2 = manage_resource_buffer_allocation
                              (iVar6,*(undefined4 *)(iVar6 + 0x3b8),puVar7[10],
                               *(undefined4 *)(iVar6 + 0x268),iVar6 + 0x1c8,
                               *(undefined4 *)(iVar6 + 0x208),*(undefined4 *)(iVar6 + 0x210),0x7eb7f
                              );
            if (iVar2 == 0) {
              iVar3 = validate_and_process_audio_data_structure(iVar6 + 0xe0);
              *(int *)(iVar6 + 0x3c0) = iVar3;
              if (-1 < iVar3) {
                iVar6 = 2;
                goto LAB_0004cec0;
              }
              iVar2 = -0x16;
            }
          }
        }
      }
    }
  }
  iVar6 = 0;
LAB_0004cec0:
  atomic_exchange_value(ptr,iVar6);
  return iVar2;
}



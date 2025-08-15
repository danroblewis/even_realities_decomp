/*
 * Function: process_hardware_interrupts_and_dispatch_callbacks
 * Entry:    00065b9c
 * Prototype: undefined process_hardware_interrupts_and_dispatch_callbacks()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_hardware_interrupts_and_dispatch_callbacks(void)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  uint local_34;
  int local_30 [3];
  
  uVar6 = clear_hardware_registers_and_track_changes(_DAT_5000d304 & 0xff | 0x80000000);
  if ((int)uVar6 < 0) {
    local_30[0] = _DAT_50842520;
    local_30[1] = _DAT_50842820;
LAB_00065bce:
    iVar12 = 0;
    piVar11 = local_30;
    local_30[0] = _DAT_50842520;
    local_30[1] = _DAT_50842820;
    do {
      while (iVar8 = *piVar11, iVar8 != 0) {
        bVar3 = (byte)iVar8;
        bVar4 = (byte)((uint)iVar8 >> 8);
        bVar5 = (byte)((uint)iVar8 >> 0x10);
        bVar2 = (byte)((uint)iVar8 >> 0x18);
        uVar9 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                         << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                      bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                        0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                              bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                        (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1)
                                         << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                      bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8
                        | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                           bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                         bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                       bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) |
                (uint)(byte)" 00000000000000"[iVar12 + 0xf] << 5;
        uVar14 = calculate_bit_offset_with_lookup(uVar9);
        uVar10 = (uint)((ulonglong)uVar14 >> 0x20);
        uVar1 = *(ushort *)((int)&DAT_20002bc0 + ((int)uVar14 + 8) * 2);
        uVar7 = uVar10 >> 3;
        *(byte *)((int)piVar11 + uVar7) =
             *(byte *)((int)piVar11 + uVar7) & ~(byte)(1 << (uVar10 & 7));
        local_34 = uVar9;
        iVar8 = process_data_with_validation_and_error_handling(&local_34);
        uVar10 = ((uint)uVar1 << 0x1b) >> 0x1d;
        uVar7 = (uint)(*(int *)(iVar8 + (local_34 + 0x80) * 4) << 0xe) >> 0x1e;
        if ((int)((uint)(uVar1 >> 2) << 0x1d) < 0) {
          dispatch_callback_based_on_bit_status(uVar9,uVar10);
          local_34 = uVar9;
          iVar8 = process_data_with_validation_and_error_handling(&local_34);
          if (uVar7 == (uint)(*(int *)(iVar8 + (local_34 + 0x80) * 4) << 0xe) >> 0x1e) {
            configure_hardware_registers_wrapper(uVar9,0);
            configure_hardware_registers_wrapper(uVar9,uVar7);
          }
        }
        else {
          if (uVar7 == 2) {
            configure_hardware_registers_wrapper(uVar9,3);
            bVar13 = (uVar10 & 5) == 1;
LAB_00065ca4:
            if (!bVar13) goto LAB_00065c6a;
          }
          else {
            configure_hardware_registers_wrapper(uVar9,2);
            if (uVar10 != 3) {
              if (uVar7 != 3) goto LAB_00065c6a;
              bVar13 = uVar10 == 2;
              goto LAB_00065ca4;
            }
          }
          dispatch_callback_based_on_bit_status(uVar9,uVar10);
        }
LAB_00065c6a:
        local_34 = uVar9;
        iVar8 = process_data_with_validation_and_error_handling(&local_34);
        *(int *)(iVar8 + 0x20) = 1 << (local_34 & 0xff);
      }
      piVar11 = piVar11 + 1;
      if (iVar12 != 0) goto LAB_00065cc8;
      iVar12 = 1;
    } while( true );
  }
LAB_00065cee:
  for (; uVar6 != 0; uVar6 = uVar6 & ~(1 << iVar12)) {
    bVar3 = (byte)uVar6;
    bVar4 = (byte)(uVar6 >> 8);
    bVar5 = (byte)(uVar6 >> 0x10);
    bVar2 = (byte)(uVar6 >> 0x18);
    iVar12 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) <<
                                      1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                   bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18
                     | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                        << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                     bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                       0x10 | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                               bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                             bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                     (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) <<
                                      1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                   bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7));
    iVar8 = iVar12 * 4;
    dispatch_callback_based_on_bit_status
              ((uint)(*(int *)(iVar8 + 0x5000d510) << 0x12) >> 0x1a,
               (uint)(*(int *)(iVar8 + 0x5000d510) << 0xe) >> 0x1e);
  }
  return;
LAB_00065cc8:
  clear_hardware_registers_and_track_changes(0x80000000);
  local_30[0] = _DAT_50842520;
  local_30[1] = _DAT_50842820;
  if (_DAT_50842520 == 0 && _DAT_50842820 == 0) goto code_r0x00065ce8;
  goto LAB_00065bce;
code_r0x00065ce8:
  uVar6 = uVar6 & 0x7fffffff;
  goto LAB_00065cee;
}



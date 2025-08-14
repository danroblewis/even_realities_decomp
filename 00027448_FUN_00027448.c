/*
 * Function: FUN_00027448
 * Entry:    00027448
 * Prototype: undefined FUN_00027448()
 */


uint FUN_00027448(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  iVar1 = get_system_ready_state();
  uVar8 = 0;
  if (iVar1 != 1) {
    while (DAT_20018d8c != '\0') {
      uVar8 = uVar8 + 1;
      if (uVar8 == 2000) {
        DAT_20018d8c = 0;
        return 2000;
      }
      FUN_0007cb8e(1);
    }
    DAT_20018d8c = 1;
    uVar8 = uVar8 & 0xffff;
    *(char *)(param_1 + 0x6e1) = *(char *)(param_1 + 0x6e1) + '\x01';
    *(byte *)(param_1 + 0x6cc) = (byte)param_2 & 0x3f | 0x80;
    puVar9 = (undefined4 *)(param_1 + 0x6cc);
    *(undefined1 *)(param_1 + 0x6cd) = *(undefined1 *)(param_1 + 0xfcf);
    *(undefined1 *)(param_1 + 0x6ce) = *(undefined1 *)(param_1 + 0xfd0);
    *(undefined1 *)(param_1 + 0x6cf) = *(undefined1 *)(param_1 + 0xfd1);
    *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_1 + 0xfe0);
    *(undefined2 *)(param_1 + 0x6dc) = *(undefined2 *)(param_1 + 0xfe4);
    *(undefined1 *)(param_1 + 0x6d0) = *(undefined1 *)(param_1 + 0xfc0);
    if (param_2 - 0xbU < 2) {
      DAT_20018c6f = 4;
      puVar4 = puVar9;
      puVar7 = &DAT_20018c70;
      do {
        puVar3 = puVar4 + 1;
        puVar6 = puVar7 + 1;
        *puVar7 = *puVar4;
        puVar4 = puVar3;
        puVar7 = puVar6;
      } while (puVar3 != (undefined4 *)(param_1 + 0x6e0));
      *(undefined2 *)puVar6 = *(undefined2 *)puVar3;
      validate_memory_bounds(0x20018c71,param_3,param_4,0xfa);
      uVar2 = 0xdc;
      *(undefined1 *)(param_1 + 0x105a) = 1;
      pcVar5 = *(code **)(param_1 + 0x774);
    }
    else {
      if ((param_3 != 0) && (param_4 != 0)) {
        if (1 < param_4) {
          param_4 = 2;
        }
        memcpy(param_1 + 0x6df,param_3,param_4);
      }
      if (param_2 == 1) {
        DAT_20018d80 = *(undefined1 *)(param_1 + 0x6e1);
        iVar1 = memcmp_byte_arrays(&DAT_20018d6b,puVar9,0x16);
        if (iVar1 == 0) {
          DAT_20018d8c = 0;
          return uVar8;
        }
        DAT_20018c6f = 4;
        puVar4 = puVar9;
        puVar7 = &DAT_20018c70;
        do {
          puVar3 = puVar4 + 1;
          puVar6 = puVar7 + 1;
          *puVar7 = *puVar4;
          puVar4 = puVar3;
          puVar7 = puVar6;
        } while (puVar3 != (undefined4 *)(param_1 + 0x6e0));
      }
      else {
        DAT_20018c6f = 4;
        puVar4 = puVar9;
        puVar7 = &DAT_20018c70;
        do {
          puVar3 = puVar4 + 1;
          puVar6 = puVar7 + 1;
          *puVar7 = *puVar4;
          puVar4 = puVar3;
          puVar7 = puVar6;
        } while (puVar3 != (undefined4 *)(param_1 + 0x6e0));
      }
      uVar2 = 0x21;
      *(undefined2 *)puVar6 = *(undefined2 *)puVar3;
      *(undefined1 *)(param_1 + 0x105a) = 1;
      pcVar5 = *(code **)(param_1 + 0x774);
    }
    (*pcVar5)(&DAT_20018c6f,uVar2);
    while (*(char *)(param_1 + 0x105a) != '\x02') {
      uVar8 = uVar8 + 1 & 0xffff;
      if (uVar8 == 2000) {
        if (param_2 != 1) {
          DAT_20018d8c = 0;
          return 2000;
        }
        fill_memory_buffer(&DAT_20018d6b,0,0x16);
        DAT_20018d8c = 0;
        return 2000;
      }
      FUN_0007cb8e(1);
    }
    if (param_2 == 1) {
      puVar4 = &DAT_20018d6b;
      do {
        puVar3 = puVar9 + 1;
        puVar7 = puVar4 + 1;
        *puVar4 = *puVar9;
        puVar4 = puVar7;
        puVar9 = puVar3;
      } while (puVar3 != (undefined4 *)(param_1 + 0x6e0));
      *(undefined2 *)puVar7 = *(undefined2 *)puVar3;
    }
  }
  DAT_20018d8c = 0;
  return uVar8;
}



/*
 * Function: printf_format_string
 * Entry:    00076ed4
 * Prototype: undefined printf_format_string()
 */


/* WARNING: Removing unreachable block (ram,0x0007707c) */

int printf_format_string(int param_1,undefined *param_2,byte *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint *local_8c;
  uint local_88;
  uint local_84;
  undefined4 uStack_80;
  uint local_7c;
  int local_74;
  byte local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_45;
  undefined4 local_30;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    initialize_buffer_structure();
  }
  if (param_2 == &DAT_0009871c) {
    param_2 = *(undefined **)(param_1 + 4);
  }
  else if (param_2 == &DAT_000986fc) {
    param_2 = *(undefined **)(param_1 + 8);
  }
  else if (param_2 == &DAT_000986dc) {
    param_2 = *(undefined **)(param_1 + 0xc);
  }
  if ((-1 < *(int *)(param_2 + 100) << 0x1f) &&
     (-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x16))) {
    acquire_mutex(*(undefined4 *)(param_2 + 0x58));
  }
  if (((-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x1c)) || (*(int *)(param_2 + 0x10) == 0)) &&
     (iVar1 = FUN_00077d54(param_1,param_2), iVar1 != 0)) {
    if ((-1 < *(int *)(param_2 + 100) << 0x1f) &&
       (-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x16))) {
      release_mutex(*(undefined4 *)(param_2 + 0x58));
    }
    return -1;
  }
  local_74 = 0;
  local_6f = 0x20;
  local_6e = 0x30;
  pbVar7 = param_3;
  local_8c = param_4;
LAB_00076f6a:
  pbVar6 = pbVar7;
  if (*pbVar6 != 0) goto code_r0x00076f72;
  goto LAB_00076f76;
code_r0x00076f72:
  pbVar7 = pbVar6 + 1;
  if (*pbVar6 == 0x25) {
LAB_00076f76:
    iVar1 = (int)pbVar6 - (int)param_3;
    if (iVar1 != 0) {
      iVar2 = write_literal_text_to_buffer(param_1,param_2,param_3,iVar1);
      if (iVar2 == -1) {
LAB_000770da:
        if ((-1 < *(int *)(param_2 + 100) << 0x1f) &&
           (-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x16))) {
          release_mutex(*(undefined4 *)(param_2 + 0x58));
        }
        if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x19) < 0) {
          return -1;
        }
        return local_74;
      }
      local_74 = local_74 + iVar1;
    }
    if (*pbVar6 == 0) goto LAB_000770da;
    local_88 = 0;
    local_7c = 0;
    local_45 = 0;
    local_30 = 0;
    local_84 = 0xffffffff;
    uStack_80 = 0;
    pbVar7 = pbVar6 + 1;
    while( true ) {
      pbVar6 = pbVar7 + 1;
      iVar1 = find_character_in_string("#-0+ ",*pbVar7,5);
      if (iVar1 == 0) break;
      local_88 = 1 << (iVar1 - 0xf8b6bU & 0xff) | local_88;
      pbVar7 = pbVar6;
    }
    if ((int)(local_88 << 0x1b) < 0) {
      local_45 = 0x20;
    }
    if ((int)(local_88 << 0x1c) < 0) {
      local_45 = 0x2b;
    }
    if (*pbVar7 == 0x2a) {
      puVar3 = local_8c + 1;
      uVar5 = *local_8c;
      local_8c = puVar3;
      if ((int)uVar5 < 0) {
        local_88 = local_88 | 2;
        uVar5 = -uVar5;
      }
    }
    else {
      bVar4 = false;
      uVar5 = local_7c;
      pbVar6 = pbVar7;
      while( true ) {
        if (9 < *pbVar6 - 0x30) break;
        uVar5 = uVar5 * 10 + (*pbVar6 - 0x30);
        bVar4 = true;
        pbVar6 = pbVar6 + 1;
      }
      if (!bVar4) {
        uVar5 = local_7c;
      }
    }
    local_7c = uVar5;
    if (*pbVar6 == 0x2e) {
      if (pbVar6[1] == 0x2a) {
        pbVar6 = pbVar6 + 2;
        uVar5 = *local_8c;
        local_8c = local_8c + 1;
        local_84 = uVar5 | (int)uVar5 >> 0x1f;
      }
      else {
        bVar4 = false;
        uVar5 = 0;
        local_84 = 0;
        while( true ) {
          pbVar6 = pbVar6 + 1;
          if (9 < *pbVar6 - 0x30) break;
          uVar5 = uVar5 * 10 + (*pbVar6 - 0x30);
          bVar4 = true;
        }
        if (bVar4) {
          local_84 = uVar5;
        }
      }
    }
    iVar1 = find_character_in_string("hlL",*pbVar6,3);
    if (iVar1 != 0) {
      pbVar6 = pbVar6 + 1;
      local_88 = local_88 | 0x40 << (iVar1 - 0xf8b71U & 0xff);
    }
    param_3 = pbVar6 + 1;
    local_70 = *pbVar6;
    iVar1 = find_character_in_string("efgEFG",local_70,6);
    if (iVar1 == 0) {
      iVar1 = format_integer_for_printf(param_1,&local_88,param_2,0x86cb7,&local_8c);
    }
    else {
      iVar1 = format_float_for_printf(param_1,&local_88,param_2,0x86cb7,&local_8c);
    }
    if (iVar1 == -1) goto LAB_000770da;
    local_74 = local_74 + iVar1;
    pbVar7 = param_3;
  }
  goto LAB_00076f6a;
}



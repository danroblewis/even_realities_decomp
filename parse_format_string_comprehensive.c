/*
 * Function: parse_format_string_comprehensive
 * Entry:    00078f88
 * Prototype: undefined parse_format_string_comprehensive()
 */


/* WARNING: Removing unreachable block (ram,0x00079250) */

int parse_format_string_comprehensive
              (undefined4 param_1,undefined4 *param_2,byte *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 *local_2a8;
  undefined1 auStack_2a4 [256];
  uint local_1a4;
  undefined4 local_1a0;
  uint local_19c;
  int local_198;
  int local_194;
  undefined1 *local_190;
  int local_18c;
  undefined1 *local_28;
  code *local_24;
  
  local_198 = 0;
  local_194 = 0;
  local_28 = &LAB_000877ec_1;
  local_24 = (code *)0x87863;
  local_2a8 = param_4;
  local_190 = auStack_2a4;
LAB_00078fae:
  while( true ) {
    while( true ) {
      uVar3 = (uint)*param_3;
      if (uVar3 == 0) {
        return local_198;
      }
      pbVar4 = param_3 + 1;
      uVar2 = (byte)(&DAT_000f8a6b)[uVar3] & 8;
      if (((&DAT_000f8a6b)[uVar3] & 8) == 0) break;
      while (((param_3 = pbVar4, 0 < (int)param_2[1] ||
              (iVar1 = (*local_24)(param_1,param_2), iVar1 == 0)) &&
             ((int)((uint)(byte)(&DAT_000f8a6b)[*(byte *)*param_2] << 0x1c) < 0))) {
        local_194 = local_194 + 1;
        *param_2 = (byte *)*param_2 + 1;
        param_2[1] = param_2[1] + -1;
      }
    }
    if (uVar3 == 0x25) break;
LAB_00078ff8:
    if (((int)param_2[1] < 1) && (iVar1 = (*local_24)(param_1,param_2), iVar1 != 0))
    goto LAB_00079138;
    if (*(byte *)*param_2 != uVar3) {
      return local_198;
    }
    *param_2 = (byte *)*param_2 + 1;
    param_2[1] = param_2[1] + -1;
    local_194 = local_194 + 1;
    param_3 = pbVar4;
  }
  local_1a4 = uVar2;
  local_19c = uVar2;
  if (param_3[1] == 0x2a) {
    local_1a4 = 0x10;
    pbVar4 = param_3 + 2;
  }
  while( true ) {
    uVar3 = (uint)*pbVar4;
    if (9 < uVar3 - 0x30) break;
    local_19c = (local_19c * 10 + uVar3) - 0x30;
    pbVar4 = pbVar4 + 1;
  }
  iVar1 = find_character_in_string("hlL",uVar3,3);
  if (iVar1 != 0) {
    local_1a4 = 1 << (iVar1 - 0xf8b71U & 0xff) | local_1a4;
    pbVar4 = pbVar4 + 1;
  }
  param_3 = pbVar4 + 1;
  uVar3 = (uint)*pbVar4;
  if (uVar3 < 0x79) {
    if (0x57 < uVar3) {
      switch(uVar3) {
      case 0x58:
      case 0x78:
        local_1a4 = local_1a4 | 0x200;
        local_1a0 = 0x10;
        goto LAB_00079194;
      default:
        goto switchD_00079098_caseD_59;
      case 0x5b:
        param_3 = (byte *)format_float_digits(auStack_2a4,param_3);
        local_1a4 = local_1a4 | 0x40;
        local_18c = 1;
        break;
      case 99:
        local_1a4 = local_1a4 | 0x40;
        local_18c = 0;
        break;
      case 100:
      case 0x75:
        local_1a0 = 10;
LAB_00079194:
        if (0x6e < uVar3) goto LAB_00079152;
LAB_000791a0:
        local_18c = 3;
        break;
      case 0x65:
      case 0x66:
      case 0x67:
switchD_00079098_caseD_65:
        local_18c = 5;
        break;
      case 0x69:
        local_1a0 = 0;
        goto LAB_000791a0;
      case 0x6e:
        if (-1 < (int)(local_1a4 << 0x1b)) {
          if ((local_1a4 & 1) == 0) {
            *(int *)*local_2a8 = local_194;
            local_2a8 = local_2a8 + 1;
          }
          else {
            *(short *)*local_2a8 = (short)local_194;
            local_2a8 = local_2a8 + 1;
          }
        }
        goto LAB_00078fae;
      case 0x6f:
        local_1a0 = 8;
        goto LAB_00079152;
      case 0x70:
        local_1a4 = local_1a4 | 0x220;
        local_1a0 = 0x10;
LAB_00079152:
        local_18c = 4;
        break;
      case 0x73:
        local_18c = 2;
      }
LAB_00079156:
      if (((int)param_2[1] < 1) && (iVar1 = (*local_24)(param_1,param_2), iVar1 != 0))
      goto LAB_00079138;
      if (-1 < (int)(local_1a4 << 0x19)) {
        while ((int)((uint)(byte)(&DAT_000f8a6b)[*(byte *)*param_2] << 0x1c) < 0) {
          local_194 = local_194 + 1;
          iVar1 = param_2[1];
          param_2[1] = iVar1 + -1;
          if (iVar1 + -1 < 1) {
            iVar1 = (*local_24)(param_1,param_2);
            if (iVar1 != 0) goto LAB_00079138;
          }
          else {
            *param_2 = (byte *)*param_2 + 1;
          }
        }
      }
      if (local_18c < 3) {
        iVar1 = process_string_format_with_validation(param_1,&local_1a4,param_2,&local_2a8);
      }
      else {
        if (4 < local_18c) goto LAB_00078fae;
        iVar1 = format_float_digits_with_validation(param_1,&local_1a4,param_2,&local_2a8);
      }
      if (iVar1 == 1) {
        return local_198;
      }
      if (iVar1 == 2) {
LAB_00079138:
        if ((local_198 == 0) || ((int)((uint)*(ushort *)(param_2 + 3) << 0x19) < 0)) {
LAB_00079140:
          local_198 = -1;
        }
        return local_198;
      }
      goto LAB_00078fae;
    }
    pbVar4 = param_3;
    if (uVar3 == 0x25) goto LAB_00078ff8;
    if (uVar3 < 0x26) {
      if (uVar3 != 0) goto switchD_00079098_caseD_59;
      goto LAB_00079140;
    }
    if (uVar3 - 0x45 < 3) goto switchD_00079098_caseD_65;
  }
switchD_00079098_caseD_59:
  local_18c = 3;
  local_1a0 = 10;
  goto LAB_00079156;
}



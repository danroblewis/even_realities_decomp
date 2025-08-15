/*
 * Function: process_data_with_compression_and_validation
 * Entry:    00050c54
 * Prototype: undefined process_data_with_compression_and_validation()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint process_data_with_compression_and_validation(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_50;
  char *local_4c;
  uint uStack_48;
  int local_3c;
  uint local_38 [2];
  byte local_30;
  uint local_2c;
  
  uVar4 = 0;
  local_3c = param_2;
  while( true ) {
    if (local_3c <= (int)uVar4) {
      return param_3;
    }
    uVar3 = param_1[1];
    if (uVar3 != 0) break;
LAB_00050d22:
    uVar4 = uVar4 + 1;
    param_1 = param_1 + 3;
  }
  if (((uVar3 < 0x20) || ((uVar3 & 0x1f) != 0)) || (uVar5 = *param_1, (uVar5 & 0x1f) != 0)) {
    local_4c = "Partition %u: sanity check failed.";
    uStack_48 = uVar4;
    goto LAB_00050cc2;
  }
  uVar1 = extract_float_exponent(uVar5);
  uVar3 = extract_float_exponent(uVar3 + uVar5 + -1);
  if (uVar1 == uVar3) {
    if ((uVar1 != 0xffffffea) && ((int)uVar1 < (int)param_3)) {
      uVar5 = _DAT_e000eda0 | 0x1f;
      uVar3 = *param_1;
      uVar6 = (param_1[1] + uVar3) - 1;
      _DAT_e000ed98 = uVar1;
      if ((_DAT_e000ed9c & 0xffffffe0) == uVar3) {
        if (uVar5 == uVar6) {
          process_float_mantissa(uVar1 & 0xff,param_1);
          goto LAB_00050d22;
        }
        _DAT_e000ed9c = _DAT_e000ed9c & 0x1f | param_1[1] + uVar3 & 0xffffffe0;
LAB_00050d44:
        iVar2 = process_float_mantissa(param_3 & 0xff,param_1);
LAB_00050d48:
        if (iVar2 == -0x16) {
          return 0xffffffea;
        }
      }
      else {
        uVar3 = uVar3 - 1 & 0xffffffe0;
        if (uVar5 == uVar6) {
          _DAT_e000eda0 = _DAT_e000eda0 & 0x1f | uVar3;
          goto LAB_00050d44;
        }
        _DAT_e000eda0 = uVar3 | _DAT_e000eda0 & 0x1f;
        iVar2 = process_float_mantissa(param_3 & 0xff,param_1);
        if (iVar2 == -0x16) {
          return 0xffffffea;
        }
        local_30 = (byte)_DAT_e000ed9c & 0x1f | (byte)((_DAT_e000eda0 >> 1 & 7) << 5);
        local_38[0] = *param_1 + param_1[1];
        uVar3 = iVar2 + 1U & 0xff;
        local_2c = ((local_38[0] & 0xffffffe0) + (uVar5 - 1)) - uVar6 & 0xffffffe0;
        if (7 < uVar3) {
          _DAT_e000ed98 = uVar1;
          iVar2 = compress_data_with_validation();
          goto LAB_00050d48;
        }
        _DAT_e000ed98 = uVar1;
        iVar2 = process_data_with_parameter_validation_alt6(uVar3,local_38);
      }
      param_3 = iVar2 + 1;
      goto LAB_00050d22;
    }
  }
  else {
    uVar1 = 0xffffffea;
  }
  local_4c = "Invalid underlying region index %u";
  uStack_48 = uVar1;
LAB_00050cc2:
  local_50 = 3;
  process_and_compress_data_with_validation(&DAT_00088228,0x1840,&local_50,0);
  return 0xffffffea;
}



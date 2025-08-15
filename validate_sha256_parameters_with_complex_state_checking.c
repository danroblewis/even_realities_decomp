/*
 * Function: validate_sha256_parameters_with_complex_state_checking
 * Entry:    0007b468
 * Prototype: undefined validate_sha256_parameters_with_complex_state_checking()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 validate_sha256_parameters_with_complex_state_checking(int param_1)

{
  int iVar1;
  uint extraout_r1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  iVar1 = _DAT_50845910;
  if (param_1 == 0) {
    return 0xf10000;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 < 4) {
    if (iVar3 < 0) {
      return 0xf10001;
    }
  }
  else if (1 < iVar3 - 6U) {
    return 0xf10001;
  }
  if (*(uint *)(param_1 + 0x38) < 2) {
    if (1 < *(uint *)(param_1 + 0x5c)) {
      return 0xf10003;
    }
    if (*(uint *)(param_1 + 0x60) < 2) {
      do {
      } while (_DAT_50845910 != 0);
      set_system_parameter_with_validation(0xffffffff);
      set_system_parameter_simple(_DAT_50845a04 & 0xfffff7ff);
      _DAT_50845900 = 1;
      _DAT_508454bc = iVar1;
      bVar5 = (*(uint *)(param_1 + 0x34) & 0xfffffffb) != 3;
      uVar2 = extraout_r1;
      if (bVar5) {
        uVar2 = *(uint *)(param_1 + 0x38);
      }
      if (bVar5) {
        uVar2 = uVar2 & 1;
      }
      else {
        uVar2 = 0;
      }
      if (*(uint *)(param_1 + 0x30) < 3) {
        _DAT_508454c0 =
             (*(uint *)(param_1 + 0x34) & 7) << 2 | *(uint *)(param_1 + 0x30) << 0xc | uVar2;
        uVar4 = 0;
        if (*(int *)(param_1 + 0x34) == 7) {
          _DAT_5084547c = 1;
        }
      }
      else {
        uVar4 = 0xf10006;
      }
    }
    else {
      uVar4 = 0xf10004;
    }
    return uVar4;
  }
  return 0xf10002;
}



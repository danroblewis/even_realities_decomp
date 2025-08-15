/*
 * Function: initialize_sha256_constants_with_fallback_values
 * Entry:    0007afec
 * Prototype: undefined initialize_sha256_constants_with_fallback_values()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 initialize_sha256_constants_with_fallback_values(int *param_1,int *param_2)

{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (*param_2 == 0x1c)) {
    iVar1 = _DAT_00ff0c10;
    if (_DAT_00ff0c10 == -1) {
      iVar1 = 0x5dc;
    }
    *param_1 = iVar1;
    iVar1 = _DAT_00ff0c14;
    if (_DAT_00ff0c14 == -1) {
      iVar1 = 0x5dc;
    }
    param_1[1] = iVar1;
    iVar1 = _DAT_00ff0c18;
    if (_DAT_00ff0c18 == -1) {
      iVar1 = 0x834;
    }
    param_1[2] = iVar1;
    iVar1 = _DAT_00ff0c1c;
    if (_DAT_00ff0c1c == -1) {
      iVar1 = 0x834;
    }
    param_1[3] = iVar1;
    iVar1 = _DAT_00ff0c00;
    if (_DAT_00ff0c00 == -1) {
      iVar1 = 0x90;
    }
    param_1[4] = iVar1;
    iVar1 = _DAT_00ff0c04;
    if (_DAT_00ff0c04 == -1) {
      iVar1 = 0x51;
    }
    param_1[5] = iVar1;
    iVar1 = _DAT_00ff0c08;
    if (_DAT_00ff0c08 == -1) {
      iVar1 = 0x337;
    }
    param_1[6] = iVar1;
    return 0;
  }
  return 1;
}



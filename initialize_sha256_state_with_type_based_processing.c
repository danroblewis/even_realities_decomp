/*
 * Function: initialize_sha256_state_with_type_based_processing
 * Entry:    0007b530
 * Prototype: undefined initialize_sha256_state_with_type_based_processing()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int initialize_sha256_state_with_type_based_processing
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0xf10000;
  }
  if (*(char *)(param_1 + 0x3c) == '\0') {
    if (*(int *)(param_1 + 0x30) - 1U < 2) {
      _DAT_50845410 = *(undefined4 *)(param_1 + 0x20);
      _DAT_50845414 = *(undefined4 *)(param_1 + 0x24);
      if (*(int *)(param_1 + 0x30) == 2) {
        _DAT_50845418 = *(undefined4 *)(param_1 + 0x28);
        _DAT_5084541c = *(undefined4 *)(param_1 + 0x2c);
      }
    }
    _DAT_50845400 = *(undefined4 *)(param_1 + 0x10);
    _DAT_50845404 = *(undefined4 *)(param_1 + 0x14);
    _DAT_50845408 = *(undefined4 *)(param_1 + 0x18);
    _DAT_5084540c = *(undefined4 *)(param_1 + 0x1c);
    return 0;
  }
  if (*(char *)(param_1 + 0x3c) == '\x02') {
    iVar1 = validate_sha256_parameter_with_size_checking
                      (*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x30),param_3,2,
                       param_4);
    if (iVar1 == 0) {
      _DAT_50845400 = *DAT_20002f3c;
      _DAT_50845404 = DAT_20002f3c[1];
      _DAT_50845408 = DAT_20002f3c[2];
      _DAT_5084540c = DAT_20002f3c[3];
      _DAT_50845410 = DAT_20002f3c[4];
      _DAT_50845414 = DAT_20002f3c[5];
      _DAT_50845418 = DAT_20002f3c[6];
      _DAT_5084541c = DAT_20002f3c[7];
      iVar1 = FUN_0007bc24(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x30));
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  else {
    iVar1 = 0xf10009;
  }
  _DAT_50845400 = *DAT_20002f3c;
  _DAT_50845404 = DAT_20002f3c[1];
  _DAT_50845408 = DAT_20002f3c[2];
  _DAT_5084540c = DAT_20002f3c[3];
  _DAT_50845410 = DAT_20002f3c[4];
  _DAT_50845414 = DAT_20002f3c[5];
  _DAT_50845418 = DAT_20002f3c[6];
  _DAT_5084541c = DAT_20002f3c[7];
  return iVar1;
}



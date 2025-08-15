/*
 * Function: validate_ble_connection_parameters_and_characteristics
 * Entry:    00083002
 * Prototype: undefined validate_ble_connection_parameters_and_characteristics()
 */


undefined1
validate_ble_connection_parameters_and_characteristics
          (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  int extraout_r2;
  int extraout_r3;
  
  if ((param_2 != 0) && ((*(ushort *)(param_2 + 0xe) & 0x24) != 0)) {
    bVar2 = *(byte *)(param_1 + 0x14);
    if (*(byte *)(param_1 + 0xd) <= *(byte *)(param_1 + 0x14)) {
      bVar2 = *(byte *)(param_1 + 0xd);
    }
    if ((bVar2 < *(byte *)(param_2 + 0xc)) ||
       (((int)((uint)*(ushort *)(param_2 + 0xe) << 0x1a) < 0 &&
        (iVar1 = extract_bit_from_value(param_1 + 4,5,param_2,param_1,param_4),
        param_2 = extraout_r2, param_1 = extraout_r3, iVar1 == 0)))) {
      return 0;
    }
    if ((int)((uint)*(byte *)(param_2 + 0xd) << 0x1f) < 0) {
      if (*(char *)(param_1 + 8) == '\0') {
        return 0;
      }
      return 1;
    }
  }
  return 1;
}



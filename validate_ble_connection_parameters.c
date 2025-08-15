/*
 * Function: validate_ble_connection_parameters
 * Entry:    00080f14
 * Prototype: undefined validate_ble_connection_parameters()
 */


undefined4 validate_ble_connection_parameters(ushort *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1[1];
  if ((((uVar2 < *param_1) || (*param_1 < 6)) || (0xc80 < uVar2)) ||
     ((499 < param_1[2] || (0xc76 < (param_1[3] - 10 & 0xffff))))) {
    uVar1 = 0;
  }
  else if (uVar2 * (ushort)(param_1[2] + 1) < (uint)param_1[3] << 2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



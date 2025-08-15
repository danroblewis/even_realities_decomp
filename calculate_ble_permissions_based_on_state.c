/*
 * Function: calculate_ble_permissions_based_on_state
 * Entry:    0005d568
 * Prototype: undefined calculate_ble_permissions_based_on_state()
 */


uint calculate_ble_permissions_based_on_state(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  if (DAT_2001d532 == '\0') {
    param_2 = param_2 & 7;
  }
  else {
    param_2 = param_2 & 0xf;
  }
  iVar1 = analyze_ble_connection_state(param_1);
  if (iVar1 == 3) {
    param_2 = param_2 & 0xb;
  }
  else {
    param_2 = param_2 | 4;
  }
  puVar2 = (uint *)(param_1 + 0x23c);
  if (*puVar2 == 0xffffffff) {
    *puVar2 = (uint)DAT_200035ae;
  }
  if (*puVar2 == 0) {
    param_2 = param_2 & 0xfe;
  }
  else {
    param_2 = param_2 | 1;
  }
  return param_2;
}



/*
 * Function: get_ble_connection_state
 * Entry:    0008148a
 * Prototype: undefined get_ble_connection_state()
 */


uint get_ble_connection_state(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xb);
  if ((uVar1 != 0) && (uVar1 = *(uint *)(param_1 + 0xc0), uVar1 != 0)) {
    uVar1 = (uint)*(byte *)(uVar1 + 0xc);
  }
  return uVar1;
}



/*
 * Function: calculate_ble_timeout_delay_with_validation
 * Entry:    00074b7c
 * Prototype: undefined calculate_ble_timeout_delay_with_validation()
 */


uint calculate_ble_timeout_delay_with_validation(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = BLE_CONNECTION_TIMEOUT_CONFIGURATION;
  if ((undefined4 **)BLE_CONNECTION_TIMEOUT_CONFIGURATION == &BLE_CONNECTION_TIMEOUT_CONFIGURATION)
  {
    get_ble_timing_offset();
  }
  else {
    uVar2 = get_ble_timing_offset();
    if (puVar1 != (undefined4 *)0x0) {
      uVar4 = puVar1[4] - uVar2;
      iVar3 = (puVar1[5] - ((int)uVar2 >> 0x1f)) - (uint)((uint)puVar1[4] < uVar2);
      if (iVar3 < (int)(uint)(uVar4 < 0x80000000)) {
        if (-1 < iVar3) {
          return uVar4;
        }
        return 0;
      }
    }
  }
  return 0x7fffffff;
}



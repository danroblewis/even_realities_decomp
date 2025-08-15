/*
 * Function: is_ble_uuid_valid_and_available
 * Entry:    00080f92
 * Prototype: undefined is_ble_uuid_valid_and_available()
 */


uint is_ble_uuid_valid_and_available(void)

{
  uint uVar1;
  
  uVar1 = find_ble_uuid_in_table();
  if ((uVar1 != 0) && (uVar1 = (uint)*(ushort *)(uVar1 + 0xe), uVar1 != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}



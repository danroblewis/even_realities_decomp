/*
 * Function: check_ble_connection_state_valid
 * Entry:    000736ec
 * Prototype: undefined check_ble_connection_state_valid()
 */


uint check_ble_connection_state_valid(int param_1)

{
  uint uVar1;
  
  if (*(ushort *)(param_1 + 0xe) < 0x80) {
    uVar1 = DAT_2000b48c;
    if (DAT_2000b48c == 0) goto LAB_00073712;
    if ((DAT_2000b488 <= *(char *)(param_1 + 0xe)) && ((*(byte *)(param_1 + 0xd) & 0x1f) == 0)) {
      uVar1 = param_1 + 0xdfff98e0;
      if (uVar1 != 0) {
        uVar1 = 1;
      }
      goto LAB_00073712;
    }
  }
  uVar1 = 0;
LAB_00073712:
  return uVar1 & 1;
}



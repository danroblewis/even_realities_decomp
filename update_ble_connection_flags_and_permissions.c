/*
 * Function: update_ble_connection_flags_and_permissions
 * Entry:    0008149a
 * Prototype: undefined update_ble_connection_flags_and_permissions()
 */


int update_ble_connection_flags_and_permissions
              (int param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xd) == '\a') {
    puVar1 = (uint *)(param_1 + 4);
    if ((int)((uint)param_2 << 0x18) < 0) {
      *puVar1 = *puVar1 | 0x800;
    }
    else {
      bt_connection_update_flags(puVar1,0xfffff7ff,param_3,(uint)param_2 << 0x18,param_4);
    }
    *(byte *)(param_1 + 10) = param_2 & 0x7f;
    iVar2 = validate_ble_attribute_permissions(param_1);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_1 + 9);
    }
  }
  else {
    iVar2 = -0x80;
  }
  return iVar2;
}



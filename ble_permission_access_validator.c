/*
 * Function: ble_permission_access_validator
 * Entry:    00082cba
 * Prototype: undefined ble_permission_access_validator()
 */


undefined4 ble_permission_access_validator(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)(param_2 + 0x12);
  if (((int)(param_3 << 0x1f) < 0) && (((uVar1 & 0x95) == 0 || (*(int *)(param_2 + 4) == 0)))) {
    return 2;
  }
  if (((int)(param_3 << 0x1e) < 0) && (((uVar1 & 0x12a) == 0 || (*(int *)(param_2 + 8) == 0)))) {
    return 3;
  }
  param_3 = param_3 & uVar1;
  if ((param_3 & 0x3c) == 0) {
LAB_00082d02:
    uVar3 = 0;
  }
  else {
    if (*(char *)(param_1 + 0xb) == '\0') {
      iVar2 = check_ble_security_level(param_1);
      if (iVar2 != 0) {
        return 0xf;
      }
    }
    else if ((((param_3 & 0x30) == 0) || (uVar4 = get_ble_property_value(param_1), 2 < uVar4)) &&
            (((param_3 & 0x180) == 0 ||
             ((*(int *)(param_1 + 0xc0) != 0 &&
              ((int)((uint)*(byte *)(*(int *)(param_1 + 0xc0) + 0xd) << 0x1b) < 0))))))
    goto LAB_00082d02;
    uVar3 = 5;
  }
  return uVar3;
}



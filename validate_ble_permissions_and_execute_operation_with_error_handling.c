/*
 * Function: validate_ble_permissions_and_execute_operation_with_error_handling
 * Entry:    00081c8c
 * Prototype: undefined validate_ble_permissions_and_execute_operation_with_error_handling()
 */


undefined4
validate_ble_permissions_and_execute_operation_with_error_handling
          (int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = ble_permission_access_validator(*param_3,param_1,0x12a,param_4,param_1,param_2);
  *(char *)(param_3 + 5) = (char)iVar2;
  if (iVar2 != 0) {
    return 0;
  }
  if (*(char *)(param_3 + 2) == '\0') {
    cVar1 = '\x02';
  }
  else {
    cVar1 = (*(char *)(param_3 + 2) == '\x18') * '\x04';
  }
  uVar3 = (**(code **)(param_1 + 8))
                    (*param_3,param_1,param_3[3],*(undefined2 *)(param_3 + 4),
                     *(undefined2 *)((int)param_3 + 0x12),cVar1);
  if ((int)uVar3 < 0) {
    if (0xffffff00 < uVar3) {
      cVar1 = -(char)uVar3;
      goto LAB_00081ce2;
    }
  }
  else if (uVar3 == *(ushort *)(param_3 + 4)) {
    *(undefined1 *)(param_3 + 5) = 0;
    return 1;
  }
  cVar1 = '\x0e';
LAB_00081ce2:
  *(char *)(param_3 + 5) = cVar1;
  return 0;
}



/*
 * Function: bt_connection_disconnect_with_state_management_and_callback_and_parameter_and_state_validation_and_callback_execution_and_parameter
 * Entry:    00058808
 * Prototype: undefined bt_connection_disconnect_with_state_management_and_callback_and_parameter_and_state_validation_and_callback_execution_and_parameter()
 */


bool bt_connection_disconnect_with_state_management_and_callback_and_parameter_and_state_validation_and_callback_execution_and_parameter
               (undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = *param_3;
  uVar6 = *(undefined4 *)(iVar7 + 8);
  iVar3 = compare_data_structures(*param_1,param_3[1],param_3,param_4,param_1,param_2,param_3);
  if (iVar3 == 0) {
    iVar3 = ble_permission_access_validator(uVar6,param_1,0x95);
    *(char *)(param_3 + 5) = (char)iVar3;
    if (iVar3 == 0) {
      iVar3 = find_last_element_in_linked_list(param_3[2]);
      puVar4 = (undefined2 *)ble_memory_allocation_utility(iVar3 + 0xc,2);
      param_3[4] = (int)puVar4;
      *puVar4 = (short)param_2;
      uVar5 = FUN_00081e2a(iVar7,param_1,param_3[2],0,0x81bd1,param_3);
      if ((int)uVar5 < 0) {
        if (uVar5 < 0xffffff01) {
          cVar2 = '\x0e';
        }
        else {
          cVar2 = -(char)uVar5;
        }
        *(char *)(param_3 + 5) = cVar2;
      }
      else if (param_3[4] != 0) {
        iVar3 = FUN_00081bc0(param_3[2]);
        if ((uint)*(ushort *)(iVar7 + 0x2e) < (uint)*(ushort *)(iVar7 + 0x1e)) {
          uVar5 = (uint)*(ushort *)(iVar7 + 0x2e) - iVar3;
        }
        else {
          uVar5 = (uint)*(ushort *)(iVar7 + 0x1e) - iVar3;
        }
        return *(byte *)param_3[3] < uVar5;
      }
    }
    else if (*(char *)param_3[3] != '\0') {
      *(undefined1 *)(param_3 + 5) = 0;
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



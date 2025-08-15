/*
 * Function: bt_connection_disconnect_with_validation_and_callback_and_parameter_and_state_validation_and_callback_execution
 * Entry:    00058750
 * Prototype: undefined bt_connection_disconnect_with_validation_and_callback_and_parameter_and_state_validation_and_callback_execution()
 */


undefined4
bt_connection_disconnect_with_validation_and_callback_and_parameter_and_state_validation_and_callback_execution
          (undefined4 *param_1,uint param_2,int *param_3,undefined4 param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  ushort local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  
  iVar6 = *param_3;
  _local_20 = CONCAT22(0x2800,(ushort)param_3 & 0xff00);
  local_1c = param_4;
  iVar3 = compare_data_structures(*param_1,&local_20,param_3,0x2800,param_1,param_2);
  uVar1 = (undefined2)param_2;
  if (iVar3 != 0) {
    uVar2 = (ushort)local_1c;
    local_1c = CONCAT22(0x2801,uVar2 & 0xff00);
    iVar3 = compare_data_structures(*param_1,&local_1c);
    if (iVar3 != 0) {
      iVar3 = param_3[4];
      if (iVar3 == 0) {
        return 1;
      }
      if (param_2 <= *(ushort *)(iVar3 + 2)) {
        return 1;
      }
      *(undefined2 *)(iVar3 + 2) = uVar1;
      return 1;
    }
  }
  iVar3 = compare_data_structures(*param_1,param_3[1]);
  if (iVar3 != 0) {
    param_3[4] = 0;
    return 1;
  }
  if (*(byte *)param_3[3] != 0) {
    uVar5 = (uint)*(ushort *)(param_3[2] + 0x10);
    if ((uint)*(ushort *)(iVar6 + 0x2e) < (uint)*(ushort *)(iVar6 + 0x1e)) {
      iVar3 = *(ushort *)(iVar6 + 0x2e) - uVar5;
    }
    else {
      iVar3 = *(ushort *)(iVar6 + 0x1e) - uVar5;
    }
    if (iVar3 < (int)(uint)*(byte *)param_3[3]) {
      return 0;
    }
  }
  puVar4 = (undefined2 *)FUN_0005f5d0(param_3[2] + 0xc,4);
  param_3[4] = (int)puVar4;
  *puVar4 = uVar1;
  *(undefined2 *)(param_3[4] + 2) = uVar1;
  iVar3 = FUN_00081e2a(iVar6,param_1,param_3[2],0,&LAB_00081d04_1,param_3);
  if (iVar3 < 0) {
    return 0;
  }
  if (param_3[4] != 0) {
    return 1;
  }
  return 0;
}



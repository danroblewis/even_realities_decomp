/*
 * Function: process_ble_characteristic_value_change
 * Entry:    00058a54
 * Prototype: undefined process_ble_characteristic_value_change()
 */


int process_ble_characteristic_value_change(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_28;
  char *local_24;
  
  piVar6 = *(int **)(param_2 + 0x18);
  iVar7 = *piVar6;
  if ((int)(param_1[0x48] << 0x1d) < 0) {
    if ((**(char **)(param_2 + 0xc) == -0x2e) &&
       (iVar4 = FUN_00083496(*(undefined4 *)*param_1), iVar4 != 0)) {
      local_24 = "Error signing data";
      local_28 = 2;
      FUN_00081ddc(&DAT_00088100,0x1040,&local_28);
      bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation_and_callback_execution
                (*(undefined4 *)(param_2 + 0x18));
      decrement_reference_count_and_cleanup_memory(param_2);
    }
    else {
      uVar2 = FUN_00083728(param_2 + 0xc);
      uVar1 = *(undefined2 *)(param_2 + 0x10);
      *piVar6 = (int)param_1;
      uVar5 = *(undefined4 *)*param_1;
      uVar3 = bt_connection_disconnect_with_validation_and_state_management_and_callback_execution_and_parameter_and_state_validation_and_callback
                        (**(undefined1 **)(param_2 + 0xc));
      if (5 < uVar3) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0",
                     "WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0x28b);
        DEBUG_PRINT2("\tUnknown op type 0x%02X\n",uVar3);
                    /* WARNING: Subroutine does not return */
        assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0x28b);
      }
      iVar4 = FUN_00081820(uVar5,4,param_2,(&PTR_FUN_000822bc_1_0008b29c)[uVar3],piVar6);
      if (iVar4 != 0) {
        if (iVar4 == -0x69) {
          local_24 = "Ran out of TX buffers or contexts.";
          local_28 = 2;
          FUN_00081ddc(&DAT_00088100,0x1040,&local_28);
        }
        *(undefined2 *)(param_2 + 0x10) = uVar1;
        *(uint *)(param_2 + 0xc) = *(int *)(param_2 + 0x14) + (uVar2 & 0xffff);
        *piVar6 = iVar7;
      }
    }
  }
  else {
    iVar4 = -0x16;
    local_24 = "ATT channel not connected";
    local_28 = 2;
    FUN_00081ddc(&DAT_00088100,0x1040,&local_28);
  }
  return iVar4;
}



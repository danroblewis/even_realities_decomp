/*
 * Function: process_ble_connection_cleanup_and_state_transition
 * Entry:    00059834
 * Prototype: undefined process_ble_connection_cleanup_and_state_transition()
 */


void process_ble_connection_cleanup_and_state_transition(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined8 uVar12;
  int local_30;
  undefined4 local_2c;
  int *local_20;
  undefined4 uStack_1c;
  
  puVar5 = (undefined4 *)param_1[-2];
  if (puVar5 != (undefined4 *)0x0) {
    local_20 = param_1;
    uStack_1c = param_2;
    FUN_00081de2(puVar5 + 0xc,param_1 + 0x62);
    uVar4 = extraout_r1;
    while (iVar1 = thunk_FUN_000727ac(param_1 + 0x48,uVar4,0,0), iVar1 != 0) {
      bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation_and_callback_execution
                (*(undefined4 *)(iVar1 + 0x18));
      decrement_reference_count_and_cleanup_memory(iVar1);
      uVar4 = extraout_r1_01;
    }
    if (param_1[0x47] != 0) {
      handle_ble_connection_state_change_with_callback(param_1 + -2,0,0,0xe);
    }
    param_1[-2] = 0;
    FUN_00081e14(param_1 + 0x46,2);
    if (puVar5[0xc] == 0) {
      while( true ) {
        uVar12 = remove_ble_connection_from_list(puVar5 + 10);
        uVar4 = (undefined4)((ulonglong)uVar12 >> 0x20);
        iVar1 = (int)uVar12;
        if (iVar1 == 0) break;
        bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation_and_callback_execution
                  (*(undefined4 *)(iVar1 + 0x18));
        decrement_reference_count_and_cleanup_memory(iVar1);
      }
      while (iVar1 = thunk_FUN_000727ac(puVar5 + 3,uVar4,0,0), iVar1 != 0) {
        bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation_and_callback_execution
                  (*(undefined4 *)(iVar1 + 0x18));
        decrement_reference_count_and_cleanup_memory(iVar1);
        uVar4 = extraout_r1_02;
      }
      while (puVar7 = (undefined4 *)puVar5[1], puVar7 != (undefined4 *)0x0) {
        uVar4 = *puVar7;
        puVar5[1] = uVar4;
        if (puVar7 == (undefined4 *)puVar5[2]) {
          puVar5[2] = uVar4;
        }
        if ((code *)puVar7[1] != (code *)0x0) {
          local_20 = (int *)puVar7[6];
          (*(code *)puVar7[1])(*puVar5,0xe,0);
        }
        cleanup_ble_connection_and_free_memory(puVar7);
      }
      *puVar5 = 0;
      enqueue_message_to_priority_queue(&DAT_20003738,puVar5);
      iVar1 = *param_1;
      iVar8 = iVar1 + 0x90;
      local_30 = iVar1;
      local_2c = extraout_r1_00;
      ble_handle_mapping_utility(1,0xffff,0x5a3c5,iVar1);
      FUN_00082f3a(*(undefined1 *)(iVar1 + 8),iVar8);
      iVar2 = FUN_00080f92(*(undefined1 *)(iVar1 + 8),iVar8);
      if (iVar2 != 0) {
        local_2c = CONCAT31(local_2c._1_3_,*(undefined1 *)(iVar1 + 8));
        local_30 = iVar8;
        ble_handle_mapping_utility(1,0xffff,&LAB_0005a2d4_1,&local_30);
      }
      iVar2 = find_ble_characteristic_by_handle(iVar1);
      if ((iVar2 != 0) && (piVar6 = *(int **)(iVar2 + 8), piVar6 != (int *)0x0)) {
        piVar9 = (int *)*piVar6;
        if (piVar9 != (int *)0x0) {
          piVar9 = piVar9 + -6;
        }
        piVar11 = (int *)0x0;
        piVar6 = piVar6 + -6;
        while( true ) {
          piVar10 = piVar9;
          FUN_000826f6(piVar6 + 5,0xfffffff7);
          iVar3 = FUN_00080f92(*(undefined1 *)(iVar1 + 8),iVar8);
          if ((iVar3 == 0) || (iVar3 = get_ble_handle_value(piVar6 + 5), iVar3 << 0x1f < 0)) {
            *(undefined2 *)(piVar6 + 4) = 0;
            FUN_000828e8(iVar1,iVar2,piVar11,piVar6);
          }
          else {
            if (*(char *)(iVar2 + 1) != '\0') {
              FUN_000828da(iVar2 + 1,iVar8);
            }
            piVar11 = piVar6 + 6;
          }
          if (piVar10 == (int *)0x0) break;
          piVar9 = (int *)piVar10[6];
          piVar6 = piVar10;
          if (piVar9 != (int *)0x0) {
            piVar9 = piVar9 + -6;
          }
        }
      }
      iVar2 = find_ble_attribute_by_handle(iVar1);
      if (iVar2 != 0) {
        iVar1 = FUN_00080f92(*(undefined1 *)(iVar1 + 8),iVar8);
        if (iVar1 != 0) {
          FUN_000828da(iVar2 + 1,iVar8);
          return;
        }
        initialize_ble_connection_data(iVar2);
        return;
      }
      return;
    }
  }
  return;
}



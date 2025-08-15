/*
 * Function: bt_connection_disconnect_with_validation_and_state_management_and_callback_execution
 * Entry:    0005757c
 * Prototype: undefined bt_connection_disconnect_with_validation_and_state_management_and_callback_execution()
 */


int bt_connection_disconnect_with_validation_and_state_management_and_callback_execution
              (undefined4 *param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  undefined8 uVar12;
  
  piVar10 = param_1 + 0xb;
  do {
    iVar4 = FUN_000816a2(piVar10);
    if (iVar4 == 0) {
      return -0xb;
    }
  } while (*piVar10 != iVar4);
  *piVar10 = iVar4 + -1;
  iVar4 = param_2 + 0xc;
  uVar5 = FUN_00083728(iVar4);
  uVar1 = *(ushort *)(param_2 + 0x10);
  if ((((uint)uVar1 + param_3 <= (uint)*(ushort *)(param_1 + 10)) &&
      (uVar6 = FUN_00083728(iVar4), (param_3 + 9U & 0xffff) <= uVar6)) &&
     (*(int *)(param_2 + 4) == 0)) {
    if (param_3 != 0) {
      uVar2 = FUN_00081616(param_2);
      write_ble_data_uint16(iVar4,uVar2);
    }
    iVar7 = increment_counter_in_structure(param_2);
    if (iVar7 == 0) {
LAB_000575f6:
      *piVar10 = *piVar10 + 1;
      return -0xb;
    }
    goto LAB_0005769a;
  }
  uVar12 = calculate_ble_memory_offset(*(undefined1 *)(param_2 + 10));
  if (*(code **)(param_1[1] + 0xc) == (code *)0x0) {
    iVar7 = FUN_000836de((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,0);
    if (iVar7 != 0) goto LAB_00057644;
    iVar7 = bt_connection_state_transition_with_callback_execution(0,4,0,0);
    if (iVar7 == 0) goto LAB_000575f6;
  }
  else {
    iVar7 = (**(code **)(param_1[1] + 0xc))(param_1);
    if (iVar7 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","seg",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/l2cap.c",0x70d);
                    /* WARNING: Subroutine does not return */
      assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/l2cap.c",0x70d);
    }
LAB_00057644:
    calculate_buffer_offset(iVar7 + 0xc,9);
  }
  iVar11 = iVar7 + 0xc;
  if (param_3 != 0) {
    uVar2 = FUN_00081616(param_2);
    write_ble_data_uint16_with_allocation(iVar11,uVar2);
  }
  uVar6 = calculate_ble_buffer_available_space(iVar11);
  if (uVar6 < (uint)*(ushort *)(param_1 + 10) - param_3) {
    uVar3 = calculate_ble_buffer_available_space(iVar11);
  }
  else {
    uVar3 = (ushort)((uint)*(ushort *)(param_1 + 10) - param_3);
  }
  uVar8 = *(ushort *)(param_2 + 0x10);
  if (uVar3 <= *(ushort *)(param_2 + 0x10)) {
    uVar8 = uVar3;
  }
  ble_memory_copy_utility(iVar11,*(undefined4 *)(param_2 + 0xc));
  update_buffer_position_and_size(iVar4,uVar8);
LAB_0005769a:
  uVar3 = *(ushort *)(iVar7 + 0x10);
  if ((param_2 == iVar7) || (*(short *)(param_2 + 0x10) == 0)) {
    uVar9 = 0x81a77;
  }
  else {
    uVar9 = 0x81a61;
  }
  iVar4 = FUN_00081820(*param_1,*(undefined2 *)(param_1 + 9),iVar7,uVar9,
                       *(undefined4 *)(param_2 + 0x18));
  if (iVar4 != 0) {
    *piVar10 = *piVar10 + 1;
    decrement_reference_count_and_cleanup_memory(iVar7);
    if (iVar4 == -0x69) {
      *(ushort *)(param_2 + 0x10) = uVar1;
      *(uint *)(param_2 + 0xc) = *(int *)(param_2 + 0x14) + (uVar5 & 0xffff);
      return -0xb;
    }
    return iVar4;
  }
  iVar4 = FUN_000816a2(piVar10);
  if (iVar4 == 0) {
    param_1[4] = param_1[4] & 0xfffffffe;
    if (*(code **)(param_1[1] + 0x1c) != (code *)0x0) {
      (**(code **)(param_1[1] + 0x1c))(param_1);
    }
  }
  return (uint)uVar3 - param_3;
}



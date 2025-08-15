/*
 * Function: validate_and_process_ble_characteristics_with_callback_validation_and_parameter
 * Entry:    000560cc
 * Prototype: undefined validate_and_process_ble_characteristics_with_callback_validation_and_parameter()
 */


undefined4
validate_and_process_ble_characteristics_with_callback_validation_and_parameter
          (ushort *param_1,int param_2,int param_3,ushort param_4)

{
  bool bVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  ushort *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  ushort *unaff_r10;
  int iVar8;
  undefined8 uVar9;
  undefined4 local_40;
  char *local_3c;
  int iStack_38;
  uint local_2c;
  
  puVar3 = &DAT_20002108;
  if (DAT_20002104 == 0) {
    puVar3 = (undefined *)0x0;
  }
  uVar9 = manage_ble_connection_state_comprehensive(puVar3,param_2,0,0);
  if ((int)uVar9 == 0) {
    if (param_3 == 0) {
      param_3 = thunk_FUN_000727ac(param_1 + 0x1c,(int)((ulonglong)uVar9 >> 0x20),0,0);
    }
    else {
      local_2c = (uint)DAT_20002104;
      iVar8 = param_3 + 0xc;
      uVar4 = calculate_ble_buffer_available_space(iVar8);
      uVar2 = DAT_20002104;
      if (uVar4 <= local_2c) {
        uVar2 = calculate_ble_buffer_available_space(iVar8);
      }
      local_2c = (uint)uVar2;
      ble_memory_copy_utility(iVar8,*(undefined4 *)(param_2 + 0xc));
      update_buffer_position_and_size((undefined4 *)(param_2 + 0xc),local_2c);
    }
    puVar7 = *(undefined4 **)(param_3 + 0x18);
    if (*(char *)((int)param_1 + 0xd) == '\a') {
      uVar6 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar6 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      if (puVar7 == (undefined4 *)0x0) {
        iVar8 = *(int *)(param_1 + 0xc);
        if (iVar8 == 0) {
          iVar8 = *(int *)(param_1 + 0xe);
          unaff_r10 = param_1 + 0xe;
        }
        else {
          unaff_r10 = (ushort *)(iVar8 + 0xc);
          iVar8 = *(int *)(iVar8 + 0xc);
        }
        *(int *)unaff_r10 = iVar8 + 1;
      }
      else {
        *puVar7 = 0;
        if (*(undefined4 **)(param_1 + 0xc) == (undefined4 *)0x0) {
          *(undefined4 **)(param_1 + 10) = puVar7;
          *(undefined4 **)(param_1 + 0xc) = puVar7;
        }
        else {
          **(undefined4 **)(param_1 + 0xc) = puVar7;
          *(undefined4 **)(param_1 + 0xc) = puVar7;
        }
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar6);
      }
      InstructionSynchronizationBarrier(0xf);
      puVar5 = (ushort *)update_buffer_size_and_offset(param_3 + 0xc,4,uVar6);
      *puVar5 = *param_1 | (param_4 & 0xfd) << 0xc;
      puVar5[1] = *(short *)(param_3 + 0x10) - 4;
      *(undefined1 *)(param_3 + 0x18) = 2;
      iStack_38 = process_data_with_initialization_and_state_validation(param_3);
      if (iStack_38 == 0) {
        return 0;
      }
      local_3c = "Unable to send to driver (err %d)";
      local_40 = 3;
      bt_log_connection_error(&DAT_00088108,0x1840,&local_40);
      uVar6 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar6 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      if (puVar7 == (undefined4 *)0x0) {
        if (*(int *)unaff_r10 == 0) {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","*pending_no_cb > 0",
                       "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x273);
                    /* WARNING: Subroutine does not return */
          assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x273);
        }
        *(int *)unaff_r10 = *(int *)unaff_r10 + -1;
      }
      else {
        FUN_0008137e(param_1 + 10,puVar7);
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar6);
      }
      InstructionSynchronizationBarrier(0xf);
      uVar6 = 0xfffffffb;
    }
    else {
      uVar6 = 0xffffff80;
    }
    puVar3 = &DAT_20002108;
    if (DAT_20002104 == 0) {
      puVar3 = (undefined *)0x0;
    }
    z_spin_lock_valid(puVar3);
    if (puVar7 != (undefined4 *)0x0) {
      *(undefined4 *)(param_3 + 0x18) = 0;
      validate_and_process_ble_characteristics_with_validation_and_state_management(param_1,puVar7);
    }
  }
  else {
    uVar6 = 0xffffff97;
  }
  return uVar6;
}



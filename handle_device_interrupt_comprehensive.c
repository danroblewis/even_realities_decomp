/*
 * Function: handle_device_interrupt_comprehensive
 * Entry:    0006312c
 * Prototype: undefined handle_device_interrupt_comprehensive()
 */


void handle_device_interrupt_comprehensive(int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined1 local_2c [4];
  undefined4 local_28;
  int iStack_24;
  
  iVar6 = **(int **)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 0x10);
  if (*(int *)(iVar6 + 0x108) != 0) {
    *(undefined4 *)(iVar6 + 0x108) = 0;
    iVar4 = *(int *)(iVar4 + 0xc);
    *(int *)(iVar4 + 0xb8) = *(int *)(iVar4 + 0xb8) + 1;
    return;
  }
  if (*(int *)(iVar6 + 0x124) != 0) {
    *(undefined4 *)(iVar6 + 0x124) = 0;
    iVar4 = *(int *)(**(int **)(param_1 + 4) + 0x480);
    *(int *)(**(int **)(param_1 + 4) + 0x480) = iVar4;
    fill_memory_buffer(local_2c,0,0x14);
    local_2c[0] = 6;
    if (iVar4 << 0x1f < 0) {
      bVar7 = 1;
    }
    else if (iVar4 << 0x1e < 0) {
      bVar7 = 2;
    }
    else if (iVar4 << 0x1d < 0) {
      bVar7 = 4;
    }
    else {
      bVar7 = (byte)iVar4 & 8;
    }
    local_28 = CONCAT31(local_28._1_3_,bVar7);
    execute_callback_function_pointer_if_valid(param_1,local_2c);
    setup_font_rendering_with_data_structure_validation_and_flag_management(param_1);
  }
  if ((*(int *)(iVar6 + 0x110) != 0) && (*(int *)(iVar6 + 0x304) << 0x1b < 0)) {
    *(undefined4 *)(iVar6 + 0x110) = 0;
    iVar8 = *(int *)(param_1 + 0x10);
    puVar9 = (undefined4 *)**(undefined4 **)(param_1 + 4);
    *(undefined1 *)(*(int *)(iVar8 + 0xc) + 0xce) = 1;
    setup_font_rendering(*(int *)(iVar8 + 0xc) + 0x80);
    iVar4 = puVar9[0x14f];
    bVar7 = *(byte *)(*(int *)(iVar8 + 0xc) + 0xc9);
    *(undefined1 *)(*(int *)(iVar8 + 0xc) + 0xc9) = 0;
    iVar2 = *(int *)(iVar8 + 0xc);
    uVar5 = ((uint)bVar7 - *(int *)(iVar2 + 0x60)) + iVar4;
    *(uint *)(iVar2 + 0x70) = *(int *)(iVar2 + 0x70) + (uVar5 & ~((int)uVar5 >> 0x1f));
    if (0 < (int)uVar5) {
      prepare_callback_data_and_execute_with_memory_buffer_initialization(param_1);
    }
    iVar4 = *(int *)(iVar8 + 0xc);
    if (*(char *)(iVar4 + 0xca) == '\0') {
      *(undefined1 *)(iVar4 + 0xce) = 0;
    }
    else {
      execute_callback_with_state_check_and_memory_buffer_reset(param_1,iVar4 + 0x58);
      uVar3 = 0;
      bVar10 = (bool)isCurrentModePrivileged();
      if (bVar10) {
        uVar3 = getBasePriority();
      }
      bVar10 = (bool)isCurrentModePrivileged();
      if ((bVar10) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      iVar4 = *(int *)(*(int *)(iVar8 + 0xc) + 100);
      if (iVar4 == 0) {
        puVar9[1] = 1;
      }
      else {
        *(int *)(*(int *)(iVar8 + 0xc) + 0x58) = iVar4;
        *(undefined4 *)(*(int *)(iVar8 + 0xc) + 0x5c) =
             *(undefined4 *)(*(int *)(iVar8 + 0xc) + 0x68);
        *(undefined4 *)(*(int *)(iVar8 + 0xc) + 100) = 0;
        *(undefined4 *)(*(int *)(iVar8 + 0xc) + 0x68) = 0;
        *(undefined4 *)(*(int *)(iVar8 + 0xc) + 0x60) = 0;
        if (puVar9[0x53] == 0) {
          *puVar9 = 1;
        }
        puVar9[0x80] = puVar9[0x80] & 0xffffffdf;
      }
      bVar10 = (bool)isCurrentModePrivileged();
      if (bVar10) {
        setBasePriority(uVar3);
      }
      InstructionSynchronizationBarrier(0xf);
      *(undefined1 *)(*(int *)(iVar8 + 0xc) + 0xce) = 0;
    }
  }
  if ((*(int *)(iVar6 + 0x14c) != 0) && (*(int *)(iVar6 + 0x110) == 0)) {
    *(undefined4 *)(iVar6 + 0x14c) = 0;
    iVar8 = *(int *)(param_1 + 0x10);
    fill_memory_buffer(local_2c,0,0x14,*(undefined4 *)(iVar6 + 0x14c));
    local_2c[0] = 3;
    execute_callback_function_pointer_if_valid(param_1,local_2c);
    iVar2 = *(int *)(iVar8 + 0xc);
    iVar4 = *(int *)(iVar2 + 0x74);
    if (iVar4 != -1) {
      *(int *)(iVar2 + 0x7c) = iVar4;
      iVar4 = *(int *)(iVar8 + 0xc);
      uVar5 = *(uint *)(iVar4 + 0x78);
      lVar1 = (longlong)(int)(uVar5 & ~((int)uVar5 >> 0x1f)) * 0x8000 + 999999;
      uVar11 = handle_unsigned_division((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),"size",0);
      uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
      schedule_dashboard_lock_task_with_ble_integration(iVar4 + 0x80,uVar3,(int)uVar11,uVar3,uVar11)
      ;
    }
  }
  if ((*(int *)(iVar6 + 0x144) != 0) && (*(int *)(iVar6 + 0x110) == 0)) {
    *(undefined4 *)(iVar6 + 0x144) = 0;
    iVar4 = *(int *)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 4);
    execute_callback_with_state_check_and_memory_buffer_reset(param_1,*(int *)(iVar4 + 0xc) + 0x58);
    execute_callback_with_state_check_and_memory_buffer_reset(param_1,*(int *)(iVar4 + 0xc) + 100);
    *(undefined1 *)(*(int *)(iVar4 + 0xc) + 0xca) = 0;
    if (*(char *)(*(int *)(iVar4 + 0xc) + 0xcb) != '\0') {
      *(undefined1 *)(*(int *)(iVar4 + 0xc) + 0xcb) = 0;
      manage_memory_buffer_with_string_processing_and_busy_wait(*(undefined4 *)(param_1 + 4),0,0);
    }
    if (*(int *)(iVar2 + 4) << 0x1b < 0) {
      manage_privileged_mode_with_flag_clearing_and_memory_processing(param_1,2);
    }
    execute_callback_with_memory_buffer_initialization_and_constant_value(param_1);
  }
  if ((*(int *)(iVar6 + 0x120) != 0) && (*(int *)(iVar6 + 0x304) << 0x17 < 0)) {
    iVar4 = **(int **)(param_1 + 4);
    uVar3 = 0;
    bVar10 = (bool)isCurrentModePrivileged();
    if (bVar10) {
      uVar3 = getBasePriority();
    }
    bVar10 = (bool)isCurrentModePrivileged();
    if ((bVar10) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    if (*(int *)(iVar4 + 0x120) != 0) {
      *(undefined4 *)(iVar4 + 0x120) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 1;
    }
    bVar10 = (bool)isCurrentModePrivileged();
    if (bVar10) {
      setBasePriority(uVar3);
    }
    InstructionSynchronizationBarrier(0xf);
  }
  if (*(int *)(iVar6 + 0x158) == 0) {
    return;
  }
  if (-1 < *(int *)(iVar6 + 0x304) << 9) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x10);
  iVar6 = **(int **)(param_1 + 4);
  if ((*(int **)(param_1 + 4))[1] << 0x1b < 0) {
    *(undefined4 *)(iVar6 + 0x308) = 0x400000;
    manage_privileged_mode_with_flag_clearing_and_memory_processing(param_1,1);
    if (*(int *)(*(int *)(iVar4 + 0xc) + 0xc) == 0) {
      return;
    }
  }
  if (*(int *)(*(int *)(iVar4 + 0xc) + 8) == 0) {
    return;
  }
  uVar3 = 0;
  bVar10 = (bool)isCurrentModePrivileged();
  if (bVar10) {
    uVar3 = getBasePriority();
  }
  bVar10 = (bool)isCurrentModePrivileged();
  if ((bVar10) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(int *)(*(int *)(iVar4 + 0xc) + 0xbc) < 0) {
    iStack_24 = *(int *)(iVar6 + 0x54c);
  }
  else {
    iStack_24 = *(int *)(*(int *)(iVar4 + 0xc) + 0xbc);
  }
  bVar10 = (bool)isCurrentModePrivileged();
  if (bVar10) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar2 = *(int *)(iVar4 + 0xc);
  if (*(char *)(iVar2 + 0xcd) == '\0') {
    if ((*(int *)(iVar2 + 8) != *(int *)(iVar2 + 0x10)) &&
       (bVar10 = *(int *)(iVar2 + 0x14) == iStack_24, iStack_24 = *(int *)(iVar2 + 0x1c) + iStack_24
       , bVar10)) {
      *(int *)(iVar2 + 0x1c) = iStack_24;
      iVar2 = copy_memory_buffer_with_bounds_checking_and_data_structure_update(iVar4);
      if (iVar2 != 0) goto LAB_00063380;
      iStack_24 = *(int *)(*(int *)(iVar4 + 0xc) + 0x1c);
    }
    setup_font_rendering(*(int *)(iVar4 + 0xc) + 0x20);
    fill_memory_buffer(local_2c,0,0x14);
    local_28 = *(undefined4 *)(*(int *)(iVar4 + 0xc) + 8);
    if (iStack_24 != *(int *)(*(int *)(iVar4 + 0xc) + 0xc)) {
      local_2c[0] = 1;
    }
    *(undefined4 *)(iVar6 + 0x308) = 0x400000;
    *(undefined4 *)(*(int *)(iVar4 + 0xc) + 8) = 0;
    *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0xc) = 0;
    execute_callback_function_pointer_if_valid(param_1,local_2c);
  }
  else {
LAB_00063380:
    uVar3 = 0;
    bVar10 = (bool)isCurrentModePrivileged();
    if (bVar10) {
      uVar3 = getBasePriority();
    }
    bVar10 = (bool)isCurrentModePrivileged();
    if ((bVar10) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    manage_state_and_initialize_data_structure_based_on_flags(param_1,iVar4);
    bVar10 = (bool)isCurrentModePrivileged();
    if (bVar10) {
      setBasePriority(uVar3);
    }
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}



/*
 * Function: FUN_00072674
 * Entry:    00072674
 * Prototype: undefined FUN_00072674(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined1 param_5)
 */


undefined4 FUN_00072674(uint *param_1,uint *param_2,uint *param_3,int param_4,char param_5)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  
  puVar5 = param_1 + 2;
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
  iVar2 = check_connection_state_validity(puVar5);
  if (iVar2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",puVar5);
    uVar6 = 0x72;
LAB_000726b6:
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar6);
  }
  update_connection_state_flags(puVar5);
  if (param_5 != '\0') {
    param_2 = (uint *)param_1[1];
  }
  iVar2 = process_ble_connection_list_with_cleanup(param_1 + 3);
  if (iVar2 != 0) {
    *(uint **)(iVar2 + 0x14) = param_3;
    *(undefined4 *)(iVar2 + 0x90) = 0;
    FUN_000738d4();
    goto LAB_000726e2;
  }
  if (param_4 == 0) {
    *param_3 = 0;
  }
  else {
    puVar3 = (uint *)allocate_ble_memory_with_alignment_and_validation(0,8);
    if (puVar3 == (uint *)0x0) {
      iVar2 = validate_and_clear_connection_state(puVar5);
      if (iVar2 != 0) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar6);
        }
        InstructionSynchronizationBarrier(0xf);
        return 0xfffffff4;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
      DEBUG_PRINT2("\tNot my spinlock %p\n",puVar5);
      uVar6 = 0xf0;
      goto LAB_000726b6;
    }
    puVar3[1] = (uint)param_3;
    *puVar3 = 1;
    param_3 = puVar3;
  }
  uVar4 = *param_3 & 3;
  if (param_2 == (uint *)0x0) {
    *param_3 = *param_1 | uVar4;
    *param_1 = (uint)param_3;
    if (param_1[1] == 0) {
LAB_00072748:
      param_1[1] = (uint)param_3;
    }
  }
  else if (*param_2 < 4) {
    *param_3 = uVar4;
    puVar3 = (uint *)param_1[1];
    if (puVar3 != (uint *)0x0) {
      *puVar3 = *puVar3 & 3 | (uint)param_3;
      goto LAB_00072748;
    }
    *param_1 = (uint)param_3;
    param_1[1] = (uint)param_3;
  }
  else {
    *param_3 = *param_2 & 0xfffffffc | uVar4;
    *param_2 = (uint)param_3 | *param_2 & 3;
  }
  initialize_audio_system(param_1 + 5,4);
LAB_000726e2:
  validate_ble_connection_state_with_priority(puVar5,uVar6);
  return 0;
}



/*
 * Function: thunk_FUN_000727ac
 * Entry:    000836e8
 * Prototype: undefined thunk_FUN_000727ac()
 */


undefined4 thunk_FUN_000727ac(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  
  puVar7 = param_1 + 2;
  uVar8 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar8 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  puVar9 = param_1;
  uVar5 = param_3;
  iVar2 = check_connection_state_validity(puVar7);
  if (iVar2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",puVar7);
    uVar8 = 0x72;
  }
  else {
    update_connection_state_flags(puVar7);
    puVar6 = (uint *)*param_1;
    if (puVar6 == (uint *)0x0) {
      uVar3 = 0;
      if ((param_3 | param_4) != 0) {
        iVar2 = handle_ble_connection_state_transition
                          (puVar7,uVar8,param_1 + 3,param_3 | param_4,param_3,param_4,uVar5);
        if (iVar2 != 0) {
          return 0;
        }
        return *(undefined4 *)(DMIC_BUFFER_SIZE + 0x14);
      }
    }
    else {
      puVar4 = (uint *)param_1[1];
      uVar5 = *puVar6 & 0xfffffffc;
      *param_1 = uVar5;
      if (puVar6 == puVar4) {
        param_1[1] = uVar5;
      }
      uVar3 = initialize_data_structures(puVar6,1,puVar4,uVar5,puVar9,param_2);
    }
    iVar2 = validate_and_clear_connection_state(puVar7);
    if (iVar2 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar8);
      }
      InstructionSynchronizationBarrier(0xf);
      return uVar3;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",puVar7);
    uVar8 = 0xf0;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar8);
}



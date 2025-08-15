/*
 * Function: FUN_0007350c
 * Entry:    0007350c
 * Prototype: undefined FUN_0007350c()
 */


undefined4 FUN_0007350c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puStack_1c;
  int iStack_18;
  
  puVar7 = &DAT_200068d0;
  puStack_1c = &DAT_200068d0;
  iStack_18 = param_3;
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","dwork != ((void *)0)",
                 "WEST_TOPDIR/zephyr/kernel/work.c",0x3de,&DAT_200068d0);
    uVar6 = 0x3de;
    pcVar3 = "WEST_TOPDIR/zephyr/kernel/work.c";
  }
  else {
    uVar6 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar6 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar4 = check_connection_state_validity(&DAT_2000b480);
    if (iVar4 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,puVar7);
      DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b480);
      uVar6 = 0x72;
    }
    else {
      update_connection_state_flags(&DAT_2000b480);
      setup_uart_communication(param_1);
      if (param_4 == 0 && param_3 == 0) {
        uVar5 = FUN_00072cd4(param_1,&puStack_1c);
      }
      else {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 8;
        *(undefined **)(param_1 + 0x28) = puStack_1c;
        schedule_ble_connection_timeout_with_priority
                  (param_1 + 0x10,&LAB_00072dac_1,param_3,param_4);
        uVar5 = 1;
      }
      iVar4 = validate_and_clear_connection_state(&DAT_2000b480);
      if (iVar4 != 0) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar6);
        }
        InstructionSynchronizationBarrier(0xf);
        return uVar5;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
      DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b480);
      uVar6 = 0xf0;
    }
    pcVar3 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure(pcVar3,uVar6);
}



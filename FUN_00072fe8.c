/*
 * Function: FUN_00072fe8
 * Entry:    00072fe8
 * Prototype: undefined FUN_00072fe8()
 */


undefined4 FUN_00072fe8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","work != ((void *)0)",
                 "WEST_TOPDIR/zephyr/kernel/work.c",0x221,param_4);
    uVar6 = 0x221;
  }
  else {
    if (-1 < *(int *)(param_1 + 0xc) << 0x17) {
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
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,param_4);
        DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b480);
        uVar6 = 0x72;
      }
      else {
        update_connection_state_flags(&DAT_2000b480);
        uVar5 = setup_sensor_interfaces(param_1);
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
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0,param_4);
        DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b480);
        uVar6 = 0xf0;
      }
      pcVar3 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
      goto LAB_00073002;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!flag_test(&work->flags, K_WORK_DELAYABLE_BIT)",
                 "WEST_TOPDIR/zephyr/kernel/work.c",0x222,param_4);
    uVar6 = 0x222;
  }
  pcVar3 = "WEST_TOPDIR/zephyr/kernel/work.c";
LAB_00073002:
                    /* WARNING: Subroutine does not return */
  assertion_failure(pcVar3,uVar6);
}



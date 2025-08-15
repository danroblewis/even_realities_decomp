/*
 * Function: FUN_000731b8
 * Entry:    000731b8
 * Prototype: undefined FUN_000731b8()
 */


undefined4 FUN_000731b8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","queue","WEST_TOPDIR/zephyr/kernel/work.c",0x2ed,0,
                 param_2,param_3,param_4);
    uVar4 = 0x2ed;
  }
  else {
    iVar6 = param_1;
    iVar7 = param_2;
    iVar3 = check_privilege_level();
    if (iVar3 == 0) {
      uVar4 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar4 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      iVar3 = check_connection_state_validity(&DAT_2000b480);
      if (iVar3 == 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,iVar6,iVar7,param_3,param_4
                    );
        DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b480);
        uVar4 = 0x72;
LAB_00073220:
        pcVar2 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
        goto LAB_000731d4;
      }
      update_connection_state_flags(&DAT_2000b480);
      uVar5 = *(uint *)(param_1 + 0xf0);
      if ((uVar5 & 6) == 0) {
        if (param_2 != 0) goto LAB_00073236;
        if (*(int *)(param_1 + 0xd8) == 0) {
          iVar3 = validate_and_clear_connection_state(&DAT_2000b480);
          if (iVar3 != 0) {
            bVar1 = (bool)isCurrentModePrivileged();
            if (bVar1) {
              setBasePriority(uVar4);
            }
            InstructionSynchronizationBarrier(0xf);
            return 0;
          }
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                       "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0,iVar6,iVar7,param_3,
                       param_4);
          DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b480);
          uVar4 = 0xf0;
          goto LAB_00073220;
        }
        uVar5 = uVar5 | 4;
      }
      else {
        *(uint *)(param_1 + 0xf0) = uVar5 | 4;
        if (param_2 == 0) goto LAB_0007323e;
LAB_00073236:
        uVar5 = uVar5 | 0xc;
      }
      *(uint *)(param_1 + 0xf0) = uVar5;
LAB_0007323e:
      initialize_serial_ports(param_1);
      uVar4 = handle_ble_connection_state_transition_with_data
                        (&DAT_2000b480,uVar4,param_1 + 0xe8,0xffffffff,0xffffffff,0xffffffff,0);
      return uVar4;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!k_is_in_isr()","WEST_TOPDIR/zephyr/kernel/work.c"
                 ,0x2ee,iVar6,iVar7,param_3,param_4);
    uVar4 = 0x2ee;
  }
  pcVar2 = "WEST_TOPDIR/zephyr/kernel/work.c";
LAB_000731d4:
                    /* WARNING: Subroutine does not return */
  assertion_failure(pcVar2,uVar4);
}



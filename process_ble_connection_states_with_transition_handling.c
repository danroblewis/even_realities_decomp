/*
 * Function: process_ble_connection_states_with_transition_handling
 * Entry:    000755f8
 * Prototype: undefined process_ble_connection_states_with_transition_handling()
 */


undefined4
process_ble_connection_states_with_transition_handling
          (int param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  iVar3 = DMIC_BUFFER_SIZE;
  iVar5 = DMIC_BUFFER_SIZE + 0x60;
  *(undefined1 *)(DMIC_BUFFER_SIZE + 0x60) = 1;
  *(undefined1 *)(iVar3 + 0x61) = 1;
  uVar8 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar8 = getCurrentExceptionNumber();
    uVar8 = uVar8 & 0x1f;
  }
  if (uVar8 == 0) {
    if (param_1 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","events != ((void *)0)",
                   "WEST_TOPDIR/zephyr/kernel/poll.c",0x12e);
      DEBUG_PRINT2("\tNULL events\n\n");
      uVar4 = 0x12e;
    }
    else {
      if (-1 < param_2) {
        uVar4 = process_ble_connection_states_with_bitmap_handling
                          (param_1,param_2,iVar5,param_3 == 0 && param_4 == 0,param_1,param_2,
                           param_3);
        uVar7 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          uVar7 = getBasePriority();
        }
        bVar1 = (bool)isCurrentModePrivileged();
        if ((bVar1) && (uVar8 = getBasePriority(), uVar8 == 0 || 0x20 < uVar8)) {
          setBasePriority(0x20);
        }
        InstructionSynchronizationBarrier(0xf);
        iVar5 = check_connection_state_validity(&DAT_2000b4a0);
        if (iVar5 == 0) {
LAB_000756a0:
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                       "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
          DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b4a0);
          uVar4 = 0x72;
        }
        else {
          update_connection_state_flags(&DAT_2000b4a0);
          if (*(char *)(iVar3 + 0x60) == '\0') {
            cleanup_ble_connection_states_comprehensive(param_1,uVar4,uVar7);
            iVar3 = validate_and_clear_connection_state(&DAT_2000b4a0);
            if (iVar3 != 0) {
              bVar1 = (bool)isCurrentModePrivileged();
              if (bVar1) {
                setBasePriority(uVar7);
              }
              InstructionSynchronizationBarrier(0xf);
              return 0;
            }
          }
          else {
            *(undefined1 *)(iVar3 + 0x60) = 0;
            if ((param_3 | param_4) == 0) {
              iVar3 = validate_and_clear_connection_state(&DAT_2000b4a0);
              if (iVar3 != 0) {
                bVar1 = (bool)isCurrentModePrivileged();
                if (bVar1) {
                  setBasePriority(uVar7);
                }
                InstructionSynchronizationBarrier(0xf);
                return 0xfffffff5;
              }
            }
            else {
              uVar7 = handle_ble_connection_state_transition
                                (&DAT_2000b4a0,uVar7,&DAT_20002d04,param_3 | param_4,param_3,param_4
                                );
              uVar6 = 0;
              bVar1 = (bool)isCurrentModePrivileged();
              if (bVar1) {
                uVar6 = getBasePriority();
              }
              bVar1 = (bool)isCurrentModePrivileged();
              if ((bVar1) && (uVar8 = getBasePriority(), uVar8 == 0 || 0x20 < uVar8)) {
                setBasePriority(0x20);
              }
              InstructionSynchronizationBarrier(0xf);
              iVar3 = check_connection_state_validity(&DAT_2000b4a0);
              if (iVar3 == 0) goto LAB_000756a0;
              update_connection_state_flags(&DAT_2000b4a0);
              cleanup_ble_connection_states_comprehensive(param_1,uVar4,uVar6);
              iVar3 = validate_and_clear_connection_state(&DAT_2000b4a0);
              if (iVar3 != 0) {
                bVar1 = (bool)isCurrentModePrivileged();
                if (bVar1) {
                  setBasePriority(uVar6);
                }
                InstructionSynchronizationBarrier(0xf);
                return uVar7;
              }
            }
          }
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                       "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
          DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b4a0);
          uVar4 = 0xf0;
        }
        pcVar2 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
        goto LAB_0007563a;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","num_events >= 0",
                   "WEST_TOPDIR/zephyr/kernel/poll.c",0x12f);
      DEBUG_PRINT2("\t<0 events\n\n");
      uVar4 = 0x12f;
    }
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!arch_is_in_isr()",
                 "WEST_TOPDIR/zephyr/kernel/poll.c",0x12d);
    DEBUG_PRINT2(&DAT_000f53ff);
    uVar4 = 0x12d;
  }
  pcVar2 = "WEST_TOPDIR/zephyr/kernel/poll.c";
LAB_0007563a:
                    /* WARNING: Subroutine does not return */
  assertion_failure(pcVar2,uVar4);
}



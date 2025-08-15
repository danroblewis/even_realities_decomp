/*
 * Function: process_data_with_validation_and_parameter_alt
 * Entry:    0004f5b0
 * Prototype: undefined process_data_with_validation_and_parameter_alt()
 */


void process_data_with_validation_and_parameter_alt(void)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 in_r3;
  uint uVar5;
  code *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 local_38;
  char *local_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  undefined4 uStack_28;
  
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
  uStack_28 = in_r3;
  iVar2 = check_connection_state_validity(&DAT_2000a2c4);
  if (iVar2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000a2c4);
    uVar8 = 0x72;
  }
  else {
    update_connection_state_flags(&DAT_2000a2c4);
    if (TASK_MANAGEMENT_QUEUE_HEAD == 0) {
      iVar2 = validate_and_clear_connection_state(&DAT_2000a2c4);
      if (iVar2 != 0) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar8);
        }
        InstructionSynchronizationBarrier(0xf);
        return;
      }
    }
    else {
      piVar7 = (int *)TASK_MANAGEMENT_QUEUE_HEAD;
      if (TASK_MANAGEMENT_QUEUE_TAIL == 0) {
        piVar7 = (int *)0x0;
      }
      TASK_MANAGEMENT_QUEUE_HEAD = 0;
      TASK_MANAGEMENT_QUEUE_TAIL = 0;
      iVar2 = validate_and_clear_connection_state(&DAT_2000a2c4);
      if (iVar2 != 0) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar8);
        }
        InstructionSynchronizationBarrier(0xf);
        while( true ) {
          if (piVar7 == (int *)0x0) {
            return;
          }
          iVar2 = *piVar7;
          puVar9 = (undefined4 *)piVar7[1];
          if ((puVar9 < &DAT_000fa9b4) || (&UNK_000faa13 < puVar9)) break;
          uVar5 = ((int)(puVar9 + -0x3ea6d) >> 3) * -0x55555555;
          if ((*(int *)(&DAT_2000a2d0 + (uVar5 >> 5) * 4) >> (uVar5 & 0x1f)) << 0x1f < 0) {
            if ((code *)puVar9[3] == (code *)0x0) {
              uStack_30 = *puVar9;
              local_34 = "e: %s";
              local_2c = 0x200;
              local_38 = 0x1000003;
              process_and_compress_data_with_validation(&DAT_000880f0,0x1cc0,&local_38);
            }
            else {
              (*(code *)puVar9[3])(piVar7);
            }
          }
          iVar4 = 0;
          piVar10 = (int *)puVar9[1];
          while (((int *)puVar9[2] != piVar10 && (iVar4 == 0))) {
            if (piVar10 == (int *)0x0) {
              DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","es != ((void *)0)",
                           "WEST_TOPDIR/nrf/subsys/app_event_manager/app_event_manager.c",0xb5);
              uVar8 = 0xb5;
              goto LAB_0004f66c;
            }
            if (*piVar10 == 0) {
              DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","el != ((void *)0)",
                           "WEST_TOPDIR/nrf/subsys/app_event_manager/app_event_manager.c",0xb9);
              uVar8 = 0xb9;
              goto LAB_0004f66c;
            }
            pcVar6 = *(code **)(*piVar10 + 4);
            if (pcVar6 == (code *)0x0) {
              DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","el->notification != ((void *)0)",
                           "WEST_TOPDIR/nrf/subsys/app_event_manager/app_event_manager.c",0xba);
              uVar8 = 0xba;
              goto LAB_0004f66c;
            }
            iVar4 = (*pcVar6)(piVar7);
            piVar10 = piVar10 + 1;
          }
          initialize_microphone(piVar7);
          piVar7 = (int *)iVar2;
        }
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                     "(aeh->type_id >= _event_type_list_start) && (aeh->type_id < _event_type_list_end)"
                     ,"WEST_TOPDIR/nrf/subsys/app_event_manager/app_event_manager.c",0xa3);
        uVar8 = 0xa3;
LAB_0004f66c:
        pcVar3 = "WEST_TOPDIR/nrf/subsys/app_event_manager/app_event_manager.c";
        goto LAB_0004f5e6;
      }
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000a2c4);
    uVar8 = 0xf0;
  }
  pcVar3 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
LAB_0004f5e6:
                    /* WARNING: Subroutine does not return */
  assertion_failure(pcVar3,uVar8);
}



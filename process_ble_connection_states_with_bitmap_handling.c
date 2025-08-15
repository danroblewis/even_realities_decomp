/*
 * Function: process_ble_connection_states_with_bitmap_handling
 * Entry:    000751d0
 * Prototype: undefined process_ble_connection_states_with_bitmap_handling()
 */


int process_ble_connection_states_with_bitmap_handling
              (int param_1,int param_2,char *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar5 = 0;
  iVar6 = 0;
  iVar8 = param_1;
  pcVar3 = param_3;
LAB_000751e6:
  if (param_2 <= iVar5) {
    return iVar6;
  }
  uVar7 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar7 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar2 = check_connection_state_validity(&DAT_2000b4a0);
  if (iVar2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,iVar8,param_4,pcVar3);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b4a0);
    uVar7 = 0x72;
    goto LAB_00075220;
  }
  update_connection_state_flags(&DAT_2000b4a0);
  switch(*(byte *)(param_1 + 0xd) & 0x3f) {
  case 0:
    break;
  case 1:
    if (*(int *)(*(int *)(param_1 + 0x10) + 8) == 0) break;
    uVar4 = 1;
LAB_0007524a:
    *(undefined4 *)(param_1 + 8) = 0;
    *(uint *)(param_1 + 0xc) =
         *(uint *)(param_1 + 0xc) & 0xffe03fff |
         (uVar4 | (*(uint *)(param_1 + 0xc) << 0xb) >> 0x19) << 0xe;
    *param_3 = '\0';
    goto LAB_00075260;
  case 2:
    if (*(int *)(*(int *)(param_1 + 0x10) + 8) != 0) {
      uVar4 = 2;
      goto LAB_0007524a;
    }
    break;
  default:
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0","WEST_TOPDIR/zephyr/kernel/poll.c",99,iVar8,
                 param_4,pcVar3);
    DEBUG_PRINT2("\tinvalid event type (0x%x)\n\n",*(byte *)(param_1 + 0xd) & 0x3f);
    uVar7 = 99;
    goto LAB_000752e4;
  case 4:
    if (**(int **)(param_1 + 0x10) != 0) {
      uVar4 = 4;
      goto LAB_0007524a;
    }
    break;
  case 8:
    if (*(int *)(*(int *)(param_1 + 0x10) + 0x24) != 0) {
      uVar4 = 0x10;
      goto LAB_0007524a;
    }
  }
  if ((param_4 != 0) || (*param_3 == '\0')) goto LAB_00075260;
  switch(*(byte *)(param_1 + 0xd) & 0x3f) {
  case 0:
    goto switchD_000752a4_caseD_0;
  case 1:
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","event->signal != ((void *)0)",
                   "WEST_TOPDIR/zephyr/kernel/poll.c",0x95,iVar8,0,pcVar3);
      DEBUG_PRINT2("\tinvalid poll signal\n\n");
      uVar7 = 0x95;
      break;
    }
LAB_0007530e:
    initialize_bitmap_handling(iVar2,param_1,param_3);
    goto switchD_000752a4_caseD_0;
  case 2:
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar2 = *(int *)(param_1 + 0x10) + 0x10;
      goto LAB_0007530e;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","event->sem != ((void *)0)",
                 "WEST_TOPDIR/zephyr/kernel/poll.c",0x8d,iVar8,0,pcVar3);
    DEBUG_PRINT2("\tinvalid semaphore\n\n");
    uVar7 = 0x8d;
    break;
  default:
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0","WEST_TOPDIR/zephyr/kernel/poll.c",0xa6,iVar8,0
                 ,pcVar3);
    DEBUG_PRINT2("\tinvalid event type\n\n");
    uVar7 = 0xa6;
    break;
  case 4:
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar2 = *(int *)(param_1 + 0x10) + 0x14;
      goto LAB_0007530e;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","event->queue != ((void *)0)",
                 "WEST_TOPDIR/zephyr/kernel/poll.c",0x91,iVar8,0,pcVar3);
    DEBUG_PRINT2("\tinvalid queue\n\n");
    uVar7 = 0x91;
    break;
  case 8:
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar2 = *(int *)(param_1 + 0x10) + 0x28;
      goto LAB_0007530e;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","event->msgq != ((void *)0)",
                 "WEST_TOPDIR/zephyr/kernel/poll.c",0x99,iVar8,0,pcVar3);
    DEBUG_PRINT2("\tinvalid message queue\n\n");
    uVar7 = 0x99;
  }
LAB_000752e4:
  pcVar3 = "WEST_TOPDIR/zephyr/kernel/poll.c";
LAB_000752e6:
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call(pcVar3,uVar7);
switchD_000752a4_caseD_0:
  *(char **)(param_1 + 8) = param_3;
  iVar6 = iVar6 + 1;
LAB_00075260:
  iVar2 = validate_and_clear_connection_state(&DAT_2000b4a0);
  param_1 = param_1 + 0x14;
  if (iVar2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b4a0);
    uVar7 = 0xf0;
LAB_00075220:
    pcVar3 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
    goto LAB_000752e6;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar7);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar5 = iVar5 + 1;
  goto LAB_000751e6;
}



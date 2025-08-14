/*
 * Function: enqueue_message_to_queue
 * Entry:    000720d0
 * Prototype: undefined enqueue_message_to_queue()
 */


undefined4 enqueue_message_to_queue(int param_1,undefined4 param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  
  uVar4 = 0;
  bVar7 = (bool)isCurrentModePrivileged();
  if (bVar7) {
    uVar4 = getCurrentExceptionNumber();
    uVar4 = uVar4 & 0x1f;
  }
  if ((uVar4 == 0) || (param_3 == 0 && param_4 == 0)) {
    iVar6 = param_1 + 8;
    uVar3 = 0;
    bVar7 = (bool)isCurrentModePrivileged();
    if (bVar7) {
      uVar3 = getBasePriority();
    }
    bVar7 = (bool)isCurrentModePrivileged();
    if ((bVar7) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar8 = param_1;
    uVar9 = param_2;
    iVar10 = param_3;
    iVar2 = FUN_00072040(iVar6);
    if (iVar2 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,iVar8,uVar9,iVar10);
      DEBUG_PRINT2("\tInvalid spinlock %p\n",iVar6);
      uVar3 = 0x72;
    }
    else {
      FUN_00072078(iVar6);
      iVar2 = DAT_2000b450;
      if (*(uint *)(param_1 + 0x24) < *(uint *)(param_1 + 0x10)) {
        iVar2 = FUN_000744a4(param_1);
        if (iVar2 != 0) {
          memcpy(*(undefined4 *)(iVar2 + 0x14),param_2,*(undefined4 *)(param_1 + 0xc));
          *(undefined4 *)(iVar2 + 0x90) = 0;
          FUN_000738d4(iVar2);
          FUN_000739f0(iVar6,uVar3);
          return 0;
        }
        uVar4 = *(uint *)(param_1 + 0x20);
        if ((uVar4 < *(uint *)(param_1 + 0x14)) || (*(uint *)(param_1 + 0x18) <= uVar4)) {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                       "msgq->write_ptr >= msgq->buffer_start && msgq->write_ptr < msgq->buffer_end"
                       ,"WEST_TOPDIR/zephyr/kernel/msg_q.c",0x90,iVar8,uVar9,iVar10);
          uVar3 = 0x90;
          goto LAB_000720fc;
        }
        memcpy(uVar4,param_2,*(undefined4 *)(param_1 + 0xc));
        iVar2 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0xc);
        *(int *)(param_1 + 0x20) = iVar2;
        bVar7 = iVar2 == *(int *)(param_1 + 0x18);
        if (bVar7) {
          iVar2 = *(int *)(param_1 + 0x14);
        }
        if (bVar7) {
          *(int *)(param_1 + 0x20) = iVar2;
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        FUN_0008688e(param_1 + 0x28,0x10);
        uVar5 = 0;
      }
      else {
        if (param_3 != 0 || param_4 != 0) {
          *(undefined4 *)(DAT_2000b450 + 0x14) = param_2;
          uVar3 = FUN_00073f6c(iVar6,uVar3,param_1,iVar2,param_3,param_4);
          return uVar3;
        }
        uVar5 = 0xffffffdd;
      }
      iVar2 = FUN_0007205c(iVar6);
      if (iVar2 != 0) {
        bVar7 = (bool)isCurrentModePrivileged();
        if (bVar7) {
          setBasePriority(uVar3);
        }
        InstructionSynchronizationBarrier(0xf);
        return uVar5;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0,iVar8,uVar9,iVar10);
      DEBUG_PRINT2("\tNot my spinlock %p\n",iVar6);
      uVar3 = 0xf0;
    }
    pcVar1 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "!arch_is_in_isr() || ((timeout).ticks == (((k_timeout_t) {0})).ticks)",
                 "WEST_TOPDIR/zephyr/kernel/msg_q.c",0x76,param_1,param_2,param_3);
    DEBUG_PRINT2(&DAT_000f53ff);
    uVar3 = 0x76;
LAB_000720fc:
    pcVar1 = "WEST_TOPDIR/zephyr/kernel/msg_q.c";
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec(pcVar1,uVar3);
}



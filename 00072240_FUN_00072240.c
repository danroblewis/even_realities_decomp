/*
 * Function: FUN_00072240
 * Entry:    00072240
 * Prototype: undefined FUN_00072240()
 */


int FUN_00072240(int param_1,undefined4 param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  
  uVar5 = 0;
  bVar8 = (bool)isCurrentModePrivileged();
  if (bVar8) {
    uVar5 = getCurrentExceptionNumber();
    uVar5 = uVar5 & 0x1f;
  }
  if ((uVar5 == 0) || (param_3 == 0 && param_4 == 0)) {
    iVar7 = param_1 + 8;
    uVar4 = 0;
    bVar8 = (bool)isCurrentModePrivileged();
    if (bVar8) {
      uVar4 = getBasePriority();
    }
    bVar8 = (bool)isCurrentModePrivileged();
    if ((bVar8) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar6 = param_1;
    uVar9 = param_2;
    iVar10 = param_3;
    iVar2 = FUN_00072040(iVar7);
    if (iVar2 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,iVar6,uVar9,iVar10);
      DEBUG_PRINT2("\tInvalid spinlock %p\n",iVar7);
      uVar4 = 0x72;
    }
    else {
      FUN_00072078(iVar7);
      iVar2 = DAT_2000b450;
      if (*(int *)(param_1 + 0x24) == 0) {
        if (param_3 != 0 || param_4 != 0) {
          *(undefined4 *)(DAT_2000b450 + 0x14) = param_2;
          iVar7 = FUN_00073f6c(iVar7,uVar4,param_1,iVar2,param_3,param_4);
          return iVar7;
        }
        iVar2 = -0x23;
      }
      else {
        memcpy(param_2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc));
        iVar2 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xc);
        *(int *)(param_1 + 0x1c) = iVar2;
        bVar8 = iVar2 == *(int *)(param_1 + 0x18);
        if (bVar8) {
          iVar2 = *(int *)(param_1 + 0x14);
        }
        if (bVar8) {
          *(int *)(param_1 + 0x1c) = iVar2;
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
        iVar2 = FUN_000744a4(param_1);
        if (iVar2 != 0) {
          uVar5 = *(uint *)(param_1 + 0x20);
          if ((*(uint *)(param_1 + 0x14) <= uVar5) && (uVar5 < *(uint *)(param_1 + 0x18))) {
            memcpy(uVar5,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(param_1 + 0xc));
            iVar6 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0xc);
            *(int *)(param_1 + 0x20) = iVar6;
            bVar8 = iVar6 == *(int *)(param_1 + 0x18);
            if (bVar8) {
              iVar6 = *(int *)(param_1 + 0x14);
            }
            if (bVar8) {
              *(int *)(param_1 + 0x20) = iVar6;
            }
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
            *(undefined4 *)(iVar2 + 0x90) = 0;
            FUN_000738d4(iVar2);
            FUN_000739f0(iVar7,uVar4);
            return 0;
          }
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                       "msgq->write_ptr >= msgq->buffer_start && msgq->write_ptr < msgq->buffer_end"
                       ,"WEST_TOPDIR/zephyr/kernel/msg_q.c",0xeb,iVar6,uVar9,iVar10);
          uVar4 = 0xeb;
          goto LAB_0007226c;
        }
      }
      iVar3 = FUN_0007205c(iVar7);
      if (iVar3 != 0) {
        bVar8 = (bool)isCurrentModePrivileged();
        if (bVar8) {
          setBasePriority(uVar4);
        }
        InstructionSynchronizationBarrier(0xf);
        return iVar2;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0,iVar6,uVar9,iVar10);
      DEBUG_PRINT2("\tNot my spinlock %p\n",iVar7);
      uVar4 = 0xf0;
    }
    pcVar1 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "!arch_is_in_isr() || ((timeout).ticks == (((k_timeout_t) {0})).ticks)",
                 "WEST_TOPDIR/zephyr/kernel/msg_q.c",0xd2,param_1,param_2,param_3);
    DEBUG_PRINT2(&DAT_000f53ff);
    uVar4 = 0xd2;
LAB_0007226c:
    pcVar1 = "WEST_TOPDIR/zephyr/kernel/msg_q.c";
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec(pcVar1,uVar4);
}



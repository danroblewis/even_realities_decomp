/*
 * Function: FUN_0007ee74
 * Entry:    0007ee74
 * Prototype: undefined FUN_0007ee74()
 */


/* WARNING: Removing unreachable block (ram,0x0004d474) */
/* WARNING: Removing unreachable block (ram,0x0004d476) */

void FUN_0007ee74(uint *param_1,uint param_2,uint param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 == (uint *)0x0) {
    FUN_0007ee2c(&DAT_2000a0d4);
    return;
  }
  if (param_4 != 0) {
    memcpy((int)param_1 + ((param_3 << 0xc) >> 0x15) + 0x10,param_4,param_3 >> 0x14);
  }
  *param_1 = param_3;
  param_1[1] = param_2;
  uVar3 = (*DAT_200027f8)();
  param_1[2] = uVar3;
  uVar6 = execute_bluetooth_callback_with_priority_control(&DAT_20003648,param_1);
  uVar5 = FUN_0007ee2c(&DAT_2000a0d8);
  if (DAT_2001d44c == '\0') {
    if (DAT_2000a0d0 != 0) {
      if ((int)uVar5 == 0) {
        schedule_dashboard_lock_task
                  (&DAT_200056a8,(int)((ulonglong)uVar5 >> 0x20),0x8000,0,0,0,unaff_r4,unaff_lr);
      }
      else if ((int)uVar5 == 9) {
        setup_font_rendering(&DAT_200056a8);
        z_spin_lock_valid(&DAT_200039f8);
        return;
      }
    }
    return;
  }
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar2 = FUN_00072040(&DAT_2000a0c8);
  if (iVar2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,uVar6);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000a0c8);
    uVar4 = 0x72;
  }
  else {
    FUN_00072078(&DAT_2000a0c8);
    process_memory_management_with_timing_control();
    iVar2 = FUN_0007205c(&DAT_2000a0c8);
    if (iVar2 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar4);
      }
      InstructionSynchronizationBarrier(0xf);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000a0c8);
    uVar4 = 0xf0;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar4);
}



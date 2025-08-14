/*
 * Function: FUN_0004f770
 * Entry:    0004f770
 * Prototype: undefined FUN_0004f770()
 */


void FUN_0004f770(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","aeh",
                 "WEST_TOPDIR/nrf/subsys/app_event_manager/app_event_manager.c",0xd1,param_4);
    uVar6 = 0xd1;
  }
  else {
    if ((&UNK_000fa9b3 < (undefined *)param_1[1]) && ((undefined *)param_1[1] < &DAT_000faa14)) {
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
      iVar5 = FUN_00072040(&DAT_2000a2c4);
      if (iVar5 == 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,param_4);
        DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000a2c4);
        uVar6 = 0x72;
      }
      else {
        FUN_00072078(&DAT_2000a2c4);
        *param_1 = 0;
        puVar3 = param_1;
        if (DAT_2000a2cc != (undefined4 *)0x0) {
          *DAT_2000a2cc = param_1;
          puVar3 = DAT_2000a2c8;
        }
        DAT_2000a2c8 = puVar3;
        DAT_2000a2cc = param_1;
        iVar5 = FUN_0007205c(&DAT_2000a2c4);
        if (iVar5 != 0) {
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            setBasePriority(uVar6);
          }
          InstructionSynchronizationBarrier(0xf);
          FUN_00072fdc(&DAT_20002838);
          return;
        }
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0,param_4);
        DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000a2c4);
        uVar6 = 0xf0;
      }
      pcVar4 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
      goto LAB_0004f786;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "(aeh->type_id >= _event_type_list_start) && (aeh->type_id < _event_type_list_end)"
                 ,"WEST_TOPDIR/nrf/subsys/app_event_manager/app_event_manager.c",0xd2,param_4);
    uVar6 = 0xd2;
  }
  pcVar4 = "WEST_TOPDIR/nrf/subsys/app_event_manager/app_event_manager.c";
LAB_0004f786:
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec(pcVar4,uVar6);
}



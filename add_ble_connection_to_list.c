/*
 * Function: add_ble_connection_to_list
 * Entry:    0005f074
 * Prototype: undefined add_ble_connection_to_list()
 */


void add_ble_connection_to_list(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","list","WEST_TOPDIR/zephyr/subsys/net/buf.c",0x1ad)
    ;
    uVar5 = 0x1ad;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      uVar5 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar5 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      iVar4 = check_connection_state_validity(&DAT_2000b004);
      if (iVar4 == 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
        DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b004);
        uVar5 = 0x72;
      }
      else {
        update_connection_state_flags(&DAT_2000b004);
        *param_2 = 0;
        if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
          *param_1 = param_2;
          param_1[1] = param_2;
        }
        else {
          *(undefined4 *)param_1[1] = param_2;
          param_1[1] = param_2;
        }
        iVar4 = validate_and_clear_connection_state(&DAT_2000b004);
        if (iVar4 != 0) {
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            setBasePriority(uVar5);
          }
          InstructionSynchronizationBarrier(0xf);
          return;
        }
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
        DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b004);
        uVar5 = 0xf0;
      }
      pcVar3 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
      goto LAB_0005f090;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf","WEST_TOPDIR/zephyr/subsys/net/buf.c",0x1ae);
    uVar5 = 0x1ae;
  }
  pcVar3 = "WEST_TOPDIR/zephyr/subsys/net/buf.c";
LAB_0005f090:
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call(pcVar3,uVar5);
}



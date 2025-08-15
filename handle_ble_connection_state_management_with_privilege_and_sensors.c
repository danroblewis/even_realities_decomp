/*
 * Function: handle_ble_connection_state_management_with_privilege_and_sensors
 * Entry:    000735cc
 * Prototype: undefined handle_ble_connection_state_management_with_privilege_and_sensors()
 */


bool handle_ble_connection_state_management_with_privilege_and_sensors(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","dwork != ((void *)0)",
                 "WEST_TOPDIR/zephyr/kernel/work.c",0x411);
    uVar5 = 0x411;
  }
  else if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","sync != ((void *)0)",
                 "WEST_TOPDIR/zephyr/kernel/work.c",0x412);
    uVar5 = 0x412;
  }
  else {
    iVar4 = check_privilege_level();
    if (iVar4 == 0) {
      uVar5 = 0;
      bVar6 = (bool)isCurrentModePrivileged();
      if (bVar6) {
        uVar5 = getBasePriority();
      }
      bVar6 = (bool)isCurrentModePrivileged();
      if ((bVar6) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      iVar4 = check_connection_state_validity(&DAT_2000b480);
      if (iVar4 == 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
        DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b480);
        uVar5 = 0x72;
      }
      else {
        update_connection_state_flags(&DAT_2000b480);
        bVar6 = (*(uint *)(param_1 + 0xc) & 0xf) != 0;
        if (bVar6) {
          setup_uart_communication(param_1);
          setup_sensor_interfaces(param_1);
          iVar4 = manage_ble_connection_state_with_linked_list(param_1,param_2);
        }
        else {
          iVar4 = 0;
        }
        uVar7 = validate_and_clear_connection_state(&DAT_2000b480);
        if ((int)uVar7 != 0) {
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            setBasePriority(uVar5);
          }
          InstructionSynchronizationBarrier(0xf);
          if (iVar4 != 0) {
            manage_ble_connection_state_comprehensive
                      (param_2 + 8,(int)((ulonglong)uVar7 >> 0x20),0xffffffff,0xffffffff);
          }
          return bVar6;
        }
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
        DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b480);
        uVar5 = 0xf0;
      }
      pcVar3 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
      goto LAB_000735ea;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!k_is_in_isr()","WEST_TOPDIR/zephyr/kernel/work.c"
                 ,0x413);
    uVar5 = 0x413;
  }
  pcVar3 = "WEST_TOPDIR/zephyr/kernel/work.c";
LAB_000735ea:
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call(pcVar3,uVar5);
}



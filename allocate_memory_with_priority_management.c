/*
 * Function: allocate_memory_with_priority_management
 * Entry:    0004d55c
 * Prototype: undefined allocate_memory_with_priority_management()
 */


/* WARNING: Removing unreachable block (ram,0x0004bd74) */
/* WARNING: Removing unreachable block (ram,0x0004bd7e) */
/* WARNING: Removing unreachable block (ram,0x0004bda2) */
/* WARNING: Removing unreachable block (ram,0x0004bda6) */
/* WARNING: Removing unreachable block (ram,0x0004bdbc) */
/* WARNING: Removing unreachable block (ram,0x0004bdc0) */
/* WARNING: Removing unreachable block (ram,0x0004bdc4) */
/* WARNING: Removing unreachable block (ram,0x0004bdd4) */

int allocate_memory_with_priority_management(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int local_34;
  uint local_30;
  int local_2c [2];
  
  iVar5 = 0;
  iVar6 = 0;
  local_34 = 0;
  local_2c[0] = 0;
  if (param_1 <= DAT_2000366c) {
    do {
      uVar7 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar7 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      iVar3 = check_connection_state_validity(&DAT_2000365c);
      if (iVar3 == 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
        DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000365c);
        uVar7 = 0x72;
LAB_0004bd9c:
                    /* WARNING: Subroutine does not return */
        trigger_system_service_call("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar7);
      }
      update_connection_state_flags(&DAT_2000365c);
      if (local_2c[0] != 0) {
        update_buffer_read_position(&DAT_20003648,iVar5);
        local_2c[0] = 0;
      }
      iVar4 = calculate_buffer_available_space(&DAT_20003648,&local_30);
      iVar3 = DAT_20003648;
      if (local_30 < param_1) {
        if (iVar4 == 0) {
          iVar4 = process_buffer_data_with_state_management
                            (&DAT_20003648,local_30,&local_34,local_2c);
        }
        else {
          update_buffer_read_write_positions(&DAT_20003648);
          iVar3 = iVar5;
        }
      }
      else {
        iVar6 = DAT_20003668 + DAT_20003648 * 4;
        *(byte *)(DAT_20003668 + DAT_20003648 * 4) =
             *(byte *)(DAT_20003668 + DAT_20003648 * 4) & 0xfc;
        DAT_20003648 = calculate_buffer_offset_with_wrapping(&DAT_20003648,DAT_20003648,param_1);
        if (DAT_20003648 == DAT_20003654) {
          DAT_20003658 = DAT_20003658 | 8;
        }
        iVar4 = 0;
        iVar3 = iVar5;
      }
      iVar5 = validate_and_clear_connection_state(&DAT_2000365c);
      if (iVar5 == 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
        DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000365c);
        uVar7 = 0xf0;
        goto LAB_0004bd9c;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar7);
      }
      InstructionSynchronizationBarrier(0xf);
      if (local_34 != 0) {
        if (DAT_20003660 != (code *)0x0) {
          (*DAT_20003660)(&DAT_20003648);
        }
        local_34 = 0;
      }
      iVar5 = iVar3;
    } while (iVar4 != 0);
  }
  return iVar6;
}



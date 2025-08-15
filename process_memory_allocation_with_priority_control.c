/*
 * Function: process_memory_allocation_with_priority_control
 * Entry:    0004d56c
 * Prototype: undefined process_memory_allocation_with_priority_control()
 */


uint process_memory_allocation_with_priority_control(void)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_r3;
  undefined4 in_r3;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  
  do {
    uVar8 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar8 = getBasePriority();
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar3 = check_connection_state_validity(&DAT_2000365c);
    if (uVar3 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
      DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000365c);
      uVar8 = 0x72;
      goto LAB_0004bef2;
    }
    update_connection_state_flags(&DAT_2000365c);
    if (((DAT_20003658 & 8) != 0) || (uVar4 = DAT_2000364c, DAT_2000364c < DAT_20003650)) {
      uVar4 = DAT_2000366c;
    }
    if (uVar4 == DAT_20003650) {
      uVar4 = 0;
      uVar10 = uVar4;
    }
    else {
      bVar1 = *(byte *)(DAT_20003668 + DAT_20003650 * 4);
      uVar7 = (uint)bVar1;
      uVar9 = DAT_20003668 + DAT_20003650 * 4;
      uVar4 = uVar7 & 3;
      uVar10 = uVar4;
      if ((bVar1 & 3) != 0) {
        uVar10 = uVar9;
        if ((uVar4 != 2) || (uVar4 = *(uint *)(DAT_20003668 + DAT_20003650 * 4) >> 2, uVar4 == 0)) {
          if ((int)(uVar7 << 0x1f) < 0) {
            *(byte *)(DAT_20003668 + DAT_20003650 * 4) = bVar1 | 2;
            uVar3 = DAT_20003650;
            uVar6 = (*DAT_20003664)(uVar9);
            DAT_20003650 = calculate_buffer_offset_with_wrapping(&DAT_20003648,uVar3,uVar6);
            uVar4 = 0;
            goto LAB_0004bf52;
          }
          uVar4 = (*DAT_20003664)(uVar9);
          uVar7 = extraout_r3;
        }
        DAT_20003650 = calculate_buffer_offset_with_wrapping
                                 (&DAT_20003648,DAT_20003650,uVar4,uVar7,in_r3);
        update_buffer_write_position(&DAT_20003648,uVar4);
        uVar4 = uVar3;
      }
    }
LAB_0004bf52:
    iVar5 = validate_and_clear_connection_state(&DAT_2000365c);
    if (iVar5 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
      DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000365c);
      uVar8 = 0xf0;
LAB_0004bef2:
                    /* WARNING: Subroutine does not return */
      trigger_system_service_call("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar8);
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar8);
    }
    InstructionSynchronizationBarrier(0xf);
    if (uVar4 == 0) {
      return uVar10;
    }
  } while( true );
}



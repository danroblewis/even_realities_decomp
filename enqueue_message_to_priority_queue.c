/*
 * Function: enqueue_message_to_priority_queue
 * Entry:    00071cf4
 * Prototype: undefined enqueue_message_to_priority_queue()
 */


void enqueue_message_to_priority_queue(int param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = param_1 + 8;
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
  iVar2 = check_connection_state_validity(iVar6);
  if (iVar2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",iVar6);
    uVar7 = 0x72;
  }
  else {
    update_connection_state_flags(iVar6);
    puVar5 = *(undefined4 **)(param_1 + 0x14);
    if (((param_2 < puVar5) ||
        (uVar4 = *(uint *)(param_1 + 0x10),
        (int)param_2 - (int)puVar5 != uVar4 * ((uint)((int)param_2 - (int)puVar5) / uVar4))) ||
       ((undefined4 *)(uVar4 * (*(int *)(param_1 + 0xc) + -1) + (int)puVar5) < param_2)) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                   "((char *)mem >= slab->buffer) && ((((char *)mem - slab->buffer) % slab->block_size) == 0) && ((char *)mem <= (slab->buffer + (slab->block_size * (slab->num_blocks - 1))))"
                   ,"WEST_TOPDIR/zephyr/kernel/mem_slab.c",0x98);
      DEBUG_PRINT2("\tInvalid memory pointer provided\n");
      uVar7 = 0x98;
      pcVar3 = "WEST_TOPDIR/zephyr/kernel/mem_slab.c";
      goto LAB_00071d6e;
    }
    if ((*(int *)(param_1 + 0x18) == 0) &&
       (iVar2 = process_ble_connection_list_with_cleanup(param_1), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x90) = 0;
      *(undefined4 **)(iVar2 + 0x14) = param_2;
      FUN_000738d4();
      validate_ble_connection_state_with_priority(iVar6,uVar7);
      return;
    }
    *param_2 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 **)(param_1 + 0x18) = param_2;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    iVar2 = validate_and_clear_connection_state(iVar6);
    if (iVar2 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar7);
      }
      InstructionSynchronizationBarrier(0xf);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",iVar6);
    uVar7 = 0xf0;
  }
  pcVar3 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
LAB_00071d6e:
                    /* WARNING: Subroutine does not return */
  assertion_failure(pcVar3,uVar7);
}



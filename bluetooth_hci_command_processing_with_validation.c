/*
 * Function: bluetooth_hci_command_processing_with_validation
 * Entry:    00054784
 * Prototype: undefined bluetooth_hci_command_processing_with_validation()
 */


void bluetooth_hci_command_processing_with_validation(int param_1)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  
  uVar3 = calculate_value_difference(param_1 + 0xc);
  uVar1 = *(ushort *)(param_1 + 0x10);
  if (uVar1 < 2) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf->len >= sizeof(*hdr)",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/hci_core.c",0xe85);
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0);
    }
    software_interrupt(2);
  }
  puVar4 = (undefined1 *)update_buffer_position_and_size_alt(param_1 + 0xc,2);
  iVar5 = map_value_category(*puVar4);
  if (-1 < iVar5 << 0x1f) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","evt_flags & (1UL << (0))",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/hci_core.c",0xe89);
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0);
    }
    software_interrupt(2);
  }
  process_data_with_validation_and_parameter_and_compression_alt(*puVar4,param_1,&DAT_0008b168,5);
  if (iVar5 << 0x1e < 0) {
    *(ushort *)(param_1 + 0x10) = uVar1;
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0x14) + (uVar3 & 0xffff);
    return;
  }
  decrement_reference_count_and_cleanup_memory(param_1);
  return;
}



/*
 * Function: process_data_with_state_management_and_parameter_and_compression_alt
 * Entry:    000538f8
 * Prototype: undefined process_data_with_state_management_and_parameter_and_compression_alt()
 */


void process_data_with_state_management_and_parameter_and_compression_alt
               (uint param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 local_38;
  char *local_34;
  uint local_30;
  char *local_2c;
  uint uStack_28;
  undefined *local_24;
  undefined4 uStack_20;
  
  uStack_20 = param_4;
  puVar2 = (undefined *)calculate_ble_memory_offset(*(undefined1 *)(param_3 + 10));
  if (puVar2 == &DAT_20003b4c) {
    iVar3 = calculate_ble_memory_size(param_3);
    if (*(ushort *)(&DAT_2000abf6 + iVar3 * 0xc) == param_1) {
      if (DAT_20002140 != 0) {
        decrement_reference_count_and_cleanup_memory();
        DAT_20002140 = 0;
      }
      iVar3 = calculate_ble_memory_size(param_3);
      if ((*(int *)(&DAT_2000abf8 + iVar3 * 0xc) != 0) && (param_2 == 0)) {
        iVar3 = calculate_ble_memory_size(param_3);
        piVar4 = *(int **)(&DAT_2000abf8 + iVar3 * 0xc);
        uVar5 = (uint)piVar4[1] >> 5;
        if ((char)piVar4[2] == '\0') {
          clear_bit_in_bitmap(*piVar4 + uVar5 * 4,~(1 << (piVar4[1] & 0x1fU)));
        }
        else {
          set_bits(*piVar4 + uVar5 * 4);
        }
      }
      iVar3 = calculate_ble_memory_size(param_3);
      if (*(int *)(&DAT_2000abfc + iVar3 * 0xc) != 0) {
        iVar3 = calculate_ble_memory_size(param_3);
        (&DAT_2000abf4)[iVar3 * 0xc] = (char)param_2;
        iVar3 = calculate_ble_memory_size(param_3);
        z_spin_lock_valid(*(undefined4 *)(&DAT_2000abfc + iVar3 * 0xc));
      }
    }
    else {
      iVar3 = calculate_ble_memory_size(param_3);
      local_24 = (undefined *)(uint)*(ushort *)(&DAT_2000abf6 + iVar3 * 0xc);
      local_2c = "OpCode 0x%04x completed instead of expected 0x%04x";
      local_30 = 4;
      uStack_28 = param_1;
      call_system_cleanup_alt(&DAT_00088138,0x2080,&local_30);
    }
  }
  else {
    bVar1 = *(byte *)(param_3 + 10);
    uStack_28 = calculate_ble_memory_offset((uint)bVar1);
    local_34 = "opcode 0x%04x pool id %u pool %p != &hci_cmd_pool %p";
    local_24 = &DAT_20003b4c;
    local_38 = 6;
    local_30 = param_1;
    local_2c = (char *)(uint)bVar1;
    call_system_cleanup_alt(&DAT_00088138,0x3080,&local_38);
  }
  return;
}



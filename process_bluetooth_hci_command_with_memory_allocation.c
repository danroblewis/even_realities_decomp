/*
 * Function: process_bluetooth_hci_command_with_memory_allocation
 * Entry:    00080fd2
 * Prototype: undefined process_bluetooth_hci_command_with_memory_allocation()
 */


undefined4
process_bluetooth_hci_command_with_memory_allocation
          (int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *extraout_r2;
  undefined4 *puVar5;
  undefined4 *puVar7;
  undefined4 *puVar6;
  
  if (param_1 == 0) {
    iVar1 = process_data_with_initialization_and_store(0x2027,0x27);
    if (iVar1 != 0) {
      iVar2 = ble_memory_allocation_utility(iVar1 + 0xc,0x27);
      iVar3 = copy_memory_word_short_and_byte(iVar2,param_2,param_3);
      puVar5 = extraout_r2;
      puVar7 = (undefined4 *)(iVar3 + 7);
      do {
        puVar6 = puVar5 + 1;
        *puVar7 = *puVar5;
        puVar5 = puVar6;
        puVar7 = puVar7 + 1;
      } while (puVar6 != (undefined4 *)(param_3 + 0x10));
      fill_memory_buffer(iVar2 + 0x17,0,0x10);
      uVar4 = process_data_with_initialization_and_validation(0x2027,iVar1,0,param_4);
      return uVar4;
    }
    uVar4 = 0xffffff97;
  }
  else {
    uVar4 = 0xffffffea;
  }
  return uVar4;
}



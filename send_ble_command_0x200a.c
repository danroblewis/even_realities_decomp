/*
 * Function: send_ble_command_0x200a
 * Entry:    000812d2
 * Prototype: undefined send_ble_command_0x200a()
 */


undefined4 send_ble_command_0x200a(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [12];
  
  iVar1 = process_data_with_initialization_and_store(0x200a,1);
  if (iVar1 == 0) {
    uVar2 = 0xffffff97;
  }
  else {
    write_ble_data_with_allocation(iVar1 + 0xc,param_2 != 0);
    initialize_data_structure_and_store(iVar1,auStack_1c,param_1 + 0x10,7,param_2);
    uVar2 = process_data_with_initialization_and_validation(0x200a,iVar1,0);
  }
  return uVar2;
}



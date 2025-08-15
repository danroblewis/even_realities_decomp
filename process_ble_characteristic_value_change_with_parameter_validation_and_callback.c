/*
 * Function: process_ble_characteristic_value_change_with_parameter_validation_and_callback
 * Entry:    000590bc
 * Prototype: undefined process_ble_characteristic_value_change_with_parameter_validation_and_callback()
 */


undefined4
process_ble_characteristic_value_change_with_parameter_validation_and_callback
          (int *param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  undefined1 uVar4;
  short *psVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  ushort local_28;
  short local_26;
  char local_24;
  
  psVar5 = (short *)update_buffer_position_and_size_alt(param_2 + 0xc,4);
  sVar2 = *psVar5;
  sVar3 = psVar5[1];
  uVar7 = *(undefined4 *)(param_2 + 0xc);
  uVar1 = *(ushort *)(param_2 + 0x10);
  iVar6 = FUN_00082ec8(*(undefined4 *)*param_1,1);
  if (iVar6 == 0) {
    iVar6 = FUN_00082236(param_1 + 0x48,5);
    if (iVar6 == 0) {
      return 0x12;
    }
  }
  else {
    if (sVar2 == 0) {
      return 1;
    }
    fill_memory_buffer(&local_34,0,0x14);
    local_34 = *(undefined4 *)*param_1;
    local_24 = '\x01';
    uVar4 = (undefined1)uVar1;
    local_28 = uVar1 & 0xff;
    local_2c = uVar7;
    local_26 = sVar3;
    FUN_00081cee(sVar2,sVar2,&LAB_000588b4_1,&local_34);
    if (local_24 == '\0') {
      add_ble_connection_to_list(*param_1 + 0x28,local_30);
      local_30 = process_ble_characteristic_value_change_with_validation_and_callback
                           (param_1,0x17,0);
      if (local_30 == 0) {
        return 0x11;
      }
      psVar5 = (short *)ble_memory_allocation_utility(local_30 + 0xc,4);
      *psVar5 = sVar2;
      psVar5[1] = sVar3;
      ble_memory_allocation_utility(local_30 + 0xc,uVar4);
      memcpy(psVar5 + 2,uVar7,uVar4);
      FUN_000821a4(param_1,local_30);
    }
    else {
      FUN_000821f4(param_1,0x16,sVar2,local_24);
    }
  }
  return 0;
}



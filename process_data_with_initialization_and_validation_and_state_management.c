/*
 * Function: process_data_with_initialization_and_validation_and_state_management
 * Entry:    00054528
 * Prototype: undefined process_data_with_initialization_and_validation_and_state_management()
 */


void process_data_with_initialization_and_validation_and_state_management(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  undefined4 local_30;
  char *local_2c;
  uint uStack_28;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  
  puVar4 = *(ushort **)(param_1 + 0xc);
  local_20 = puVar4[1];
  uVar1 = *puVar4;
  local_1e = puVar4[2];
  uVar5 = (uint)uVar1;
  local_1c = puVar4[3];
  local_1a = puVar4[4];
  iVar2 = bt_connection_state_transition_with_validation(uVar5,1);
  if (iVar2 == 0) {
    local_2c = "Unable to lookup conn for handle %u";
    local_30 = 3;
    uStack_28 = uVar5;
    call_system_cleanup_alt(&DAT_00088138,0x1840,&local_30);
    FUN_00080f56(uVar5,2);
  }
  else {
    iVar3 = bt_connection_disconnect_with_callback(iVar2,&local_20);
    if (iVar3 == 0) {
      FUN_00080f56(uVar5,0x1e);
    }
    else {
      iVar3 = process_data_with_initialization_and_store(0x2020,0xe);
      if (iVar3 != 0) {
        puVar4 = (ushort *)FUN_0005f5d0(iVar3 + 0xc,0xe);
        *puVar4 = uVar1;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[1] = local_20;
        puVar4[2] = local_1e;
        puVar4[3] = local_1c;
        puVar4[4] = local_1a;
        process_data_with_initialization_and_callback_validation(0x2020,iVar3);
      }
    }
    validate_and_process_ble_characteristics_with_callback_validation_and_state_management(iVar2);
  }
  return;
}



/*
 * Function: handle_ble_connection_state_change_with_callback
 * Entry:    00059550
 * Prototype: undefined handle_ble_connection_state_change_with_callback()
 */


undefined4 handle_ble_connection_state_change_with_callback(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  int iVar5;
  char cVar6;
  ushort uVar7;
  undefined4 uVar8;
  undefined1 local_38 [2];
  ushort local_36;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  undefined1 local_24;
  char local_23;
  
  puVar4 = (ushort *)FUN_0005f594(param_2 + 0xc,6);
  uVar7 = *puVar4;
  uVar2 = puVar4[1];
  uVar8 = *(undefined4 *)(param_2 + 0xc);
  if (uVar7 != 0) {
    if (uVar2 == 0) {
      uVar7 = 0;
    }
    else if (uVar7 <= uVar2) {
      local_38[0] = 0;
      uVar3 = (ushort)local_34;
      local_34 = CONCAT22(0x2800,uVar3 & 0xff00);
      local_36 = puVar4[2];
      iVar5 = compare_data_structures(local_38,&local_34);
      if (iVar5 == 0) {
        uVar1 = *(undefined1 *)(param_2 + 0x10);
        fill_memory_buffer(&local_34,0,0x14);
        local_30 = process_ble_characteristic_value_change_with_validation_and_callback(param_1,7,0)
        ;
        if (local_30 == 0) {
          return 0x11;
        }
        local_23 = '\n';
        local_34 = param_1;
        local_2c = iVar5;
        uStack_28 = uVar8;
        local_24 = uVar1;
        FUN_00081cee(uVar7,uVar2,0x583d1,&local_34);
        if (local_23 == '\0') {
          FUN_000821a4(param_1,local_30);
          return 0;
        }
        bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation_and_callback_execution
                  (*(undefined4 *)(local_30 + 0x18));
        FUN_0005f24c(local_30);
        cVar6 = local_23;
      }
      else {
        cVar6 = '\n';
      }
      goto LAB_000595a6;
    }
  }
  cVar6 = '\x01';
LAB_000595a6:
  FUN_000821f4(param_1,6,uVar7,cVar6);
  return 0;
}



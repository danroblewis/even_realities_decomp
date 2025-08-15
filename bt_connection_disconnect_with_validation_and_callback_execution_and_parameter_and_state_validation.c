/*
 * Function: bt_connection_disconnect_with_validation_and_callback_execution_and_parameter_and_state_validation
 * Entry:    00057cc4
 * Prototype: undefined bt_connection_disconnect_with_validation_and_callback_execution_and_parameter_and_state_validation()
 */


void bt_connection_disconnect_with_validation_and_callback_execution_and_parameter_and_state_validation
               (undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_40;
  char *local_3c;
  undefined4 uStack_38;
  undefined4 local_20;
  char *local_1c;
  
  if (*(ushort *)(param_2 + 0x10) < 4) {
    uVar3 = 0x1040;
    local_1c = "Too small L2CAP PDU received";
  }
  else {
    iVar1 = update_buffer_position_and_size_alt(param_2 + 0xc,4);
    uVar4 = FUN_00081aca(param_1,*(undefined2 *)(iVar1 + 2));
    iVar1 = (int)uVar4;
    if (iVar1 == 0) {
      local_3c = "Ignoring data for unknown channel ID 0x%04x";
      local_40 = 3;
      uStack_38 = (int)((ulonglong)uVar4 >> 0x20);
      FUN_00081746(&DAT_00088160,0x1880,&local_40);
      goto LAB_00057d22;
    }
    if (0x3f < (ushort)(*(short *)(iVar1 + 0x14) - 0x40U)) {
      (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1,param_2);
      goto LAB_00057d22;
    }
    if (param_3 == 0) {
      FUN_00081b30();
      goto LAB_00057d22;
    }
    if (*(char *)(iVar1 + 0xb4) == '\x04') {
      local_1c = "Ignoring data received while disconnecting";
    }
    else {
      iVar2 = FUN_000816a2(iVar1 + 0x10);
      if (-1 < iVar2 << 0x1e) {
        if ((ushort)(*(short *)(iVar1 + 0xb6) - 0x80U) < 0x80) {
          initialize_debug_system_with_validation(iVar1 + 0x98,param_2);
          FUN_00072fdc(iVar1 + 0x88);
          return;
        }
        bt_connection_disconnect_with_callback_execution_and_parameter_and_state_validation_and_callback
                  (iVar1);
        goto LAB_00057d22;
      }
      local_1c = "Ignoring data received while channel has shutdown";
    }
    uVar3 = 0x1080;
  }
  local_20 = 2;
  FUN_00081746(&DAT_00088160,uVar3,&local_20);
LAB_00057d22:
  decrement_reference_count_and_cleanup_memory(param_2);
  return;
}



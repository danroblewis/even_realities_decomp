/*
 * Function: bt_connection_disconnect_with_callback_execution_and_parameter_and_state_validation_and_callback
 * Entry:    00057b60
 * Prototype: undefined bt_connection_disconnect_with_callback_execution_and_parameter_and_state_validation_and_callback()
 */


void bt_connection_disconnect_with_callback_execution_and_parameter_and_state_validation_and_callback
               (int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  int *extraout_r3;
  uint uVar7;
  undefined4 local_40;
  char *local_3c;
  uint uStack_38;
  uint local_34;
  undefined4 local_20;
  char *local_1c;
  
  piVar6 = (int *)(param_1 + 0x1c);
  do {
    iVar2 = get_counter_value(piVar6);
    if (iVar2 == 0) {
      local_1c = "No credits to receive packet";
      goto LAB_00057c04;
    }
    piVar6 = extraout_r3;
  } while (*extraout_r3 != iVar2);
  *extraout_r3 = iVar2 + -1;
  uVar7 = (uint)*(ushort *)(param_2 + 0x10);
  if (*(ushort *)(param_1 + 0x18) < uVar7) {
    local_3c = "PDU size > MPS (%u > %u)";
    uVar4 = 0x2080;
    local_40 = 4;
    uStack_38 = uVar7;
    local_34 = (uint)*(ushort *)(param_1 + 0x18);
LAB_00057bb0:
    process_and_compress_data_with_validation(&DAT_00088160,uVar4,&local_40);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0) {
LAB_00057bc6:
      bt_connection_disconnect_with_state_management_and_callback_and_parameter_and_state_validation
                (param_1,param_2);
      return;
    }
    if (uVar7 < 2) {
      uVar4 = 0x1080;
      local_1c = "Too short data packet";
    }
    else {
      uVar7 = read_ble_data_uint16(param_2 + 0xc);
      if (*(ushort *)(param_1 + 0x16) < uVar7) {
        local_1c = "Invalid SDU length";
      }
      else {
        pcVar5 = *(code **)(*(int *)(param_1 + 4) + 0x10);
        if (pcVar5 == (code *)0x0) {
          uStack_38 = (**(code **)(*(int *)(param_1 + 4) + 0x14))(param_1,param_2);
          if (-1 < (int)uStack_38) {
            if (*(char *)(param_1 + 0xb4) != '\x03') {
              return;
            }
            bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation
                      (param_1,1);
            return;
          }
          if (uStack_38 == 0xffffff89) {
            return;
          }
          uVar4 = 0x1840;
          local_3c = "err %d";
          local_40 = 3;
          goto LAB_00057bb0;
        }
        iVar2 = (*pcVar5)(param_1);
        *(int *)(param_1 + 0x80) = iVar2;
        if (iVar2 != 0) {
          *(short *)(param_1 + 0x84) = (short)uVar7;
          uVar1 = *(ushort *)(param_2 + 0x10);
          uVar3 = calculate_ble_buffer_available_space(iVar2 + 0xc);
          if (uVar7 - uVar1 < uVar3) {
            iVar2 = uVar7 - *(ushort *)(param_2 + 0x10);
          }
          else {
            iVar2 = calculate_ble_buffer_available_space(*(int *)(param_1 + 0x80) + 0xc);
          }
          if ((((*(ushort *)(param_1 + 0x18) - 1) + iVar2) / (uint)*(ushort *)(param_1 + 0x18) &
              0xffff) != 0) {
            bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation
                      (param_1);
          }
          goto LAB_00057bc6;
        }
        local_1c = "Unable to allocate buffer for SDU";
      }
LAB_00057c04:
      uVar4 = 0x1040;
    }
    local_20 = 2;
    process_and_compress_data_with_validation(&DAT_00088160,uVar4,&local_20);
  }
  handle_ble_connection_state_transition(param_1);
  return;
}



/*
 * Function: process_ble_characteristic_value_change_with_parameter_validation
 * Entry:    00058cfc
 * Prototype: undefined process_ble_characteristic_value_change_with_parameter_validation()
 */


undefined4
process_ble_characteristic_value_change_with_parameter_validation(int param_1,int param_2)

{
  char cVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 local_58;
  char *local_54;
  uint uStack_50;
  uint local_4c;
  int local_44;
  undefined4 local_30;
  char *local_2c;
  
  if (*(short *)(param_2 + 0x10) == 0) {
    local_2c = "Too small ATT PDU received";
    local_30 = 2;
    process_and_compress_data_wrapper(&DAT_00088100,0x1040,&local_30);
  }
  else {
    pbVar2 = (byte *)update_buffer_position_and_size_alt(param_2 + 0xc,1);
    if (*(int *)(param_1 + -8) != 0) {
      iVar6 = 0;
      do {
        if ((&SYSTEM_MESSAGE_AND_ERROR_HANDLING_12)[iVar6 * 8] == *pbVar2) {
          local_44 = *(int *)(param_1 + 0x13c);
          if (local_44 != 0) goto LAB_00058dbc;
          uVar3 = increment_counter_in_structure(param_2);
          cVar1 = (&BLE_CHARACTERISTIC_VALUE_CHANGE_PARAMETER_VALIDATION)[iVar6 * 8];
          *(undefined4 *)(param_1 + 0x13c) = uVar3;
          if (cVar1 == '\x01') {
            iVar4 = set_bit_and_check_if_already_set(param_1 + 0x118,local_44);
            if (iVar4 == 0) {
LAB_00058e30:
              if ((uint)*(ushort *)(param_2 + 0x10) <
                  (uint)(byte)(&SYSTEM_MESSAGE_AND_ERROR_HANDLING_13)[iVar6 * 8]) {
                local_4c = (uint)*pbVar2;
                local_54 = "Invalid len %u for code 0x%02x";
                local_58 = 4;
                uStack_50 = (uint)*(ushort *)(param_2 + 0x10);
                process_and_compress_data_wrapper(&DAT_00088100,0x2040,&local_58);
                if ((&BLE_CHARACTERISTIC_VALUE_CHANGE_PARAMETER_VALIDATION)[iVar6 * 8] != '\x01')
                goto LAB_00058d9c;
                iVar6 = 4;
              }
              else {
                iVar6 = (*(code *)(&SYSTEM_MESSAGE_AND_ERROR_HANDLING_14)[iVar6 * 2])
                                  (param_1 + -8,param_2);
                if ((cVar1 != '\x01') || (iVar6 == 0)) goto LAB_00058d9c;
              }
              uVar5 = (uint)*pbVar2;
              goto LAB_00058e12;
            }
            local_2c = "Ignoring unexpected request";
          }
          else {
            if ((cVar1 != '\x05') ||
               (iVar4 = set_bit_and_check_if_already_set(param_1 + 0x118,1), iVar4 == 0))
            goto LAB_00058e30;
            local_2c = "Ignoring unexpected indication";
          }
          local_30 = 2;
          process_and_compress_data_wrapper(&DAT_00088100,0x1080,&local_30);
          goto LAB_00058d9c;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x1e);
      if (*(int *)(param_1 + 0x13c) != 0) {
LAB_00058dbc:
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!att_chan->rsp_buf",
                     "WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0xb54);
                    /* WARNING: Subroutine does not return */
        trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0xb54);
      }
      uVar3 = increment_counter_in_structure(param_2);
      *(undefined4 *)(param_1 + 0x13c) = uVar3;
      uStack_50 = (uint)*pbVar2;
      local_54 = "Unhandled ATT code 0x%02x";
      local_58 = 3;
      process_and_compress_data_wrapper(&DAT_00088100,0x1880,&local_58);
      uVar7 = bt_connection_disconnect_with_validation_and_state_management_and_callback_execution_and_parameter_and_state_validation_and_callback
                        (*pbVar2);
      uVar5 = (uint)((ulonglong)uVar7 >> 0x20);
      if (((int)uVar7 != 0) && ((int)uVar7 != 5)) {
        iVar6 = 6;
LAB_00058e12:
        handle_ble_characteristic_value_change_with_callback_and_debug(param_1 + -8,uVar5,0,iVar6);
      }
LAB_00058d9c:
      decrement_reference_count_and_cleanup_memory(*(undefined4 *)(param_1 + 0x13c));
      *(undefined4 *)(param_1 + 0x13c) = 0;
    }
  }
  return 0;
}



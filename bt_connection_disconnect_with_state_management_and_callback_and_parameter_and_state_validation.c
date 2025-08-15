/*
 * Function: bt_connection_disconnect_with_state_management_and_callback_and_parameter_and_state_validation
 * Entry:    00057a04
 * Prototype: undefined bt_connection_disconnect_with_state_management_and_callback_and_parameter_and_state_validation()
 */


void bt_connection_disconnect_with_state_management_and_callback_and_parameter_and_state_validation
               (int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int extraout_r1;
  ushort uVar7;
  undefined4 uVar8;
  uint local_48;
  char *local_44;
  undefined1 *local_40;
  int local_3c;
  undefined4 local_28;
  char *local_24;
  
  uVar2 = calculate_total_linked_list_size(*(undefined4 *)(param_1 + 0x80));
  uVar7 = uVar2;
  if (uVar2 != 0) {
    uVar7 = *(ushort *)(extraout_r1 + 0x18);
  }
  if ((uint)*(ushort *)(param_1 + 0x84) < (uint)*(ushort *)(param_2 + 0x10) + (uint)uVar2) {
    local_24 = "SDU length mismatch";
  }
  else {
    *(ushort *)(extraout_r1 + 0x18) = uVar7 + 1;
    local_40 = &LAB_00081698_1;
    local_48 = 0;
    local_44 = (char *)0x0;
    local_3c = param_1;
    sVar3 = process_ble_data_stream_in_chunks
                      (*(undefined4 *)(param_1 + 0x80),*(undefined2 *)(param_2 + 0x10),
                       *(undefined4 *)(param_2 + 0xc));
    if (*(short *)(param_2 + 0x10) == sVar3) {
      uVar8 = *(undefined4 *)(param_1 + 0x80);
      uVar4 = calculate_total_linked_list_size(uVar8);
      if (*(ushort *)(param_1 + 0x84) <= uVar4) {
        bVar1 = *(byte *)(param_1 + 0xb4);
        *(undefined4 *)(param_1 + 0x80) = 0;
        *(undefined2 *)(param_1 + 0x84) = 0;
        if (bVar1 == 3) {
          iVar5 = get_counter_value(param_1 + 0x1c);
          if (iVar5 == 0) {
            puVar6 = (undefined1 *)(**(code **)(*(int *)(param_1 + 4) + 0x14))(param_1,uVar8);
            if ((int)puVar6 < 0) {
              if (puVar6 == (undefined1 *)0xffffff89) {
                return;
              }
              local_44 = "err %d";
              local_48 = (uint)bVar1;
              local_40 = puVar6;
              process_and_compress_data_with_validation(&DAT_00088160,0x1840,&local_48);
              handle_ble_connection_state_transition(param_1);
            }
            else if (*(char *)(param_1 + 0xb4) == '\x03') {
              bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation
                        (param_1,1);
            }
            decrement_reference_count_and_cleanup_memory(uVar8);
            return;
          }
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","atomic_get(&chan->rx.credits) == 0",
                       "WEST_TOPDIR/zephyr/subsys/bluetooth/host/l2cap.c",0x99c);
          uVar8 = 0x99c;
        }
        else {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                       "bt_l2cap_chan_get_state(&chan->chan) == BT_L2CAP_CONNECTED",
                       "WEST_TOPDIR/zephyr/subsys/bluetooth/host/l2cap.c",0x99b);
          uVar8 = 0x99b;
        }
                    /* WARNING: Subroutine does not return */
        trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/l2cap.c",uVar8);
      }
      iVar5 = get_counter_value(param_1 + 0x1c);
      if (iVar5 != 0) {
        return;
      }
      bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation
                (param_1,1);
      return;
    }
    local_24 = "Unable to store SDU";
  }
  local_28 = 2;
  process_and_compress_data_with_validation(&DAT_00088160,0x1040,&local_28);
  handle_ble_connection_state_transition(param_1);
  return;
}



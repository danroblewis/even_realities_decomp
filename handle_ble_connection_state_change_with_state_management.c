/*
 * Function: handle_ble_connection_state_change_with_state_management
 * Entry:    00059690
 * Prototype: undefined handle_ble_connection_state_change_with_state_management()
 */


void handle_ble_connection_state_change_with_state_management(void)

{
  undefined4 extraout_r1;
  undefined4 unaff_r4;
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 unaff_lr;
  undefined8 uVar4;
  
  setup_error_handling(&DAT_20003a28);
  iVar1 = 0;
  puVar3 = &DAT_2000add4;
  do {
    iVar1 = iVar1 + 1;
    initialize_debug_system(&DAT_20003a28,puVar3);
    puVar3 = puVar3 + 0x14;
  } while (iVar1 != 10);
  uVar4 = set_bits_in_value(&DAT_2000af04,1);
  uVar2 = (uint)uVar4 & (uint)((ulonglong)uVar4 >> 0x20);
  if (uVar2 == 0) {
    update_ble_connection_handle_counter();
    ANCS_CLIENT_LIST_HEAD = uVar2;
    ANCS_CLIENT_LIST_TAIL = uVar2;
    initialize_data_structure_with_buffer_setup(&DAT_200063a0,&LAB_00082cb2_1);
    process_data_with_state_management_and_compression_alt
              (&DAT_200063a0,extraout_r1,0x148,0,unaff_r4,unaff_lr);
    initialize_data_structure_with_buffer_setup(&DAT_20006418,&LAB_0005b4bc_1);
    set_bits_in_value(&DAT_20006448,2);
    initialize_data_structure_with_buffer_setup(&DAT_20006350,0x82fa7);
    bt_connection_disconnect_with_parameter_validation_and_callback(&DAT_200029f8);
    DAT_200029f4 = BT_CONNECTION_CALLBACK_LIST_HEAD;
    BT_CONNECTION_CALLBACK_LIST_HEAD = &DAT_200029d4;
    return;
  }
  return;
}



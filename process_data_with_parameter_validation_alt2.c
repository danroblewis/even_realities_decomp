/*
 * Function: process_data_with_parameter_validation_alt2
 * Entry:    000513e8
 * Prototype: undefined process_data_with_parameter_validation_alt2()
 */


uint process_data_with_parameter_validation_alt2(int *param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  int *piVar13;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 uStack_32;
  char *local_30;
  undefined4 local_2c;
  
  do {
    uVar11 = (uint)*(ushort *)(param_2 + 0x10);
    if (uVar11 == 0) {
LAB_000513fa:
      cleanup_with_callback(param_2,*param_1);
      iVar4 = 0;
      iVar9 = *param_1;
LAB_00051506:
      cleanup_with_callback(iVar4,iVar9);
      return uVar11;
    }
    if (uVar11 < 8) {
      uVar11 = 9;
      goto LAB_000513fa;
    }
    uVar5 = **(undefined4 **)(param_2 + 0xc);
    uVar11 = (*(undefined4 **)(param_2 + 0xc))[1];
    local_38._2_2_ = (ushort)((uint)uVar5 >> 0x10);
    uVar2 = local_38._2_2_ << 8 | local_38._2_2_ >> 8;
    local_38 = CONCAT22(uVar2,(short)uVar5);
    uVar10 = (uVar11 & 0xff) << 8 | uVar11 >> 8 & 0xff;
    _local_34 = CONCAT22((short)(uVar11 >> 0x10),(short)uVar10);
    update_buffer_position_and_size(param_2 + 0xc,8);
    uVar3 = local_38;
    if (*(ushort *)(param_2 + 0x10) < uVar2) {
      uVar11 = 9;
LAB_000515f8:
      iVar9 = 0;
      iVar4 = param_2;
LAB_000514b2:
      init_data_structure(param_1[2],iVar4);
      piVar13 = (int *)param_1[2];
      piVar6 = piVar13 + 1;
      iVar8 = write_ble_uart_packet_extended_length_marker_type5(piVar6,2);
      if (iVar8 == 0) {
LAB_000514f4:
        write_ble_uart_packet_extended_length_marker_type7(piVar6,2);
      }
      else {
        local_30 = "rc";
        local_2c = 2;
        iVar8 = write_ble_uart_packet_string_with_type3_header(piVar6,&local_30);
        if ((iVar8 == 0) || (iVar8 = write_ble_uart_packet_32bit_value(piVar6,uVar11), iVar8 == 0))
        goto LAB_000514f4;
        iVar8 = write_ble_uart_packet_extended_length_marker_type7(piVar6,2);
        if (iVar8 != 0) {
          convert_float_format(&local_38,&local_30,(piVar13[1] - *(int *)(*piVar13 + 0xc)) + -8);
          *(short *)(*piVar13 + 0x10) = (short)piVar13[1] - (short)*(undefined4 *)(*piVar13 + 0xc);
          update_data_structure(param_1[2]);
          (**(code **)(*param_1 + 0x2c))(iVar4);
          iVar4 = 0;
        }
      }
      cleanup_with_callback(iVar9,*param_1);
      iVar9 = *param_1;
      goto LAB_00051506;
    }
    uVar11 = local_38 & 5;
    if ((local_38 & 5) != 0) {
      uVar11 = 8;
      goto LAB_000515f8;
    }
    iVar4 = transfer_data_with_callback(param_2,*param_1);
    if (iVar4 == 0) {
      uVar11 = 2;
      goto LAB_000515f8;
    }
    piVar6 = (int *)param_1[1];
    *piVar6 = param_2;
    thunk_initialize_ble_uart_packet_buffer_structure
              (piVar6 + 1,4,*(undefined4 *)(param_2 + 0xc),*(undefined2 *)(param_2 + 0x10),1);
    init_data_structure(param_1[2],iVar4);
    piVar6 = (int *)param_1[2];
    piVar6[0xd] = uVar11;
    iVar9 = param_2;
    if (1 < (local_38 << 0x1b) >> 0x1e) {
      uVar11 = 0xd;
      goto LAB_000514b2;
    }
    puVar7 = (undefined4 *)process_data_with_callback_and_validation_alt2(uVar10,uStack_32._1_1_);
    if (puVar7 == (undefined4 *)0x0) {
LAB_000515aa:
      uVar11 = 8;
      goto LAB_000514b2;
    }
    if ((local_38 & 7) == 0) {
      pcVar12 = (code *)*puVar7;
    }
    else {
      if ((local_38 & 7) != 2) {
        uVar11 = 3;
        goto LAB_000514b2;
      }
      pcVar12 = (code *)puVar7[1];
    }
    if (pcVar12 == (code *)0x0) goto LAB_000515aa;
    iVar8 = write_ble_uart_packet_extended_length_marker_type5(param_1[2] + 4,0xf);
    if (iVar8 == 0) {
      uVar11 = 7;
      goto LAB_000514b2;
    }
    uVar11 = (*pcVar12)(param_1);
    iVar8 = write_ble_uart_packet_extended_length_marker_type7(param_1[2] + 4,0xf);
    if (iVar8 == 0) {
      if (uVar11 == 0) {
        uVar11 = 7;
      }
      goto LAB_000514b2;
    }
    if (uVar11 != 0) goto LAB_000514b2;
    sVar1 = *(short *)((int)piVar6 + 0x36);
    if ((sVar1 != 0) && ((uVar3 & 0x18) == 0)) {
      pcVar12 = (code *)process_data_with_state_management_alt2((short)piVar6[0xd]);
      if (pcVar12 == (code *)0x0) {
        uVar11 = 1;
      }
      else {
        uVar11 = (*pcVar12)(sVar1);
        if (uVar11 == 0) goto LAB_00051594;
        if (iVar4 == 0) goto LAB_000515f8;
      }
      goto LAB_000514b2;
    }
    convert_float_format(&local_38,&local_30,(piVar6[1] - *(int *)(*piVar6 + 0xc)) + -8);
    *(short *)(*piVar6 + 0x10) = (short)piVar6[1] - (short)*(undefined4 *)(*piVar6 + 0xc);
    update_data_structure(param_1[2]);
LAB_00051594:
    uVar11 = (**(code **)(*param_1 + 0x2c))(iVar4);
    if (uVar11 != 0) goto LAB_000515f8;
    update_buffer_position_and_size(param_2 + 0xc,uVar2);
  } while( true );
}



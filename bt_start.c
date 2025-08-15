/*
 * Function: bt_start
 * Entry:    00019308
 * Prototype: undefined bt_start()
 */


int bt_start(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  while (DAT_2000ff72 != '\0') {
    calculate_ble_schedule_timing_with_division_alt(1);
  }
  DAT_2000ff72 = 1;
  iVar6 = get_work_mode();
  if ((*(char *)(iVar6 + 0x1058) == '\x02') ||
     (iVar6 = get_work_mode(), *(char *)(iVar6 + 0x1058) == '\0')) {
    DAT_2000ff72 = 0;
    return 0;
  }
  DAT_20002360 = 0x14ff;
  iVar6 = get_work_mode();
  if (iVar6 == 1) {
    DAT_2000ff73 = 1;
  }
  else {
    DAT_2000ff73 = 2;
  }
  DAT_20002364 = &DAT_2000ff73;
  uVar7 = get_system_data();
  safe_string_copy(&DAT_2000ff74,uVar7,0x13);
  iVar6 = get_work_mode();
  DEBUG_PRINT("c->esb_channel %d\r\n",(uint)*(byte *)(iVar6 + 2));
  iVar6 = get_work_mode();
  if (iVar6 == 1) {
    iVar6 = get_system_ready_state();
    if (iVar6 != 1) {
      iVar6 = get_work_mode();
      if (*(char *)(iVar6 + 2) == -1) {
        iVar6 = get_work_mode();
        uVar1 = *(undefined1 *)(iVar6 + 0xfdc);
        iVar6 = get_work_mode();
        uVar2 = *(undefined1 *)(iVar6 + 0xfdb);
        iVar6 = get_work_mode();
        uVar3 = *(undefined1 *)(iVar6 + 0xfda);
        pcVar9 = "%s_R_%02X%02X%02X";
LAB_000194c0:
        handle_buffer_overflow_condition(&DAT_2000ff87,0,0x20,pcVar9,"Even G1",uVar1,uVar2,uVar3);
        goto LAB_000193e4;
      }
      iVar6 = get_work_mode();
      uVar1 = *(undefined1 *)(iVar6 + 2);
      iVar6 = get_work_mode();
      uVar2 = *(undefined1 *)(iVar6 + 0xfdc);
      iVar6 = get_work_mode();
      uVar3 = *(undefined1 *)(iVar6 + 0xfdb);
      iVar6 = get_work_mode();
      uVar4 = *(undefined1 *)(iVar6 + 0xfda);
      pcVar9 = "%s_%d_R_%02X%02X%02X";
LAB_00019492:
      handle_buffer_overflow_condition
                (&DAT_2000ff87,0,0x20,pcVar9,"Even G1",uVar1,uVar2,uVar3,uVar4);
      goto LAB_000193e4;
    }
    iVar6 = get_work_mode();
    if (*(char *)(iVar6 + 2) == -1) {
      iVar6 = get_work_mode();
      uVar1 = *(undefined1 *)(iVar6 + 0xfdc);
      iVar6 = get_work_mode();
      uVar2 = *(undefined1 *)(iVar6 + 0xfdb);
      iVar6 = get_work_mode();
      uVar3 = *(undefined1 *)(iVar6 + 0xfda);
      pcVar9 = "%sV%d%d%d_R_%02X%02X%02X";
LAB_00019452:
      handle_buffer_overflow_condition
                (&DAT_2000ff87,0,0x20,pcVar9,"Even G1",1,4,5,uVar1,uVar2,uVar3);
      goto LAB_000193e4;
    }
    iVar6 = get_work_mode();
    uVar1 = *(undefined1 *)(iVar6 + 2);
    iVar6 = get_work_mode();
    uVar2 = *(undefined1 *)(iVar6 + 0xfdc);
    iVar6 = get_work_mode();
    uVar3 = *(undefined1 *)(iVar6 + 0xfdb);
    iVar6 = get_work_mode();
    uVar4 = *(undefined1 *)(iVar6 + 0xfda);
    pcVar9 = "%sV%d%d%d_%d_R_%02X%02X%02X";
  }
  else {
    iVar6 = get_system_ready_state();
    if (iVar6 != 1) {
      iVar6 = get_work_mode();
      if (*(char *)(iVar6 + 2) == -1) {
        iVar6 = get_work_mode();
        uVar1 = *(undefined1 *)(iVar6 + 0xfe2);
        iVar6 = get_work_mode();
        uVar2 = *(undefined1 *)(iVar6 + 0xfe1);
        iVar6 = get_work_mode();
        uVar3 = *(undefined1 *)(iVar6 + 0xfe0);
        pcVar9 = "%s_L_%02X%02X%02X";
        goto LAB_000194c0;
      }
      iVar6 = get_work_mode();
      uVar1 = *(undefined1 *)(iVar6 + 2);
      iVar6 = get_work_mode();
      uVar2 = *(undefined1 *)(iVar6 + 0xfe2);
      iVar6 = get_work_mode();
      uVar3 = *(undefined1 *)(iVar6 + 0xfe1);
      iVar6 = get_work_mode();
      uVar4 = *(undefined1 *)(iVar6 + 0xfe0);
      pcVar9 = "%s_%d_L_%02X%02X%02X";
      goto LAB_00019492;
    }
    iVar6 = get_work_mode();
    if (*(char *)(iVar6 + 2) == -1) {
      iVar6 = get_work_mode();
      uVar1 = *(undefined1 *)(iVar6 + 0xfe2);
      iVar6 = get_work_mode();
      uVar2 = *(undefined1 *)(iVar6 + 0xfe1);
      iVar6 = get_work_mode();
      uVar3 = *(undefined1 *)(iVar6 + 0xfe0);
      pcVar9 = "%sV%d%d%d_L_%02X%02X%02X";
      goto LAB_00019452;
    }
    iVar6 = get_work_mode();
    uVar1 = *(undefined1 *)(iVar6 + 2);
    iVar6 = get_work_mode();
    uVar2 = *(undefined1 *)(iVar6 + 0xfe2);
    iVar6 = get_work_mode();
    uVar3 = *(undefined1 *)(iVar6 + 0xfe1);
    iVar6 = get_work_mode();
    uVar4 = *(undefined1 *)(iVar6 + 0xfe0);
    pcVar9 = "%sV%d%d%d_%d_L_%02X%02X%02X";
  }
  handle_buffer_overflow_condition
            (&DAT_2000ff87,0,0x20,pcVar9,"Even G1",1,4,5,uVar1,uVar2,uVar3,uVar4);
LAB_000193e4:
  DAT_20002354 = &DAT_2000ff87;
  DAT_20002351 = calculate_string_length(&DAT_2000ff87);
  iVar6 = bluetooth_hci_command_processing_with_parameter_validation_and_callback(&DAT_2000ff87);
  if (iVar6 == 0) {
    local_34 = 0;
    uStack_30 = 1;
    uStack_2c = 0x160;
    uStack_28 = 0x1e0;
    local_24 = 0;
    iVar6 = validate_and_process_ble_characteristics(&local_34,&DAT_20002358,2,&DAT_20002350,1);
    if (iVar6 == 0) {
      iVar8 = get_work_mode();
      *(undefined1 *)(iVar8 + 0x1058) = 2;
      uVar12 = calculate_ble_connection_timing_with_validation();
      lVar5 = (uVar12 & 0xffffffff) * 1000;
      uVar11 = (uint)lVar5;
      uVar10 = (int)(uVar12 >> 0x20) * 1000 + (int)((ulonglong)lVar5 >> 0x20) +
               (uint)(0xffff8000 < uVar11);
      DEBUG_PRINT("Advertising %s successfully started uptime %lld\n",&DAT_2000ff87,
                  uVar11 + 0x7fff >> 0xf | uVar10 * 0x20000,uVar10 >> 0xf);
    }
  }
  else if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): Failed to set device name (err %d)\n\n","bt_start",iVar6);
    }
    else {
      handle_heartbeat();
    }
  }
  DAT_2000ff72 = 0;
  return iVar6;
}



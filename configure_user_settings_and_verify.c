/*
 * Function: configure_user_settings_and_verify
 * Entry:    00032254
 * Prototype: undefined configure_user_settings_and_verify()
 */


undefined4
configure_user_settings_and_verify
          (int param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined1 *puVar5;
  byte bVar6;
  byte bVar7;
  undefined1 auStack_38 [21];
  byte local_23;
  byte local_22;
  
  DEBUG_PRINT("join in set_charge_limit\n");
  if ((param_3 == (undefined4 *)0x0) || (param_4 == (undefined1 *)0x0)) {
    DEBUG_PRINT("set_charge_limit para is NULL\n");
    uVar2 = 0xffffffff;
  }
  else {
    puVar5 = (undefined1 *)*param_3;
    *puVar5 = 0x40;
    puVar5[2] = 3;
    puVar5[1] = 1;
    puVar5[3] = 1;
    bVar1 = *(byte *)(param_1 + 4);
    bVar6 = *(byte *)(param_1 + 5);
    bVar7 = bVar1;
    if (99 < bVar1) {
      bVar7 = 100;
    }
    if (99 < bVar6) {
      bVar6 = 100;
    }
    if (bVar1 == 0) {
      format_and_send_sensor_data_alt();
    }
    iVar3 = get_work_mode();
    *(byte *)(iVar3 + 0x1090) = bVar7;
    iVar3 = get_work_mode();
    *(byte *)(iVar3 + 0x1091) = bVar6;
    uVar2 = get_work_mode();
    handle_data_verification_with_system_state_extraction(uVar2,0);
    cVar4 = '\0';
    do {
      iVar3 = read_usr_settting_from_flash(auStack_38);
      if (((iVar3 == 0) && (local_23 == bVar7)) && (local_22 == bVar6)) break;
      cVar4 = cVar4 + '\x01';
      delay_ms(100);
    } while (cVar4 != '\x05');
    puVar5[4] = cVar4 == '\x05';
    uVar2 = 0;
    *param_4 = 5;
  }
  return uVar2;
}



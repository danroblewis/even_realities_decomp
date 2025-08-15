/*
 * Function: configure_system_mode_and_verify
 * Entry:    00032308
 * Prototype: undefined configure_system_mode_and_verify()
 */


undefined4
configure_system_mode_and_verify(int param_1,uint param_2,undefined4 *param_3,undefined1 *param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 *puVar6;
  undefined1 auStack_9c [20];
  byte local_88;
  
  DEBUG_PRINT("join in %s \n","set_panel_voltage");
  if ((((param_3 == (undefined4 *)0x0) || (param_4 == (undefined1 *)0x0)) || (param_1 == 0)) ||
     (param_2 < 5)) {
    DEBUG_PRINT("%s para is NULL\n","set_panel_voltage");
    return 0xffffffff;
  }
  puVar6 = (undefined1 *)*param_3;
  *puVar6 = 0x3c;
  puVar6[2] = 3;
  puVar6[1] = 1;
  puVar6[3] = 1;
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 < 2) {
    iVar2 = get_work_mode();
    if (*(byte *)(iVar2 + 0xed4) != bVar1) {
      iVar2 = get_work_mode();
      *(byte *)(iVar2 + 0xed4) = bVar1;
      uVar3 = get_work_mode();
      prepare_system_settings_for_verification(uVar3,0);
      cVar5 = '\0';
      do {
        iVar2 = read_sys_settting_from_flash(auStack_9c);
        if ((iVar2 == 0) && (local_88 == bVar1)) break;
        cVar5 = cVar5 + '\x01';
        delay_ms(100);
      } while (cVar5 != '\x05');
      puVar6[4] = cVar5 == '\x05';
      goto LAB_00032362;
    }
    uVar4 = 4;
  }
  else {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("[%s-%d]invalid vaule \n","set_panel_voltage",0x3c1);
    }
    else {
      handle_heartbeat();
    }
    uVar4 = 3;
  }
  puVar6[4] = uVar4;
LAB_00032362:
  *param_4 = 5;
  return 0;
}



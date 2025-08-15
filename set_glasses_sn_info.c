/*
 * Function: set_glasses_sn_info
 * Entry:    00031ee8
 * Prototype: undefined set_glasses_sn_info()
 */


undefined4
set_glasses_sn_info(int param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined1 auStack_9c [53];
  undefined1 auStack_67 [83];
  
  DEBUG_PRINT("join in set_glasses_sn_info\n");
  if ((param_3 == (undefined4 *)0x0) || (param_4 == (undefined1 *)0x0)) {
    DEBUG_PRINT("set_glasses_sn_info para is NULL\n");
    uVar1 = 0xffffffff;
  }
  else if (SYSTEM_READY_AND_SETTINGS_STATE == '\x01') {
    param_1 = param_1 + 4;
    puVar4 = (undefined1 *)*param_3;
    call_function_with_parameters_alt(param_1);
    printf_format_string_with_buffer_integration("The string is: %s\n",param_1);
    uVar1 = get_work_mode();
    prepare_system_settings_for_verification(uVar1,0);
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        uVar1 = get_system_data_alt();
        DEBUG_PRINT("%s(): BLE_REQ_PUT_DEVICE_SN new sn:%16s\n","set_glasses_sn_info",uVar1);
      }
      else {
        uVar1 = get_system_data_alt();
        handle_heartbeat("%s(): BLE_REQ_PUT_DEVICE_SN new sn:%16s\n","set_glasses_sn_info",uVar1);
      }
    }
    *puVar4 = 0x29;
    puVar4[1] = 1;
    puVar4[3] = 1;
    cVar3 = '\x05';
    puVar4[2] = 3;
    puVar4[4] = 0;
    *param_4 = 5;
    do {
      iVar2 = read_sys_settting_from_flash(auStack_9c);
      if ((iVar2 == 0) && (iVar2 = memcmp_byte_arrays(param_1,auStack_67,0xb), iVar2 == 0)) {
        DEBUG_PRINT("SN codes updated and written to flash successfully.\n");
        goto LAB_00031f88;
      }
      cVar3 = cVar3 + -1;
      delay_ms(100);
    } while (cVar3 != '\0');
    puVar4[4] = 1;
LAB_00031f88:
    uVar1 = 0;
  }
  else {
    DEBUG_PRINT("warning: not test mode,disable setting\n");
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}



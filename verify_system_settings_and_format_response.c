/*
 * Function: verify_system_settings_and_format_response
 * Entry:    00031dd8
 * Prototype: undefined verify_system_settings_and_format_response()
 */


undefined4
verify_system_settings_and_format_response
          (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 local_b0;
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [12];
  int local_90;
  
  DEBUG_PRINT("join in set_imu_base\n");
  if ((param_3 == (undefined4 *)0x0) || (param_4 == (undefined1 *)0x0)) {
    DEBUG_PRINT("set_imu_base para is NULL\n");
    return 0xffffffff;
  }
  if (SYSTEM_READY_AND_SETTINGS_STATE != '\x01') {
    DEBUG_PRINT("warning: not test mode,disable setting\n");
    return 0xfffffffe;
  }
  puVar4 = (undefined1 *)*param_3;
  *puVar4 = 0x2d;
  puVar4[2] = 3;
  puVar4[3] = 5;
  puVar4[1] = 1;
  local_b0 = 0;
  fill_memory_buffer(auStack_ac,0,0x10);
  if ((((DISPLAY_DISPATCH_THREAD_EXTENDED_OPERATION_STATE == 0 &&
        DISPLAY_DISPATCH_THREAD_FINAL_OPERATION_STATE == 0) &&
        DISPLAY_DISPATCH_THREAD_OPERATION_STATE == 0) &&
      (iVar1 = get_work_mode(), *(int *)(iVar1 + 0x107c) == 0)) &&
     (iVar1 = get_work_mode(), *(int *)(iVar1 + 0x1080) == 0)) {
    iVar1 = get_work_mode();
    uVar5 = 1;
    if (*(int *)(iVar1 + 0x1084) == 0) goto LAB_00031e6e;
  }
  iVar1 = get_work_mode();
  uVar5 = 0;
  *(int *)(iVar1 + 0xf64) = DISPLAY_DISPATCH_THREAD_FINAL_OPERATION_STATE;
LAB_00031e6e:
  iVar1 = DISPLAY_DISPATCH_THREAD_FINAL_OPERATION_STATE;
  puVar4[4] = uVar5;
  handle_buffer_overflow_condition(&local_b0,0,0x14,"base: %d",iVar1);
  iVar1 = get_work_mode();
  cVar6 = '\0';
  *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(iVar1 + 0xf64);
  uVar2 = get_work_mode();
  prepare_system_settings_for_verification(uVar2,0);
  iVar1 = get_work_mode();
  iVar1 = *(int *)(iVar1 + 0xf64);
  do {
    iVar3 = read_sys_settting_from_flash(auStack_9c);
    if ((iVar3 == 0) && (local_90 == iVar1)) goto LAB_00031ec0;
    cVar6 = cVar6 + '\x01';
    delay_ms(100);
  } while (cVar6 != '\x05');
  puVar4[4] = 2;
LAB_00031ec0:
  *param_4 = 9;
  return 0;
}



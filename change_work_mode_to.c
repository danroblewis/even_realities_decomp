/*
 * Function: change_work_mode_to
 * Entry:    0001694c
 * Prototype: undefined change_work_mode_to()
 */


void change_work_mode_to(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_50;
  undefined1 auStack_4c [60];
  
  iVar2 = 3000;
  while ((WORK_MODE_CHANGE_BUFFER != '\0' && (iVar2 = iVar2 + -1, iVar2 != 0))) {
    calculate_ble_schedule_timing_with_division(1);
  }
  WORK_MODE_CHANGE_BUFFER = 1;
  if (*(byte *)(WORK_MODE + 1) == param_1) {
    WORK_MODE_CHANGE_BUFFER = 0;
    return;
  }
  *(char *)(WORK_MODE + 1) = (char)param_1;
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): change_work_mode to %d\n","change_work_mode",param_1 & 0xff);
    }
    else {
      handle_heartbeat();
    }
  }
  switch(*(undefined1 *)(WORK_MODE + 1)) {
  case 0:
    handle_system_flags_and_work_mode(1,0x10);
    handle_system_flags_and_work_mode(1,0x100);
    handle_system_flags_and_work_mode(1,0x20);
    handle_system_flags_and_work_mode(1,0x80);
    uVar1 = 1;
    goto LAB_000169dc;
  case 1:
    handle_system_flags_and_work_mode(1,0x10);
    handle_system_flags_and_work_mode(0,0x100);
    handle_system_flags_and_work_mode(0,0x20);
    handle_system_flags_and_work_mode(1,0x80);
    handle_system_flags_and_work_mode(0,0x40);
    handle_system_flags_and_work_mode(0,8);
    handle_system_flags_and_work_mode(0,2);
    handle_system_flags_and_work_mode(0,1);
    handle_system_flags_and_work_mode(1,0x400);
    handle_system_flags_and_work_mode(1,0x800);
    local_50 = 0;
    fill_memory_buffer(auStack_4c,0,0x3c);
    local_50 = CONCAT22(local_50._2_2_,0x801);
    global_ipc_service_send(&local_50,4);
    break;
  case 2:
    handle_system_flags_and_work_mode(1,0x10);
    handle_system_flags_and_work_mode(1,0x100);
    handle_system_flags_and_work_mode(2,0x20);
    handle_system_flags_and_work_mode(1,0x80);
    handle_system_flags_and_work_mode(1,0x40);
    handle_system_flags_and_work_mode(0,8);
    handle_system_flags_and_work_mode(1,2);
    handle_system_flags_and_work_mode(1);
    handle_system_flags_and_work_mode(1,0x400);
    handle_system_flags_and_work_mode(1,0x800);
    fill_memory_buffer(WORK_MODE + 0xef,0,0x5dc);
    break;
  case 3:
    handle_system_flags_and_work_mode(0,0x100);
    handle_system_flags_and_work_mode(0,0x10);
    handle_system_flags_and_work_mode(1,0x20);
    handle_system_flags_and_work_mode(1,0x80);
    handle_system_flags_and_work_mode(1,0x40);
    uVar1 = 0;
    goto LAB_00016af4;
  case 4:
  case 5:
  case 6:
    handle_system_flags_and_work_mode(0,0x10);
    handle_system_flags_and_work_mode(0,0x100);
    handle_system_flags_and_work_mode(0,0x20);
    handle_system_flags_and_work_mode(1,0x80);
    handle_system_flags_and_work_mode(1,0x40);
    handle_system_flags_and_work_mode(0,8);
    handle_system_flags_and_work_mode(0,2);
    uVar1 = 0;
    goto LAB_00016b04;
  case 7:
    power_down_and_execute(1);
    break;
  case 8:
    handle_system_flags_and_work_mode(0,0x100);
    handle_system_flags_and_work_mode(0,0x10);
    handle_system_flags_and_work_mode(0,0x20);
    handle_system_flags_and_work_mode(0,0x80);
    handle_system_flags_and_work_mode(0,0x40);
    handle_system_flags_and_work_mode(0,8);
    handle_system_flags_and_work_mode(0,2);
    handle_system_flags_and_work_mode(0,1);
    uVar1 = 0;
    goto LAB_00016b0e;
  case 9:
    handle_system_flags_and_work_mode(0,0x100);
    handle_system_flags_and_work_mode(1,0x10);
    handle_system_flags_and_work_mode(1,0x20);
    handle_system_flags_and_work_mode(0,0x80);
    uVar1 = 0;
LAB_000169dc:
    handle_system_flags_and_work_mode(uVar1,0x40);
    uVar1 = 1;
LAB_00016af4:
    handle_system_flags_and_work_mode(uVar1,8);
    handle_system_flags_and_work_mode(1,2);
    uVar1 = 1;
LAB_00016b04:
    handle_system_flags_and_work_mode(uVar1,1);
    uVar1 = 1;
LAB_00016b0e:
    handle_system_flags_and_work_mode(uVar1,0x400);
    handle_system_flags_and_work_mode(1,0x800);
  }
  WORK_MODE_CHANGE_BUFFER = 0;
  return;
}



/*
 * Function: simulator_ancs_calendar_schedule_trigger
 * Entry:    00021cd8
 * Prototype: undefined simulator_ancs_calendar_schedule_trigger()
 */


void simulator_ancs_calendar_schedule_trigger(void)

{
  int iVar1;
  
  iVar1 = get_bluetooth_manager();
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): enter\n","simulator_ancs_calendar_schedule_trigger");
    }
    else {
      handle_heartbeat();
    }
  }
  fill_memory_buffer(iVar1 + 0x34,0,0x1b4);
  FUN_0008705a(iVar1 + 0x44,"com.apple.mobilecal",0x20);
  FUN_0008705a(iVar1 + 0x84,&DAT_0009d7cc,0x20);
  FUN_0008705a(iVar1 + 0xc4,&DAT_0009d7d4,0x100);
  FUN_0008705a(iVar1 + 100,&DAT_0009d7e1,0x20);
  FUN_0004a3d0("calendar-sched",iVar1 + 0x34);
  z_spin_lock_valid(iVar1 + 0x1e8);
  return;
}



/*
 * Function: schedule_ble_timer_event
 * Entry:    000638dc
 * Prototype: undefined schedule_ble_timer_event()
 */


void schedule_ble_timer_event(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == -1) {
    param_1 = 0x7fffff;
  }
  else if (param_1 < 2) {
    param_1 = 1;
  }
  else if (0x7ffffe < param_1) {
    param_1 = 0x7fffff;
  }
  iVar1 = get_high_resolution_timer();
  if (0x7fffff < iVar1 - BLE_TIMER_EVENT_SCHEDULING) {
    param_1 = 0;
  }
  uVar2 = param_1 + (iVar1 - BLE_TIMER_EVENT_SCHEDULING);
  if (0x7ffffe < uVar2) {
    uVar2 = 0x7fffff;
  }
  manage_hardware_timer
            (0,&LAB_000634dc_1,uVar2 + BLE_TIMER_EVENT_SCHEDULING,
             DAT_200066b4 + (uint)CARRY4(uVar2,BLE_TIMER_EVENT_SCHEDULING),&LAB_000634dc_1,0,0,
             param_4);
  return;
}



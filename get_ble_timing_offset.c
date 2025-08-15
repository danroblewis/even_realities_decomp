/*
 * Function: get_ble_timing_offset
 * Entry:    00074b68
 * Prototype: undefined get_ble_timing_offset()
 */


int get_ble_timing_offset(void)

{
  int iVar1;
  
  if (BLE_TIMING_OFFSET_MANAGEMENT_STATE == 0) {
    iVar1 = get_high_resolution_timer();
    return iVar1 - BLE_TIMER_EVENT_SCHEDULING;
  }
  return 0;
}



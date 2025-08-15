/*
 * Function: initialize_system_timers_and_whitelist
 * Entry:    00034944
 * Prototype: undefined initialize_system_timers_and_whitelist()
 */


void initialize_system_timers_and_whitelist(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r3;
  undefined4 unaff_lr;
  
  SYSTEM_MESSAGE_QUEUE = 10;
  TIMEOUT_MESSAGE_STATE = 0;
  SYSTEM_STATUS_AND_TIMER_CONTROL = 0;
  uVar1 = decrement_timer_counter();
  fill_memory_buffer(&TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY,uVar1,0x2210);
  fill_memory_buffer(&WHITELIST_APP_JSON_DATA_BUFFER,0,0x15e2,in_r3,in_r3,unaff_lr);
  DEBUG_PRINT("MAX_WHITE_LIST_BUF_LEN is %d \n",0x15e3);
  iVar2 = read_and_validate_whitelist_app_flash_settings();
  if (iVar2 == 0) {
    allocate_and_init_whitelist_verification_buffer();
    return;
  }
  return;
}



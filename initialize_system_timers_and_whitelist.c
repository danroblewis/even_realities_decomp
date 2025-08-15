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
  
  DAT_2001a22b = 10;
  TIMEOUT_MESSAGE_STATE = 0;
  DAT_2001a229 = 0;
  uVar1 = decrement_timer_counter();
  fill_memory_buffer(&DAT_20007dac,uVar1,0x2210);
  fill_memory_buffer(&DAT_2001a22c,0,0x15e2,in_r3,in_r3,unaff_lr);
  DEBUG_PRINT("MAX_WHITE_LIST_BUF_LEN is %d \n",0x15e3);
  iVar2 = read_and_validate_whitelist_app_flash_settings();
  if (iVar2 == 0) {
    allocate_and_init_whitelist_verification_buffer();
    return;
  }
  return;
}



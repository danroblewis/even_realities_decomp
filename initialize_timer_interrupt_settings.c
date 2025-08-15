/*
 * Function: initialize_timer_interrupt_settings
 * Entry:    00063954
 * Prototype: undefined initialize_timer_interrupt_settings()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_timer_interrupt_settings(void)

{
  _DAT_50015004 = 1;
  process_data_with_callback_and_parameter_alt3(0x15);
  _DAT_50015308 = "ash command end .......\n";
  _DAT_50015348 = "ash command end .......\n";
  _DAT_e000e280 = 0x200000;
  return;
}



/*
 * Function: initialize_jbd_display_system_with_memory_and_commands
 * Entry:    0007d6f4
 * Prototype: undefined initialize_jbd_display_system_with_memory_and_commands()
 */


void initialize_jbd_display_system_with_memory_and_commands(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  initialize_jbd_display_memory_buffers();
  manage_jbd_display_power_state(0x97);
  multiply_by_1000_and_jump(1,extraout_r1,extraout_r2,in_r3);
  return;
}



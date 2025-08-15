/*
 * Function: send_jbd_display_command_sequence_0x66_0x99
 * Entry:    0007d74e
 * Prototype: undefined send_jbd_display_command_sequence_0x66_0x99()
 */


void send_jbd_display_command_sequence_0x66_0x99(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  multiply_by_1000_and_jump(1);
  manage_jbd_display_power_state(0x66);
  multiply_by_1000_and_jump(1);
  manage_jbd_display_power_state(0x99);
  multiply_by_1000_and_jump(10,extraout_r1,extraout_r2,in_r3);
  return;
}



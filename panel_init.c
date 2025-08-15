/*
 * Function: panel_init
 * Entry:    00047538
 * Prototype: undefined panel_init()
 */


void panel_init(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  if (3 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): enter\n","panel_init");
    }
    else {
      handle_heartbeat();
    }
  }
  send_jbd_display_command_sequence_0x66_0x99();
  manage_jbd_display_power_state(6);
  jbd_spi_write_register(1,0x10);
  initialize_jbd_display_memory_buffers(0);
  initialize_jbd_battery_system_with_commands(0);
  initialize_jbd_battery_system_with_commands(0,0x14);
  initialize_jbd_battery_system_with_commands(0x18,0);
  initialize_jbd_battery_system_with_commands(0x18,0x14);
  initialize_jbd_battery_system_with_commands(0xc,10);
  manage_jbd_display_power_state(0x71);
  manage_jbd_display_power_state(0x97);
  multiply_by_1000_and_jump(1);
  manage_jbd_display_power_state(0x73);
  manage_jbd_display_power_state(0x97);
  multiply_by_1000_and_jump(1);
  send_jbd_display_command_0x46(0xf);
  jbd_spi_write_register(0x31,4);
  manage_jbd_display_power_state(0xa3);
  manage_jbd_display_power_state(0x97);
  multiply_by_1000_and_jump(1,extraout_r1,extraout_r2,in_r3);
  return;
}



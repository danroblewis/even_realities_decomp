/*
 * Function: send_jbd_battery_commands_in_chunks
 * Entry:    0007d70a
 * Prototype: undefined send_jbd_battery_commands_in_chunks()
 */


void send_jbd_battery_commands_in_chunks
               (undefined2 param_1,short param_2,undefined4 param_3,int param_4)

{
  for (; 0xf000 < param_4; param_4 = param_4 + -0xf000) {
    send_jbd_battery_command(param_1,param_2,param_3,0xf000);
    param_2 = param_2 + 0xc0;
  }
  send_jbd_battery_command(param_1,param_2,param_3,param_4);
  manage_jbd_display_power_state(0x97);
  multiply_by_1000_and_jump(1);
  return;
}



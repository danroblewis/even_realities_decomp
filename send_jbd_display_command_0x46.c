/*
 * Function: send_jbd_display_command_0x46
 * Entry:    0007d67e
 * Prototype: undefined send_jbd_display_command_0x46()
 */


void send_jbd_display_command_0x46
               (undefined4 param_1,undefined3 param_2,undefined4 param_3,undefined4 param_4)

{
  jbd_spi_write_command(0x46,&stack0xfffffff7,1,param_4,param_1,CONCAT13((char)param_1,param_2));
  return;
}



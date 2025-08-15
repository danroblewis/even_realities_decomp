/*
 * Function: write_registers_if_changed
 * Entry:    00047028
 * Prototype: undefined write_registers_if_changed()
 */


void write_registers_if_changed(int param_1,int param_2)

{
  if (param_1 != DAT_2000a05c) {
    jbd_spi_write_register();
    DAT_2000a05c = param_1;
  }
  if (param_2 != DAT_2000a058) {
    send_jbd_display_command_0x46(param_2);
    DAT_2000a058 = param_2;
  }
  return;
}



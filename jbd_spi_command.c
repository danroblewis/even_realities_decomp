/*
 * Function: jbd_spi_command
 * Entry:    00047698
 * Prototype: undefined __stdcall jbd_spi_command(undefined4 command_data, undefined4 data_length)
 */


void jbd_spi_command(undefined4 command_data,undefined4 data_length)

{
  resource_mutex_acquire(&JBD_DISPLAY_CONFIG,data_length,command_data,data_length);
  return;
}



/*
 * Function: jbd_spi_write_command
 * Entry:    0007d82e
 * Prototype: undefined __stdcall jbd_spi_write_command(undefined4 command, undefined4 data_buffer, undefined4 data_length)
 */


void jbd_spi_write_command(undefined4 command,undefined4 data_buffer,int data_length)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = command;
  uStack_c = data_buffer;
  validate_memory_bounds((int)&local_10 + 1,data_buffer,data_length,5);
  jbd_spi_flash_write(&local_10,data_length + 1);
  return;
}



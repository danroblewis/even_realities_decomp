/*
 * Function: jbd_spi_write_register
 * Entry:    0007d642
 * Prototype: undefined __stdcall jbd_spi_write_register(undefined4 register_address, undefined3 data_value, undefined4 additional_param, undefined4 param_4)
 */


void jbd_spi_write_register
               (undefined4 register_address,undefined3 data_value,undefined4 param_3,
               undefined4 param_4)

{
  jbd_spi_write_command
            (register_address,&stack0xfffffff7,1,param_4,register_address,
             CONCAT13((char)data_value,data_value));
  return;
}



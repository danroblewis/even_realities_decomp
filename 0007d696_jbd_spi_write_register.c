/*
 * Function: jbd_spi_write_register
 * Entry:    0007d696
 * Prototype: undefined jbd_spi_write_register()
 */


void jbd_spi_write_register(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort local_c;
  undefined2 uStack_a;
  undefined4 uStack_8;
  
  _local_c = CONCAT22((short)((uint)param_2 >> 0x10),
                      (ushort)((param_1 & 0xff) << 8) | (ushort)(param_1 >> 8) & 0xff);
  uStack_8 = param_3;
  jbd_spi_write_command(0x36,&local_c,2,param_4,param_1);
  return;
}



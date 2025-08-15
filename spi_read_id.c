/*
 * Function: spi_read_id
 * Entry:    00047724
 * Prototype: undefined spi_read_id()
 */


ushort spi_read_id(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int spi_manager;
  undefined4 command_buffer;
  undefined4 device_id;
  
  device_id = 0;
  command_buffer = param_3;
  spi_manager = jbd_get_manager();
  command_buffer = 0x9f;
  jbd_spi_command(0xffffffff,0xffffffff);
  (**(code **)(*(int *)(spi_manager + 0x374) + 8))
            (*(int *)(spi_manager + 0x374),&command_buffer,4,&device_id,4,param_2);
  mutex_unlock_jbd_display();
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): jbd panel devicve id: %02x, %02x, %02x, %02x\n","spi_read_id",
                  device_id & 0xff,device_id >> 8 & 0xff,device_id >> 0x10 & 0xff,device_id >> 0x18)
      ;
    }
    else {
      handle_heartbeat();
    }
  }
  return device_id._2_2_ << 8 | device_id._2_2_ >> 8;
}



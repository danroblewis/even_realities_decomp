/*
 * Function: jbd_spi_flash_write
 * Entry:    0007d7b6
 * Prototype: undefined __stdcall jbd_spi_flash_write(undefined4 flash_address, undefined4 data_length)
 */


void jbd_spi_flash_write(int flash_address,uint data_length)

{
  int jbd_mgr;
  int end_addr;
  undefined1 local_24 [8];
  
  jbd_mgr = jbd_get_manager();
  local_24[0] = 0;
  end_addr = flash_address + (data_length / 0xf000) * 0xf000;
  for (; flash_address != end_addr; flash_address = flash_address + 0xf000) {
    jbd_spi_command(0xffffffff,0xffffffff);
    (**(code **)(*(int *)(jbd_mgr + 0x374) + 8))
              (*(int *)(jbd_mgr + 0x374),flash_address,0xf000,local_24,1);
    mutex_unlock_jbd_display();
  }
  jbd_spi_command(0xffffffff,0xffffffff);
  (**(code **)(*(int *)(jbd_mgr + 0x374) + 8))
            (*(int *)(jbd_mgr + 0x374),flash_address,data_length % 0xf000,local_24,1);
  mutex_unlock_jbd_display();
  return;
}



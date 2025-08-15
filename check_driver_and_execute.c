/*
 * Function: check_driver_and_execute
 * Entry:    000167b4
 * Prototype: undefined check_driver_and_execute()
 */


undefined4 check_driver_and_execute(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
  if (iVar1 == 0) {
    DEBUG_PRINT(" [%s] device not ready.\n","mx25r6435f@0");
    uVar2 = 0xffffffff;
  }
  else {
    manage_device_memory_and_state_changes(&FLASH_DRIVER_INTERFACE,0,0x130000);
    DEBUG_PRINT("erase_dfu_flash done.\n");
    uVar2 = 0;
  }
  return uVar2;
}



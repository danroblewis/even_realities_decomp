/*
 * Function: ext_flash_write
 * Entry:    0002e440
 * Prototype: undefined __stdcall ext_flash_write(undefined4 work_mode_context, undefined4 flash_address, undefined4 buffer_ptr, undefined4 buffer_size)
 */


int ext_flash_write(int work_mode_context,undefined4 flash_address,undefined4 buffer_ptr,
                   undefined4 buffer_size)

{
  int iVar1;
  int extraout_r1;
  
  iVar1 = (uint)*(ushort *)(work_mode_context + 0x105c) << 0x1b;
  if (-1 < iVar1) {
    debug_hook_before_flash_read();
    iVar1 = extraout_r1;
  }
  if (FLASH_DRIVER_INSTANCE == 0) {
    if (-1 < (int)((uint)*(ushort *)(work_mode_context + 0x105c) << 0x1b)) {
      debug_hook_flash_driver_not_ready();
    }
  }
  else {
    resource_mutex_acquire(&FLASH_MUTEX,iVar1,0xffffffff,0xffffffff);
    iVar1 = (**(code **)(*(int *)(FLASH_DRIVER_INSTANCE + 8) + 4))
                      (FLASH_DRIVER_INSTANCE,flash_address,buffer_ptr,buffer_size);
    mutex_unlock(&FLASH_MUTEX);
    if (-1 < (int)((uint)*(ushort *)(work_mode_context + 0x105c) << 0x1b)) {
      debug_hook_flash_driver_not_ready();
    }
    if (iVar1 != 0) {
      if (LOG_LEVEL < 1) {
        return iVar1;
      }
      if (IS_DEBUG != 0) {
        handle_heartbeat();
        return iVar1;
      }
      DEBUG_PRINT("%s(): flash write fail!\n","ext_flash_write");
      return iVar1;
    }
  }
  return 0;
}



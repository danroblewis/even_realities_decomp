/*
 * Function: ext_flash_api_init
 * Entry:    0002e4e8
 * Prototype: undefined __stdcall ext_flash_api_init(undefined4 read_func_ptr, undefined4 write_func_ptr, undefined4 read_func_interface, undefined4 debug_param)
 */


undefined4
ext_flash_api_init(undefined4 *read_func_ptr,undefined4 *write_func_ptr,
                  undefined4 *read_func_interface,undefined4 debug_param)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  init_mutex(&FLASH_MUTEX);
  iVar2 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
  if (iVar2 == 0) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): FAILURE!\n","ext_flash_api_init");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar3 = 0xffffffff;
  }
  else {
    *read_func_ptr = 0x2e399;
    *write_func_ptr = 0x2e441;
    *read_func_interface = &LAB_0002e300_1;
    DISPLAY_DISPATCH_THREAD_ULTIMATE_EXTENDED_FINAL_COMPREHENSIVE_COMPLETION_STATE =
         &FLASH_DRIVER_INTERFACE;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): flash init success!\n","ext_flash_api_init",
                    &DISPLAY_DISPATCH_THREAD_ULTIMATE_EXTENDED_FINAL_COMPREHENSIVE_COMPLETION_STATE,
                    0,debug_param);
      }
      else {
        handle_heartbeat();
      }
    }
    uVar1 = get_driver_capabilities(&FLASH_DRIVER_INTERFACE);
    iVar2 = get_work_mode();
    uVar3 = 0;
    *(undefined2 *)(iVar2 + 0x108a) = uVar1;
  }
  return uVar3;
}



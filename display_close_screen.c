/*
 * Function: display_close_screen
 * Entry:    00049858
 * Prototype: undefined display_close_screen()
 */


undefined4 display_close_screen(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_c;
  undefined1 uStack_b;
  undefined2 uStack_a;
  
  uStack_a = (undefined2)((uint)param_2 >> 0x10);
  _local_c = CONCAT11((char)param_1,1);
  if (param_1 != 0) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): display_close_screen %d\n","display_close_screen",param_1,0,param_1);
      }
      else {
        handle_heartbeat();
      }
    }
    if (param_1 == 4) {
      set_framebuffer_processing_flag();
    }
    display_close(&local_c,2);
    manage_ble_connection_priority_with_data_processing();
    iVar1 = get_work_mode();
    fill_memory_buffer(iVar1 + 0xef,0,0x5dc);
  }
  return 0;
}



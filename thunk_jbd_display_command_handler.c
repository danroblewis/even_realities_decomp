/*
 * Function: thunk_jbd_display_command_handler
 * Entry:    0007d63e
 * Prototype: undefined thunk_jbd_display_command_handler()
 */


void thunk_jbd_display_command_handler(undefined1 param_1)

{
  int iVar1;
  undefined1 auStack_11 [5];
  undefined1 auStack_c [4];
  
  auStack_c[0] = 0;
  auStack_11[0] = param_1;
  iVar1 = jbd_get_manager();
  jbd_spi_command(0xffffffff,0xffffffff);
  (**(code **)(*(int *)(iVar1 + 0x374) + 8))(*(int *)(iVar1 + 0x374),auStack_11,1,auStack_c,1);
  mutex_unlock_jbd_display();
  return;
}



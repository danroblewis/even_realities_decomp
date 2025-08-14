/*
 * Function: FUN_0007d77c
 * Entry:    0007d77c
 * Prototype: undefined FUN_0007d77c()
 */


void FUN_0007d77c(undefined1 param_1)

{
  int iVar1;
  undefined1 local_11 [5];
  undefined1 local_c [4];
  
  local_c[0] = 0;
  local_11[0] = param_1;
  iVar1 = jbd_get_manager();
  jbd_spi_command(0xffffffff,0xffffffff);
  (**(code **)(*(int *)(iVar1 + 0x374) + 8))(*(int *)(iVar1 + 0x374),local_11,1,local_c,1);
  mutex_unlock_jbd_display();
  return;
}



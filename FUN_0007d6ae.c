/*
 * Function: FUN_0007d6ae
 * Entry:    0007d6ae
 * Prototype: undefined FUN_0007d6ae()
 */


void FUN_0007d6ae(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = jbd_get_manager();
  uVar2 = *(undefined4 *)(iVar1 + 0x24);
  fill_memory_buffer(uVar2,param_1,64000);
  send_jbd_battery_command(0,0,uVar2,0xf000);
  send_jbd_battery_command(0,0xc0,uVar2,0xf000);
  send_jbd_battery_command(0,0x180,uVar2,0x7800);
  return;
}



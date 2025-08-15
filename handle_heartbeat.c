/*
 * Function: handle_heartbeat
 * Entry:    00019c70
 * Prototype: undefined handle_heartbeat()
 */


void handle_heartbeat(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_e8 [200];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = get_bluetooth_manager();
  fill_memory_buffer(local_e8,0,200);
  FUN_00077c30(local_e8,200,param_1,&uStack_c);
  handle_message_enqueue_alt(local_e8);
  local_e8[0] = 0;
  if ((*(char *)(iVar1 + 0x248) == '\0') && (*(int *)(iVar1 + 0x220) == 0)) {
    HEARTBEAT_PENDING_FLAG = 1;
    z_spin_lock_valid(iVar1 + 0x218);
  }
  return;
}



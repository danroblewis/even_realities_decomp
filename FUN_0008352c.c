/*
 * Function: FUN_0008352c
 * Entry:    0008352c
 * Prototype: undefined FUN_0008352c()
 */


void FUN_0008352c(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + -0x3b;
  iVar3 = *(int *)(*param_1 + 0xc0);
  acquire_mutex_with_priority_control(param_1 + 0x46);
  iVar1 = FUN_00082ff6(piVar2,3);
  if (((iVar1 != 0) || (iVar1 = FUN_00082ff6(piVar2,1), iVar1 != 0)) ||
     (iVar1 = FUN_00082ff6(piVar2,0xf), iVar1 != 0)) {
    handle_ble_connection_state_change(param_1 + -0x3c,8);
  }
  if ((iVar3 != 0) &&
     ((*(short *)(iVar3 + 0xe) == 0 || ((int)((uint)*(byte *)(iVar3 + 0xd) << 0x1e) < 0)))) {
    cleanup_ble_attribute(iVar3);
  }
  fill_memory_buffer(param_1 + -0x3c,0,0x240);
  return;
}



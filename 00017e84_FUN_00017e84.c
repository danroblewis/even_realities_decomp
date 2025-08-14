/*
 * Function: FUN_00017e84
 * Entry:    00017e84
 * Prototype: undefined FUN_00017e84()
 */


undefined4 FUN_00017e84(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = get_ancs_connection_handle();
  uVar3 = get_system_ready_state();
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 == 0) {
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    iVar1 = get_work_mode();
    if (*(char *)(iVar1 + 0xae3) != '\0') {
      return 0xffffffff;
    }
    uVar3 = get_work_mode();
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (*(int *)((int)uVar3 + 0x9b4) == 0) {
      return 0xffffffff;
    }
  }
  resource_mutex_acquire(&DAT_20006a1c,uVar2,0xffffffff,0xffffffff);
  iVar1 = FUN_0004f518(0,param_1,param_2);
  mutex_unlock(&DAT_20006a1c);
  if (iVar1 != 0) {
    DEBUG_PRINT("Failed to send data over BLE connection: ret %d len %d \n",iVar1,param_2);
    return 0xffffffff;
  }
  return 0;
}



/*
 * Function: handle_ble_connection_timeout
 * Entry:    00073788
 * Prototype: undefined handle_ble_connection_timeout()
 */


void handle_ble_connection_timeout(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)DAT_2000b458;
  iVar2 = uVar3 * 0x18 + 0x200069c8;
  cleanup_ble_connection_state_with_validation(iVar2);
  (&DAT_2001d565)[uVar3] = 0;
  iVar1 = check_ble_connection_state_valid(param_1);
  if (iVar1 != 0) {
    schedule_ble_connection_timeout_with_priority
              (iVar2,&LAB_00073728_1,DAT_2000b48c + -1,DAT_2000b48c + -1 >> 0x1f);
    return;
  }
  return;
}



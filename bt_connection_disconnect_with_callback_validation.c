/*
 * Function: bt_connection_disconnect_with_callback_validation
 * Entry:    00056ea8
 * Prototype: undefined bt_connection_disconnect_with_callback_validation()
 */


int bt_connection_disconnect_with_callback_validation(void)

{
  int iVar1;
  undefined4 local_20;
  char *local_1c;
  char *pcStack_18;
  undefined2 local_14;
  
  iVar1 = bt_connection_disconnect_with_validation_and_callback();
  if (iVar1 != 0) {
    if (*(byte *)(iVar1 + 0xd) < 9) {
      pcStack_18 = *(char **)(&UNK_0008b220 + (uint)*(byte *)(iVar1 + 0xd) * 4);
    }
    else {
      pcStack_18 = "(unknown)";
    }
    local_1c = "Found valid connection in %s state";
    local_14 = 0x200;
    local_20 = 0x1000003;
    FUN_000813ca(&DAT_00088108,0x1c80,&local_20);
    validate_and_process_ble_characteristics_with_callback_validation_and_state_management(iVar1);
    iVar1 = 1;
  }
  return iVar1;
}



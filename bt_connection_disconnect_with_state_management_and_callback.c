/*
 * Function: bt_connection_disconnect_with_state_management_and_callback
 * Entry:    00056f4c
 * Prototype: undefined bt_connection_disconnect_with_state_management_and_callback()
 */


undefined4
bt_connection_disconnect_with_state_management_and_callback(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r2;
  int iVar4;
  uint uVar5;
  
  *param_2 = *(undefined1 *)(param_1 + 2);
  param_2[1] = *(undefined1 *)(param_1 + 3);
  param_2[2] = *(undefined1 *)(param_1 + 8);
  uVar5 = (uint)*(byte *)(param_1 + 0xd);
  if (8 < uVar5) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x9b0);
    DEBUG_PRINT2("\tInvalid conn state %u\n",uVar5);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x9b0);
  }
  param_2[0x24] = (&DAT_000f3e4e)[uVar5];
  param_2[0x27] = 0;
  param_2[0x25] = *(undefined1 *)(param_1 + 9);
  uVar1 = get_ble_connection_state(param_1,param_2,param_1);
  *(undefined1 *)(extraout_r1 + 0x26) = uVar1;
  if (*(char *)(extraout_r2 + 2) == '\x01') {
    *(int *)(extraout_r1 + 8) = extraout_r2 + 0x90;
    *(uint *)(extraout_r1 + 4) =
         (int)&BLUETOOTH_HCI_COMMAND_BUFFER + (uint)*(byte *)(extraout_r2 + 8) * 7;
    iVar3 = extraout_r2 + 0x97;
    iVar4 = extraout_r2 + 0x9e;
    if (*(char *)(extraout_r2 + 3) != '\0') {
      iVar3 = extraout_r2 + 0x9e;
      iVar4 = extraout_r2 + 0x97;
    }
    *(int *)(extraout_r1 + 0xc) = iVar3;
    *(int *)(extraout_r1 + 0x10) = iVar4;
    *(undefined2 *)(extraout_r1 + 0x14) = *(undefined2 *)(extraout_r2 + 0xa6);
    *(undefined2 *)(extraout_r1 + 0x16) = *(undefined2 *)(extraout_r2 + 0xac);
    *(undefined2 *)(extraout_r1 + 0x18) = *(undefined2 *)(extraout_r2 + 0xae);
    *(int *)(extraout_r1 + 0x1c) = extraout_r2 + 0xc4;
    *(int *)(extraout_r1 + 0x20) = extraout_r2 + 0xc6;
    if ((*(int *)(extraout_r2 + 0xc0) != 0) &&
       ((int)((uint)*(byte *)(*(int *)(extraout_r2 + 0xc0) + 0xd) << 0x1b) < 0)) {
      *(undefined1 *)(extraout_r1 + 0x27) = 1;
    }
    if ((*(int *)(extraout_r2 + 0xc0) != 0) &&
       ((int)((uint)*(byte *)(*(int *)(extraout_r2 + 0xc0) + 0xd) << 0x1a) < 0)) {
      *(byte *)(extraout_r1 + 0x27) = *(byte *)(extraout_r1 + 0x27) | 2;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



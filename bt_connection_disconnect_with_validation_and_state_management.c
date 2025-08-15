/*
 * Function: bt_connection_disconnect_with_validation_and_state_management
 * Entry:    000571e8
 * Prototype: undefined bt_connection_disconnect_with_validation_and_state_management()
 */


void bt_connection_disconnect_with_validation_and_state_management(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  undefined8 uVar7;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (iVar2 = FUN_000813b4(param_1 + 4,0xffffffbf), iVar2 << 0x19 < 0)) {
    validate_and_process_ble_characteristics_with_state_management_and_parameter(param_1);
    return;
  }
  iVar2 = initialize_communication(param_1 + 0x38);
  if (iVar2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x397);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
    software_interrupt(2);
  }
  uVar7 = FUN_0005f2d4(iVar2);
  uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  iVar2 = (int)uVar7;
  bVar6 = *(byte *)(iVar2 + 0x1c);
  if ((DAT_20002104 < *(ushort *)(iVar2 + 0x10)) || (bVar6 != 0)) {
    while (DAT_20002104 < *(ushort *)(iVar2 + 0x10)) {
      iVar5 = bt_connection_disconnect_with_state_management_and_parameter
                        (0,uVar4,0xffffffff,0xffffffff);
      if (*(char *)(param_1 + 0xd) != '\a') {
        FUN_0005f24c();
        FUN_0005f24c(iVar2);
        return;
      }
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined1 *)(iVar5 + 0x1c) = 0;
      *(undefined1 *)(iVar5 + 0x1d) = *(undefined1 *)(iVar2 + 0x1d);
      uVar7 = validate_and_process_ble_characteristics_with_callback_validation_and_parameter
                        (param_1,iVar2,iVar5,bVar6);
      uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
      iVar3 = (int)uVar7;
      if (iVar3 != 0) {
        *(byte *)(iVar2 + 0x1c) = bVar6 & 1;
        FUN_0005f24c(iVar5);
        goto LAB_000572be;
      }
      bVar6 = 1;
    }
    *(undefined1 *)(iVar2 + 0x1c) = 1;
    uVar4 = 3;
  }
  else {
    uVar4 = 2;
  }
  iVar3 = validate_and_process_ble_characteristics_with_callback_validation_and_parameter
                    (param_1,iVar2,0,uVar4);
LAB_000572be:
  FUN_0005f24c(iVar2);
  if (iVar3 == -5) {
    iVar5 = *(int *)(iVar2 + 0x18);
    *(undefined4 *)(iVar2 + 0x18) = 0;
    FUN_0005f24c(iVar2);
    if (iVar5 != 0) {
      validate_and_process_ble_characteristics_with_validation_and_state_management(param_1,iVar5);
      return;
    }
  }
  return;
}



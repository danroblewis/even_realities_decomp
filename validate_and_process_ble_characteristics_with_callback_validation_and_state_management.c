/*
 * Function: validate_and_process_ble_characteristics_with_callback_validation_and_state_management
 * Entry:    000566a4
 * Prototype: undefined validate_and_process_ble_characteristics_with_callback_validation_and_state_management()
 */


/* WARNING: Removing unreachable block (ram,0x00055b8c) */

void validate_and_process_ble_characteristics_with_callback_validation_and_state_management
               (int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 local_30;
  char *local_2c;
  int iStack_28;
  undefined4 local_1c [3];
  
  piVar3 = (int *)(param_1 + 0xd0);
  iVar2 = *piVar3;
  *piVar3 = iVar2 + -1;
  if (iVar2 < 1) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","old > 0",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x525);
    DEBUG_PRINT2("\tConn reference counter is 0\n");
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x525);
  }
  if ((*(short *)(param_1 + 2) == 0x101) && (*piVar3 == 0)) {
    uVar1 = get_ble_characteristic_value(&DAT_20002028);
    if (((uVar1 & 0x4000) != 0) &&
       (((iVar2 = get_ble_characteristic_value(&DAT_20002028), -1 < iVar2 << 0x18 &&
         (iVar2 = get_ble_characteristic_value(&DAT_20002028), iVar2 << 0x15 < 0)) &&
        (iVar2 = handle_bluetooth_privacy_mode_management_with_callback_execution_and_parameter
                           (&DAT_20002018,local_1c), iVar2 == 0)))) {
      uVar4 = handle_bluetooth_privacy_mode_management_with_validation_and_state_management
                        (&DAT_20002018);
      iVar2 = get_ble_characteristic_value(&DAT_20002028,(int)((ulonglong)uVar4 >> 0x20),(int)uVar4)
      ;
      uVar4 = get_ble_characteristic_value(&DAT_20002028,(uint)(iVar2 << 0x11) >> 0x1f);
      uVar1 = ((uint)((ulonglong)uVar4 >> 0x20) ^ 1) << 1;
      if ((int)uVar4 << 0x15 < 0) {
        uVar1 = uVar1 | 1;
      }
      uVar4 = get_ble_characteristic_value(&DAT_20002028,uVar1);
      uVar1 = (uint)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 << 0x12 < 0) {
        uVar1 = uVar1 | 4;
      }
      iStack_28 = handle_bluetooth_privacy_mode_management_with_callback_validation
                            (&DAT_20002018,uVar1);
      if (iStack_28 == 0) {
        iVar2 = send_ble_command_0x200a(&DAT_20002018,1);
        if (iVar2 == 0) {
          validate_and_process_ble_characteristics_with_callback_validation_and_state_management
                    (local_1c[0]);
        }
        else {
          bt_connection_state_transition(local_1c[0],0);
          iVar2 = apply_bitwise_and_mask(&DAT_20002028,0xffffbfff);
          validate_and_process_ble_characteristics_with_callback_validation_and_state_management
                    (local_1c[0]);
          if (iVar2 << 0x11 < 0) {
            DAT_20002028 = DAT_20002028 | 0x4000;
          }
        }
      }
      else {
        local_2c = "Controller cannot resume connectable advertising (%d)";
        local_30 = 3;
        process_and_compress_data_with_validation(&DAT_000880f8,0x1840,&local_30,0);
      }
    }
    return;
  }
  return;
}



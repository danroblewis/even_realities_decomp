/*
 * Function: initialize_device_and_ble_connection
 * Entry:    00060a5c
 * Prototype: undefined initialize_device_and_ble_connection()
 */


void initialize_device_and_ble_connection
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(char *)(iVar3 + 0x60) != '\0') {
    return;
  }
  handle_ble_connection_state_and_status_flags();
  manage_ble_connection_state_comprehensive(iVar3 + 0x48,extraout_r1,0,0);
  uVar1 = extraout_r1_00;
  uVar2 = extraout_r2;
  if (*(int *)(iVar3 + 0x50) == 0) {
    while (iVar3 = hardware_register_operation_wrapper(), iVar3 != 0xbad0000) {
      calculate_ble_schedule_timing(0x667,0);
    }
    cleanup_hardware_interrupt_configuration();
    uVar2 = 0;
    DAT_2001d535 = 0;
    uVar1 = extraout_r1_01;
  }
  manage_device_state_with_spin_lock_validation(param_1,uVar1,uVar2,param_4);
  return;
}



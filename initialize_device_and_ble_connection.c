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
  FUN_00083906();
  manage_ble_connection_state_comprehensive(iVar3 + 0x48,extraout_r1,0,0);
  uVar1 = extraout_r1_00;
  uVar2 = extraout_r2;
  if (*(int *)(iVar3 + 0x50) == 0) {
    while (iVar3 = FUN_00066ae0(), iVar3 != 0xbad0000) {
      calculate_ble_schedule_timing(0x667,0);
    }
    FUN_00066b24();
    uVar2 = 0;
    DAT_2001d535 = 0;
    uVar1 = extraout_r1_01;
  }
  FUN_0008392e(param_1,uVar1,uVar2,param_4);
  return;
}



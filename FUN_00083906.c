/*
 * Function: FUN_00083906
 * Entry:    00083906
 * Prototype: undefined FUN_00083906()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00083906(int param_1)

{
  undefined4 extraout_r1;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  FUN_0007ef3e();
  manage_ble_connection_state_comprehensive(iVar1 + 0x18,extraout_r1,0xffffffff,0xffffffff);
  if (*(char *)(iVar1 + 0x60) == '\0') {
    _DAT_500055b8 = 0;
  }
  return;
}



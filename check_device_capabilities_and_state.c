/*
 * Function: check_device_capabilities_and_state
 * Entry:    00060a10
 * Prototype: undefined check_device_capabilities_and_state()
 */


int check_device_capabilities_and_state
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(char *)(iVar2 + 0x60) == '\0') {
    FUN_00083906();
    z_spin_lock_valid(iVar2 + 0x48);
    iVar1 = 0;
    if (DAT_2001d535 == '\0') {
      FUN_00066994(*(undefined4 *)(param_1 + 4),&LAB_000838ca_1,iVar2,0,param_4);
      iVar1 = lookup_device_property_from_table();
      DAT_2001d535 = iVar1 == 0;
    }
    FUN_0008392e(param_1);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



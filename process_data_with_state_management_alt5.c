/*
 * Function: process_data_with_state_management_alt5
 * Entry:    00052000
 * Prototype: undefined process_data_with_state_management_alt5()
 */


undefined4 process_data_with_state_management_alt5(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *local_10;
  undefined4 local_c;
  
  local_10 = &DAT_000a24e0;
  local_c = 3;
  iVar1 = FUN_0008633e(param_1 + 4,&local_10);
  if ((iVar1 == 0) || (iVar1 = thunk_FUN_00086320(param_1 + 4,DAT_2000ab80), iVar1 == 0)) {
    uVar2 = 7;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



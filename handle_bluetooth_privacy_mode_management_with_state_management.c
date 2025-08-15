/*
 * Function: handle_bluetooth_privacy_mode_management_with_state_management
 * Entry:    000552ac
 * Prototype: undefined handle_bluetooth_privacy_mode_management_with_state_management()
 */


undefined4 handle_bluetooth_privacy_mode_management_with_state_management(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int local_34 [5];
  undefined4 local_20;
  char *local_1c;
  
  if (param_1 == (undefined1 *)0x0) {
    local_1c = "Invalid input parameters";
  }
  else {
    iVar1 = process_data_with_initialization_and_validation(0x1009,0,local_34);
    if (iVar1 == 0) {
      iVar2 = *(int *)(local_34[0] + 0xc) + 1;
      iVar1 = memcmp_byte_arrays(iVar2,&DAT_000f2b47,6);
      if ((iVar1 != 0) && (iVar1 = memcmp_byte_arrays(iVar2,&DAT_000f2b41,6), iVar1 != 0)) {
        FUN_00080fba(param_1 + 1,iVar2);
        *param_1 = 0;
        FUN_0005f24c(local_34[0]);
        return 1;
      }
      FUN_0005f24c(local_34[0]);
      return 0;
    }
    local_1c = "Failed to read public address";
  }
  local_20 = 2;
  FUN_0008104a(&DAT_00088150,0x1080,&local_20);
  return 0;
}



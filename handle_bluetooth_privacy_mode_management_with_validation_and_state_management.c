/*
 * Function: handle_bluetooth_privacy_mode_management_with_validation_and_state_management
 * Entry:    00055698
 * Prototype: undefined handle_bluetooth_privacy_mode_management_with_validation_and_state_management()
 */


int handle_bluetooth_privacy_mode_management_with_validation_and_state_management
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = memcmp_byte_arrays(param_1 + 9,&DAT_000f2b3a,7,param_4,param_4);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}



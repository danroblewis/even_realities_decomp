/*
 * Function: process_ble_characteristics_with_validation
 * Entry:    0005cc68
 * Prototype: undefined process_ble_characteristics_with_validation()
 */


int process_ble_characteristics_with_validation(int param_1)

{
  int iVar1;
  undefined4 local_18;
  char *local_14;
  
  FUN_00083090(param_1 + 4,8);
  iVar1 = validate_and_process_ble_characteristics_with_validation_and_state_management
                    (param_1 + 0x57,0x8349d);
  if (iVar1 != 0) {
    FUN_0008304c(param_1 + 4,8);
    local_14 = "Failed to generate DHKey";
    local_18 = 2;
    FUN_00083074(&DAT_00088180,0x1040,&local_18);
    iVar1 = 8;
  }
  return iVar1;
}



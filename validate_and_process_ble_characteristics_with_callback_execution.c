/*
 * Function: validate_and_process_ble_characteristics_with_callback_execution
 * Entry:    00055cb4
 * Prototype: undefined validate_and_process_ble_characteristics_with_callback_execution()
 */


int validate_and_process_ble_characteristics_with_callback_execution
              (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = derive_key_output(param_1,param_2,&DAT_20006000,param_4,param_4);
    if (iVar1 == -1) {
      iVar1 = validate_and_process_ble_characteristics_with_state_management();
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = derive_key_output(param_1,param_2,&DAT_20006000);
    }
    if (iVar1 == 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = -5;
    }
  }
  return iVar1;
}



/*
 * Function: bluetooth_hci_command_processing_with_state_management_and_parameter
 * Entry:    00054d18
 * Prototype: undefined bluetooth_hci_command_processing_with_state_management_and_parameter()
 */


int bluetooth_hci_command_processing_with_state_management_and_parameter
              (int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  iStack_18 = param_1;
  iStack_14 = param_2;
  uStack_10 = param_3;
  if ((param_2 == 0) || (iVar1 = compare_byte_arrays_7_bytes(param_2,&DAT_000f2b3a), iVar1 != 0)) {
    do {
      iVar1 = init_status_structure(&iStack_18);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = bluetooth_hci_command_processing_with_validation_and_parameter(&iStack_18);
    } while (-1 < iVar1);
    iVar2 = copy_memory_word_short_and_byte((int)&DAT_20002000 + param_1 * 7,&iStack_18);
    iVar1 = param_2;
    if (param_2 == 0) goto LAB_00054d38;
  }
  else {
    iVar1 = (int)&DAT_20002000 + param_1 * 7;
    iVar2 = param_2;
  }
  copy_memory_word_short_and_byte(iVar1,iVar2);
LAB_00054d38:
  iVar1 = dereference_pointer_value(&DAT_200020d4);
  if (iVar1 << 0x1d < 0) {
    check_system_status_and_compress();
    return_zero_alt();
  }
  return 0;
}



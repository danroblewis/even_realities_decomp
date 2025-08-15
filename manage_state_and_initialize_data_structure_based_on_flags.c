/*
 * Function: manage_state_and_initialize_data_structure_based_on_flags
 * Entry:    00084ade
 * Prototype: undefined manage_state_and_initialize_data_structure_based_on_flags()
 */


void manage_state_and_initialize_data_structure_based_on_flags(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = check_state_flags_and_return_status(*(undefined4 *)(param_1 + 4));
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if ((int)uVar2 == 0) {
    *(undefined1 *)(*(int *)(iVar1 + 0xc) + 0xcd) = 1;
    return;
  }
  *(undefined1 *)(*(int *)(iVar1 + 0xc) + 0xcd) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xbc) = 0xffffffff;
  initialize_data_structure_with_extraction_and_flag_configuration
            (param_1,*(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x10),
             *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x14));
  return;
}



/*
 * Function: manage_device_buffer_operations
 * Entry:    0007f110
 * Prototype: undefined manage_device_buffer_operations()
 */


int manage_device_buffer_operations(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  int iVar2;
  
  iVar2 = param_4;
  iVar1 = write_data_to_device_buffer_with_management(param_1 + 0x204);
  if (param_4 != 0) {
    iVar1 = calculate_device_buffer_offset(*(undefined4 *)(*(int *)(param_1 + 0x200) + 8));
    iVar1 = setup_device_buffer_with_flags
                      (param_1 + 0x204,*(int *)(*(int *)(param_1 + 0x200) + 4) + iVar1,extraout_r2,
                       *(int *)(param_1 + 0x200),iVar2);
    if (iVar1 == 0) {
      no_operation(*(undefined4 *)(param_1 + 0x200));
      *(undefined4 *)(param_1 + 0x200) = 0;
    }
  }
  return iVar1;
}



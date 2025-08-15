/*
 * Function: process_data_with_callback_and_parameter_alt4
 * Entry:    00052604
 * Prototype: undefined process_data_with_callback_and_parameter_alt4()
 */


undefined4 process_data_with_callback_and_parameter_alt4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_2c [5];
  undefined4 local_18;
  char *local_14;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = setup_device_buffer_with_validation(9,local_2c);
  if (iVar1 < 0) {
    uVar2 = 2;
    local_18 = 2;
    local_14 = "Failed to open flash area";
    process_and_compress_data_with_validation(&DAT_00088220,0x1040,&local_18,0);
  }
  else {
    iVar1 = get_data_structure_field_at_offset_0xc(local_2c[0]);
    if (iVar1 == 0) {
      local_14 = "Failed to get flash area device";
      local_18 = 2;
      process_and_compress_data_with_validation(&DAT_00088220,0x1040,&local_18);
      no_operation(local_2c[0]);
      uVar2 = 3;
    }
    else {
      uVar2 = call_alternative_callback_function_with_bounds_validation
                        (local_2c[0],0,*(undefined4 *)(local_2c[0] + 8),iVar1);
      if ((int)uVar2 < 0) {
        local_14 = "Failed to erase flash area";
        local_18 = 2;
        process_and_compress_data_with_validation(&DAT_00088220,0x1040,&local_18,0);
        no_operation(local_2c[0]);
        uVar2 = 4;
      }
      else {
        no_operation(local_2c[0]);
        if (uVar2 == 0) {
          return 0;
        }
      }
    }
  }
  iVar1 = process_data_with_callback_execution_alt2(iVar3 + 4,0x3f,uVar2 & 0xffff);
  if (iVar1 != 0) {
    return 0;
  }
  return 7;
}



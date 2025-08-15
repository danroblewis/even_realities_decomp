/*
 * Function: process_system_data_with_memory_management_and_error_handling
 * Entry:    0007a9fc
 * Prototype: undefined process_system_data_with_memory_management_and_error_handling()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
process_system_data_with_memory_management_and_error_handling
          (undefined4 param_1,int param_2,uint param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  uint local_1c [2];
  
  if (((param_2 == 0) || (param_4 == (uint *)0x0)) || (param_3 == 0)) {
    return 0xffffffff;
  }
  iVar1 = execute_function_pointer_with_jump_table(HARDWARE_DEVICE_HANDLE,0xffffffff);
  if (iVar1 != 0) {
    initialize_memory_with_jump_table_handling("Fail to acquire mutex\n");
  }
  if ((_DAT_50846e34 & 1) == 0) {
    iVar1 = manage_system_reference_counter_with_state_transitions();
    if (iVar1 != 0) {
      initialize_memory_with_jump_table_handling("Fail to increase PM counter\n");
    }
    iVar1 = validate_sha256_context_with_state_checking(&DAT_2000d3b4);
    if ((iVar1 == 0) &&
       (iVar1 = wrapper_system_configuration_management
                          (&DAT_2000d3b0,&DAT_2000d3b4,0,0,&local_20,local_1c,&DAT_2000d3dc,0),
       iVar1 == 0)) {
      if (local_1c[0] <= param_3) {
        param_3 = local_1c[0];
      }
      *param_4 = param_3;
      copy_memory_safe(param_2,local_20 + 8);
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
    iVar1 = manage_system_reference_counter_with_state_transitions(1);
    if (iVar1 != 0) {
      initialize_memory_with_jump_table_handling("Fail to decrease PM counter\n");
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  clear_memory_buffer_with_size_validation(&DAT_2000d3dc,0x220);
  clear_memory_buffer_with_size_validation(&DAT_2000d3b0,4);
  clear_memory_buffer_with_size_validation(&DAT_2000d3b4,0x28);
  iVar1 = execute_function_pointer_with_offset_handling(HARDWARE_DEVICE_HANDLE);
  if (iVar1 == 0) {
    return uVar2;
  }
  initialize_memory_with_jump_table_handling("Fail to unlock mutex\n");
  return uVar2;
}



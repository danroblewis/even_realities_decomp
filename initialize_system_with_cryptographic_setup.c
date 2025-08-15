/*
 * Function: initialize_system_with_cryptographic_setup
 * Entry:    0007a16c
 * Prototype: undefined initialize_system_with_cryptographic_setup()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int initialize_system_with_cryptographic_setup(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_3c;
  undefined1 auStack_38 [44];
  
  local_3c = 0;
  fill_memory_buffer(auStack_38,0,0x28);
  iVar1 = validate_sha256_context_with_state_checking(auStack_38);
  if (iVar1 == 0) {
    iVar1 = execute_function_pointer_with_jump_table(HARDWARE_DEVICE_HANDLE,0xffffffff);
    if (iVar1 != 0) {
      initialize_memory_with_jump_table_handling("Fail to acquire mutex\n");
    }
    if ((_DAT_50846e34 & 1) == 0) {
      iVar1 = manage_system_reference_counter_with_state_transitions();
      if (iVar1 != 0) {
        initialize_memory_with_jump_table_handling("Fail to increase PM counter\n");
      }
      iVar1 = initialize_system_configuration_with_parameter_setup
                        (&local_3c,auStack_38,&DAT_2000d120);
      iVar2 = manage_system_reference_counter_with_state_transitions(1);
      if (iVar2 != 0) {
        initialize_memory_with_jump_table_handling("Fail to decrease PM counter\n");
      }
      iVar2 = execute_function_pointer_with_offset_handling(HARDWARE_DEVICE_HANDLE);
    }
    else {
      iVar1 = 5;
      iVar2 = execute_function_pointer_with_offset_handling(HARDWARE_DEVICE_HANDLE);
    }
    if (iVar2 != 0) {
      initialize_memory_with_jump_table_handling("Fail to release mutex\n");
      return iVar1;
    }
  }
  return iVar1;
}



/*
 * Function: initialize_system_components_with_dependency_management
 * Entry:    0007a2d0
 * Prototype: undefined initialize_system_components_with_dependency_management()
 */


int initialize_system_components_with_dependency_management(void)

{
  int iVar1;
  
  iVar1 = execute_function_pointer_with_error_handling(&DAT_20002f50);
  if (((iVar1 == 0) &&
      (iVar1 = execute_function_pointer_with_error_handling(&DAT_20002f4c), iVar1 == 0)) &&
     (iVar1 = execute_function_pointer_with_error_handling(&DAT_20002f48), iVar1 == 0)) {
    HARDWARE_DEVICE_HANDLE = &DAT_20002f48;
    iVar1 = execute_function_pointer_with_error_handling(&DAT_20002f44);
    if (iVar1 == 0) {
      iVar1 = system_initialization_stub_function(0,0);
      if (iVar1 == 0) {
        handle_system_event_with_function_pointer_execution();
      }
      return iVar1;
    }
  }
  return iVar1;
}



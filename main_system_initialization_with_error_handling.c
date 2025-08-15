/*
 * Function: main_system_initialization_with_error_handling
 * Entry:    0007a218
 * Prototype: undefined main_system_initialization_with_error_handling()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 main_system_initialization_with_error_handling(void)

{
  int iVar1;
  undefined1 auStack_14 [8];
  
  iVar1 = return_zero_simple();
  if (iVar1 != 0) {
    cleanup_system_components_comprehensive();
    return 3;
  }
  iVar1 = initialize_system_components_with_dependency_management();
  if (iVar1 != 0) {
    return 4;
  }
  _DAT_50845a0c = iVar1;
  iVar1 = initialize_system_with_cryptographic_setup();
  if (iVar1 == 0) {
    if (DAT_2000d340 != 0) {
      return 0;
    }
    iVar1 = initialize_system_with_validation_and_cleanup(0,0,0);
    if ((iVar1 == 0) &&
       (iVar1 = check_system_status_with_parameter_validation(0,&DAT_2000d344,0x68,auStack_14),
       iVar1 == 0)) {
      DAT_2000d340 = 0x5a5aea5a;
      return 0;
    }
  }
  return 5;
}



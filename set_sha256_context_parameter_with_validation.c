/*
 * Function: set_sha256_context_parameter_with_validation
 * Entry:    0007abf4
 * Prototype: undefined set_sha256_context_parameter_with_validation()
 */


undefined4
set_sha256_context_parameter_with_validation
          (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = initialize_sha256_context_parameter_with_memory_setup(param_1,1,param_3,param_4,param_4)
    ;
  }
  else {
    if (param_2 != 1) {
      return 0xffffffc9;
    }
    iVar1 = initialize_sha256_context_parameter_with_memory_setup(param_1,2,param_3,param_4,param_4)
    ;
  }
  if (iVar1 != 0) {
    return 0xffffffc9;
  }
  return 0;
}



/*
 * Function: initialize_sha256_context_parameter_with_memory_setup
 * Entry:    0007acb8
 * Prototype: undefined initialize_sha256_context_parameter_with_memory_setup()
 */


int initialize_sha256_context_parameter_with_memory_setup
              (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_0007a3d4(param_1,0xf0,param_3,param_4,param_4);
    *param_1 = param_2;
    param_1[0x17] = 0x40;
    iVar1 = initialize_sha256_key_with_type_based_memory_copying(param_1);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
    return iVar1;
  }
  return 1;
}



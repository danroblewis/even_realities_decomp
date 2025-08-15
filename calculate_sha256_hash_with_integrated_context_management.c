/*
 * Function: calculate_sha256_hash_with_integrated_context_management
 * Entry:    0007af28
 * Prototype: undefined calculate_sha256_hash_with_integrated_context_management()
 */


int calculate_sha256_hash_with_integrated_context_management
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  reset_sha256_context_with_error_handling(&DAT_2000d5fc);
  iVar1 = set_sha256_context_parameter_with_validation(&DAT_2000d5fc,param_4);
  if ((iVar1 == 0) &&
     (iVar1 = update_sha256_data_with_buffer_management(&DAT_2000d5fc,param_1,param_2), iVar1 == 0))
  {
    iVar1 = extract_sha256_hash_result_with_type_validation(&DAT_2000d5fc,param_3);
    FUN_0007abe8(&DAT_2000d5fc);
    return iVar1;
  }
  FUN_0007abe8(&DAT_2000d5fc);
  return iVar1;
}



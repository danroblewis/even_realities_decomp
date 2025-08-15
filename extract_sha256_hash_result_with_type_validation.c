/*
 * Function: extract_sha256_hash_result_with_type_validation
 * Entry:    0007ac70
 * Prototype: undefined extract_sha256_hash_result_with_type_validation()
 */


undefined4 extract_sha256_hash_result_with_type_validation(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_1 == (int *)0x0) || (param_2 == 0)) ||
     (iVar1 = finalize_sha256_hash_with_padding_and_processing(), iVar1 != 0)) {
    uVar2 = 0xffffffc9;
  }
  else {
    if (*param_1 == 1) {
      copy_memory_safe(param_2,param_1 + 2,0x20);
      return 0;
    }
    uVar2 = 0;
    if (*param_1 == 2) {
      copy_memory_safe(param_2,param_1 + 2,0x1c);
      return 0;
    }
  }
  return uVar2;
}



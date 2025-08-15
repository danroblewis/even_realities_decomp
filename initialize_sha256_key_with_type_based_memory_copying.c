/*
 * Function: initialize_sha256_key_with_type_based_memory_copying
 * Entry:    0007b194
 * Prototype: undefined initialize_sha256_key_with_type_based_memory_copying()
 */


undefined4
initialize_sha256_key_with_type_based_memory_copying
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0xf30000;
  }
  iVar1 = *param_1;
  if (iVar1 == 1) {
    copy_memory_safe(param_1 + 2,&DAT_000988b8,0x20,1,param_4);
  }
  else if (iVar1 == 2) {
    copy_memory_safe(param_1 + 2,&DAT_000988d8,0x20,2,param_4);
  }
  else {
    if (iVar1 != 0) {
      return 0xf30001;
    }
    copy_memory_safe(param_1 + 2,&DAT_000988f8,0x14,0,param_4);
  }
  return 0;
}



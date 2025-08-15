/*
 * Function: update_sha256_data_with_buffer_management
 * Entry:    0007ac1c
 * Prototype: undefined update_sha256_data_with_buffer_management()
 */


undefined4 update_sha256_data_with_buffer_management(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined1 auStack_90 [132];
  
  if ((param_2 + param_3 < 0x100001) && (param_3 < 0x81)) {
    copy_memory_safe(auStack_90);
    iVar1 = update_sha256_data_with_block_processing(param_1,auStack_90,param_3);
    FUN_0007a3d4(auStack_90,0x80);
  }
  else {
    if (param_2 < 0x100001) {
      return 0xffffffc9;
    }
    iVar1 = update_sha256_data_with_block_processing(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    return 0xffffffc9;
  }
  return 0;
}



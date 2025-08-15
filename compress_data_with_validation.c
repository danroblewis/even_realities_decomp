/*
 * Function: compress_data_with_validation
 * Entry:    00050c24
 * Prototype: undefined compress_data_with_validation()
 */


undefined4 compress_data_with_validation(undefined4 param_1)

{
  undefined4 local_18;
  char *local_14;
  undefined4 uStack_10;
  
  local_14 = "Failed to allocate new MPU region %u\n";
  local_18 = 3;
  uStack_10 = param_1;
  process_and_compress_data_with_validation(&DAT_00088228,0x1840,&local_18,0);
  return 0xffffffea;
}



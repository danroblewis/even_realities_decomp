/*
 * Function: handle_memory_operation_with_bounds_checking
 * Entry:    000839fe
 * Prototype: undefined handle_memory_operation_with_bounds_checking()
 */


undefined4
handle_memory_operation_with_bounds_checking
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 local_18;
  char *local_14;
  
  iVar1 = validate_range_bounds(param_2,param_4);
  if (iVar1 == 0) {
    local_14 = "invalid address: 0x%08lx:%zu";
    local_18 = 4;
    process_and_compress_data_with_validation(&DAT_000881b0,0x2040,&local_18,0);
    return 0xffffffea;
  }
  if (param_4 != 0) {
    memcpy(param_3,param_2,param_4);
  }
  return 0;
}



/*
 * Function: initialize_buffer_structure
 * Entry:    0004e2b4
 * Prototype: undefined initialize_buffer_structure(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined param_6, undefined4 param_7)
 */


undefined4
initialize_buffer_structure
          (int *param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,int param_7)

{
  uint uVar1;
  uint local_40;
  uint local_3c;
  undefined4 local_28;
  char *local_24;
  
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    local_3c = 0;
    local_40 = param_4;
    uVar1 = FUN_0007f064(param_2);
    if (param_4 == (param_4 / uVar1) * uVar1) {
      FUN_00083ac2(param_2,&LAB_0007f070_1,&local_40);
      if (local_3c == 0) {
        return 0xfffffff2;
      }
      if ((param_5 + param_6 <= local_3c) &&
         (uVar1 = FUN_0007f064(param_2), param_5 == (param_5 / uVar1) * uVar1)) {
        *param_1 = param_3;
        param_1[1] = param_4;
        param_1[3] = param_2;
        param_1[4] = 0;
        param_1[2] = 0;
        param_1[5] = param_5;
        if (param_6 == 0) {
          param_6 = local_3c - param_5;
        }
        param_1[7] = param_7;
        param_1[6] = param_6;
        param_1[8] = -1;
        return 0;
      }
      local_24 = "Incorrect parameter";
    }
    else {
      local_24 = "Buffer size is not aligned to minimal write-block-size";
    }
    local_28 = 2;
    process_and_compress_data_with_validation(&DAT_000880d8,0x1040,&local_28,0);
  }
  return 0xfffffff2;
}



/*
 * Function: prepare_hmac_sha256_input_data
 * Entry:    0007bf44
 * Prototype: undefined prepare_hmac_sha256_input_data(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 */


undefined4
prepare_hmac_sha256_input_data
          (int param_1,int param_2,int param_3,uint param_4,int param_5,uint *param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  uint local_20;
  uint local_1c;
  
  local_1c = 0;
  if (param_7 < 0xff1) {
    uVar1 = param_7 * 8;
    if (uVar1 < 0x100) {
      local_20 = 3;
    }
    else {
      local_20 = 4;
    }
    if (((((param_2 - 1U < 0x40) && (param_1 != 0)) &&
         ((param_4 == 0 || ((param_3 != 0 && (param_4 < 0x41)))))) && (param_5 != 0)) &&
       ((*param_6 != 0 && (local_20 + param_2 + param_4 <= *param_6)))) {
      copy_memory_safe(param_5 + 1,param_1,param_2);
      iVar2 = param_2 + 2;
      *(undefined1 *)(param_2 + param_5 + 1) = 0;
      if (param_4 != 0) {
        copy_memory_safe(param_5 + iVar2,param_3,param_4);
        iVar2 = iVar2 + param_4;
      }
      local_20 = uVar1;
      if (uVar1 < 0x100) {
        copy_memory_safe(param_5 + iVar2,&local_20,1);
        uVar1 = iVar2 + 1;
      }
      else {
        local_1c = (param_7 & 0x1f) << 0xb | uVar1 >> 8;
        copy_memory_safe(param_5 + iVar2,&local_1c,2);
        uVar1 = iVar2 + 2;
      }
      *param_6 = uVar1;
      return 0;
    }
  }
  return 0x80000006;
}



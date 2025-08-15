/*
 * Function: FUN_00061c40
 * Entry:    00061c40
 * Prototype: undefined FUN_00061c40()
 */


undefined4 FUN_00061c40(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_18;
  char *local_14;
  
  if (param_3 != 0) {
    local_14 = "Sending data not supported";
    local_18 = 2;
    process_and_compress_data_with_validation(&DAT_000881f8,0x1080,&local_18,0);
  }
  if ((param_2 < 0x10) &&
     ((int)((*(uint *)(*(int *)(param_1 + 4) + 4) >> (param_2 & 0xff)) << 0x1f) < 0)) {
    uVar1 = 0;
    *(undefined4 *)((param_2 & 0x3f) * 4 + 0x5002a000) = 1;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/*
 * Function: sha256_finalize
 * Entry:    00080058
 * Prototype: undefined __stdcall sha256_finalize(undefined4 sha256_ctx, undefined4 data, undefined4 data_len)
 */


int sha256_finalize(int sha256_ctx,int data,int data_len)

{
  int extraout_r1;
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  if (sha256_ctx != 0) {
    if (data == 0) {
      sha256_ctx = 0;
    }
    else if (data_len == 0) {
      sha256_ctx = 0;
    }
    else {
      FUN_0007feaa(auStack_30,0x10,data);
      FUN_0007feda(auStack_30,data_len);
      iVar1 = data_len + 0x10;
      do {
        process_data_with_callback_validation_alt2(auStack_30);
        FUN_0007ff64(auStack_30);
        FUN_0007ffd6(auStack_20,auStack_30);
        FUN_0007ffd6(auStack_1c,auStack_2c);
        FUN_0007ffd6(auStack_18,auStack_28);
        FUN_0007ffd6(auStack_14,auStack_24);
        FUN_0007feaa(auStack_30,0x10,auStack_20);
        iVar2 = iVar1 + 0x10;
        FUN_0007feda(auStack_30,iVar1);
        iVar1 = iVar2;
      } while (iVar2 != extraout_r1 + 0xa0);
      process_data_with_callback_validation_alt2();
      FUN_0007ff64(auStack_30);
      FUN_0007feda(auStack_30,iVar2);
      FUN_0007feaa(sha256_ctx,0x10,auStack_30);
      fill_memory_buffer(auStack_30,0,0x10);
      sha256_ctx = 1;
    }
  }
  return sha256_ctx;
}



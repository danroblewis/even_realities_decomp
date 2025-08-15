/*
 * Function: sha256_update
 * Entry:    000801c0
 * Prototype: undefined __stdcall sha256_update(undefined4 sha256_ctx, undefined4 data, undefined4 data_len)
 */


undefined4 sha256_update(int sha256_ctx,int data,uint data_len)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  
  if (sha256_ctx != 0) {
    if (data_len == 0) {
      return 1;
    }
    if (data != 0) {
      iVar2 = *(int *)(sha256_ctx + 0x50);
      if (iVar2 != 0 || *(int *)(sha256_ctx + 0x54) != 0) {
        iVar5 = *(int *)(sha256_ctx + 0x44);
        *(int *)(sha256_ctx + 0x50) = iVar2 + -1;
        *(uint *)(sha256_ctx + 0x54) = *(int *)(sha256_ctx + 0x54) + -1 + (uint)(iVar2 != 0);
        if (iVar5 != 0) {
          uVar4 = 0x10 - iVar5;
          iVar2 = iVar5 + 0x30 + sha256_ctx;
          if (data_len < uVar4) {
            FUN_0007feaa(iVar2,data_len,data,data_len);
            *(uint *)(sha256_ctx + 0x44) = *(int *)(sha256_ctx + 0x44) + data_len;
            return 1;
          }
          FUN_0007feaa(iVar2,uVar4,data,uVar4);
          *(undefined4 *)(sha256_ctx + 0x44) = 0;
          data_len = (data_len - 0x10) + iVar5;
          data = data + uVar4;
          pbVar3 = (byte *)(sha256_ctx + -1);
          do {
            pbVar1 = pbVar3 + 1;
            *pbVar1 = *pbVar1 ^ pbVar3[0x31];
            pbVar3 = pbVar1;
          } while (pbVar1 != (byte *)(sha256_ctx + 0xf));
          sha256_finalize(sha256_ctx,sha256_ctx,*(undefined4 *)(sha256_ctx + 0x48));
        }
        for (; 0x10 < data_len; data_len = data_len - 0x10) {
          pbVar3 = (byte *)(sha256_ctx + -1);
          pbVar1 = (byte *)(data + -1);
          do {
            pbVar3 = pbVar3 + 1;
            pbVar1 = pbVar1 + 1;
            *pbVar3 = *pbVar3 ^ *pbVar1;
          } while (pbVar3 != (byte *)(sha256_ctx + 0xf));
          sha256_finalize(sha256_ctx,sha256_ctx,*(undefined4 *)(sha256_ctx + 0x48));
          data = data + 0x10;
        }
        if (data_len == 0) {
          return 1;
        }
        FUN_0007feaa(sha256_ctx + 0x30,data_len,data,data_len);
        *(uint *)(sha256_ctx + 0x44) = data_len;
        return 1;
      }
    }
  }
  return 0;
}



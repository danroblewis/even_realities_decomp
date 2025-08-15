/*
 * Function: sha256_finalize_block
 * Entry:    0008034c
 * Prototype: undefined __stdcall sha256_finalize_block(undefined4 hash_output, undefined4 sha256_ctx, undefined4 unused1, undefined4 unused2)
 */


int sha256_finalize_block(int hash_output,int sha256_ctx,undefined4 param_3,undefined4 unused2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int extraout_r3;
  undefined4 uVar4;
  int iVar5;
  
  if (hash_output != 0) {
    if (sha256_ctx == 0) {
      hash_output = 0;
    }
    else {
      iVar3 = *(int *)(sha256_ctx + 0x68);
      uVar2 = *(uint *)(sha256_ctx + 0x20);
      *(uint *)(sha256_ctx + 0x20) = uVar2 + iVar3 * 8;
      *(uint *)(sha256_ctx + 0x24) = *(int *)(sha256_ctx + 0x24) + (uint)CARRY4(uVar2,iVar3 * 8);
      uVar2 = iVar3 + 1;
      iVar3 = iVar3 + sha256_ctx;
      *(uint *)(sha256_ctx + 0x68) = uVar2;
      *(undefined1 *)(iVar3 + 0x28) = 0x80;
      iVar5 = sha256_ctx + 0x28;
      if (0x38 < uVar2) {
        fill_memory_buffer(uVar2 + iVar5,0,0x40 - uVar2,iVar3,unused2);
        process_data_with_callback_and_parameter_alt2(sha256_ctx,iVar5);
        *(undefined4 *)(sha256_ctx + 0x68) = 0;
        iVar3 = extraout_r3;
      }
      fill_memory_buffer(*(int *)(sha256_ctx + 0x68) + iVar5,0,0x38 - *(int *)(sha256_ctx + 0x68),
                         iVar3,unused2);
      uVar2 = *(uint *)(sha256_ctx + 0x20);
      uVar4 = *(undefined4 *)(sha256_ctx + 0x24);
      *(uint *)(sha256_ctx + 100) =
           uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18
      ;
      *(char *)(sha256_ctx + 99) = (char)uVar4;
      *(char *)(sha256_ctx + 0x62) = (char)((uint)uVar4 >> 8);
      *(char *)(sha256_ctx + 0x60) = (char)((uint)uVar4 >> 0x18);
      *(char *)(sha256_ctx + 0x61) = (char)((uint)uVar4 >> 0x10);
      process_data_with_callback_and_parameter_alt2(sha256_ctx,iVar5);
      puVar1 = (undefined4 *)(sha256_ctx + -4);
      iVar3 = hash_output + 4;
      do {
        puVar1 = puVar1 + 1;
        uVar4 = *puVar1;
        iVar5 = iVar3 + 4;
        *(char *)(iVar3 + -4) = (char)((uint)uVar4 >> 0x18);
        *(char *)(iVar3 + -3) = (char)((uint)uVar4 >> 0x10);
        *(char *)(iVar3 + -2) = (char)((uint)uVar4 >> 8);
        *(char *)(iVar3 + -1) = (char)uVar4;
        iVar3 = iVar5;
      } while (iVar5 != hash_output + 0x24);
      fill_memory_buffer(sha256_ctx,0,0x70,iVar5,unused2);
      hash_output = 1;
    }
  }
  return hash_output;
}



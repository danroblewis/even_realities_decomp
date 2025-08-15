/*
 * Function: process_crypto_stream
 * Entry:    00080300
 * Prototype: undefined __stdcall process_crypto_stream(undefined4 crypto_ctx, undefined4 data, undefined4 data_len, undefined4 unused)
 */


int process_crypto_stream(int crypto_ctx,undefined1 *data,int data_len,undefined4 unused)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  
  if (crypto_ctx != 0) {
    if (data == (undefined1 *)0x0) {
      crypto_ctx = 0;
    }
    else {
      if (data_len != 0) {
        iVar5 = crypto_ctx + 0x28;
        puVar3 = data;
        do {
          iVar2 = *(int *)(crypto_ctx + 0x68);
          uVar1 = iVar2 + 1;
          *(uint *)(crypto_ctx + 0x68) = uVar1;
          puVar4 = puVar3 + 1;
          iVar2 = iVar2 + crypto_ctx;
          *(undefined1 *)(iVar2 + 0x28) = *puVar3;
          if (0x3f < uVar1) {
            crypto_ctx = process_data_with_callback_and_parameter_alt2
                                   (crypto_ctx,iVar5,uVar1,iVar2,unused);
            uVar1 = *(uint *)(crypto_ctx + 0x20);
            *(uint *)(crypto_ctx + 0x20) = uVar1 + 0x200;
            *(uint *)(crypto_ctx + 0x24) = *(int *)(crypto_ctx + 0x24) + (uint)(0xfffffdff < uVar1);
            *(undefined4 *)(crypto_ctx + 0x68) = 0;
          }
          puVar3 = puVar4;
        } while (data + data_len != puVar4);
      }
      crypto_ctx = 1;
    }
  }
  return crypto_ctx;
}



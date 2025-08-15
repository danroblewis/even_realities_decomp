/*
 * Function: perform_cryptographic_xor_and_sha256_operations
 * Entry:    0008323a
 * Prototype: undefined perform_cryptographic_xor_and_sha256_operations(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined param_6, undefined4 param_7)
 */


void perform_cryptographic_xor_and_sha256_operations
               (undefined4 param_1,byte *param_2,undefined4 *param_3,undefined4 *param_4,
               byte *param_5,undefined1 *param_6,byte *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar4;
  byte local_38 [2];
  undefined4 local_36;
  undefined2 local_32;
  undefined1 local_30;
  undefined4 local_2f;
  undefined2 local_2b;
  undefined1 local_29;
  undefined4 local_28;
  undefined2 local_24;
  undefined4 local_22;
  undefined2 local_1e;
  int local_1c;
  byte *pbVar3;
  
  local_38[0] = *param_5;
  local_38[1] = *param_6;
  local_36 = *param_3;
  local_32 = *(undefined2 *)(param_3 + 1);
  local_30 = *(undefined1 *)((int)param_3 + 6);
  local_2f = *param_4;
  local_2b = *(undefined2 *)(param_4 + 1);
  local_29 = *(undefined1 *)((int)param_4 + 6);
  pbVar1 = local_38;
  pbVar3 = param_2;
  pbVar4 = param_7;
  do {
    pbVar2 = pbVar3 + 1;
    *pbVar4 = *pbVar3 ^ *pbVar1;
    pbVar1 = pbVar1 + 1;
    pbVar3 = pbVar2;
    pbVar4 = pbVar4 + 1;
  } while (pbVar2 != param_2 + 0x10);
  local_1c = sha256_hash_with_byte_reversal(param_1,param_7,param_7);
  if (local_1c == 0) {
    local_24 = *(undefined2 *)(param_6 + 5);
    local_28 = *(undefined4 *)(param_6 + 1);
    local_22 = *(undefined4 *)(param_5 + 1);
    local_1e = *(undefined2 *)(param_5 + 5);
    pbVar1 = (byte *)&local_28;
    pbVar3 = param_7;
    do {
      pbVar4 = pbVar3 + 1;
      *pbVar3 = *pbVar3 ^ *pbVar1;
      pbVar1 = pbVar1 + 1;
      pbVar3 = pbVar4;
    } while (pbVar4 != param_7 + 0x10);
    sha256_hash_with_byte_reversal(param_1,param_7,param_7);
    return;
  }
  return;
}



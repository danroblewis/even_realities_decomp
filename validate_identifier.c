/*
 * Function: validate_identifier
 * Entry:    00080ca0
 * Prototype: undefined __stdcall validate_identifier(undefined4 validation_ctx, undefined4 identifier)
 */


bool validate_identifier(undefined4 validation_ctx,int identifier)

{
  bool bVar1;
  int iVar2;
  undefined2 local_24;
  undefined1 local_22;
  undefined3 local_20;
  undefined1 auStack_1d [17];
  
  _local_20 = CONCAT13(auStack_1d[0],*(undefined3 *)(identifier + 3));
  fill_memory_buffer(auStack_1d,0,0xd);
  iVar2 = sha256_hash_with_byte_reversal(validation_ctx,&local_20);
  if (iVar2 == 0) {
    local_24 = (undefined2)_local_20;
    local_22 = (undefined1)((uint)_local_20 >> 0x10);
    iVar2 = memcmp_byte_arrays(identifier,&local_24,3);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



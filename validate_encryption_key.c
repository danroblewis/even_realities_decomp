/*
 * Function: validate_encryption_key
 * Entry:    00080a4e
 * Prototype: undefined __stdcall validate_encryption_key(undefined4 expected_key, undefined4 key_slot)
 */


int validate_encryption_key(undefined4 expected_key,undefined4 key_slot)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [32];
  
  iVar2 = 0;
  while ((iVar1 = process_data_with_validation_and_callback_alt4(iVar2,key_slot,auStack_30,0),
         iVar1 != 0 || (iVar1 = memcmp_byte_arrays(auStack_30,expected_key,0x20), iVar1 != 0))) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) {
      return -1;
    }
  }
  return iVar2;
}



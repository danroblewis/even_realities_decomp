/*
 * Function: aes_key_expansion
 * Entry:    00080104
 * Prototype: undefined __stdcall aes_key_expansion(undefined4 expanded_key, undefined4 key)
 */


void aes_key_expansion(int expanded_key,byte *key)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  
  pbVar2 = key + 0x10;
  pbVar1 = (byte *)(expanded_key + 0xf);
  if ((char)*key < '\0') {
    bVar3 = 0x87;
  }
  else {
    bVar3 = 0;
  }
  while( true ) {
    pbVar2 = pbVar2 + -1;
    *pbVar1 = bVar3 ^ *pbVar2 << 1;
    if (pbVar2 == key) break;
    bVar3 = *pbVar2 >> 7;
    pbVar1 = pbVar1 + -1;
  }
  return;
}



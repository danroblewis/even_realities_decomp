/*
 * Function: memcmp_byte_arrays
 * Entry:    00086be4
 * Prototype: undefined __stdcall memcmp_byte_arrays(undefined4 buffer1, undefined4 buffer2, undefined4 length)
 */


int memcmp_byte_arrays(byte *buffer1,int buffer2,int length)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)(buffer2 + -1);
  pbVar2 = buffer1 + length;
  while( true ) {
    if (buffer1 == pbVar2) {
      return 0;
    }
    pbVar1 = pbVar1 + 1;
    if ((uint)*buffer1 != (uint)*pbVar1) break;
    buffer1 = buffer1 + 1;
  }
  return (uint)*buffer1 - (uint)*pbVar1;
}



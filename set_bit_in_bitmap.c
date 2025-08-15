/*
 * Function: set_bit_in_bitmap
 * Entry:    00064ef8
 * Prototype: undefined __stdcall set_bit_in_bitmap(undefined4 bitmap_pointer, undefined4 bit_position)
 */


undefined4 set_bit_in_bitmap(uint *bitmap_pointer,uint bit_position)

{
  undefined4 uVar1;
  
  if ((int)((*bitmap_pointer >> (bit_position & 0xff)) << 0x1f) < 0) {
    uVar1 = 0xbad0004;
  }
  else {
    do {
    } while (*bitmap_pointer != *bitmap_pointer);
    *bitmap_pointer = 1 << (bit_position & 0xff) | *bitmap_pointer;
    uVar1 = 0xbad0000;
  }
  return uVar1;
}



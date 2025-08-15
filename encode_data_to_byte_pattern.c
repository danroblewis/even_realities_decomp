/*
 * Function: encode_data_to_byte_pattern
 * Entry:    00036558
 * Prototype: undefined encode_data_to_byte_pattern()
 */


void encode_data_to_byte_pattern(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (BMP_PROCESSED_DATA == 0) {
    BMP_PROCESSED_DATA = malloc_maybe(0x140);
    if (BMP_PROCESSED_DATA == 0) {
      DEBUG_PRINT("[%s-%d]malloc error \n","pixelto4bithex_for_flash",0x28,param_4);
      return;
    }
    fill_memory_buffer(BMP_PROCESSED_DATA,0,0x140);
  }
  uVar1 = 0;
  do {
    if (param_2 <= BMP_PIXEL_COUNTER) {
      return;
    }
    BMP_PIXEL_COUNTER = BMP_PIXEL_COUNTER + 2;
    uVar3 = param_1 << (uVar1 & 0xff) & 0xc0;
    uVar2 = (undefined1)uVar3;
    if (uVar3 == 0xc0) {
      uVar2 = 0xff;
    }
    else if (uVar3 == 0x80) {
      uVar2 = 0xf0;
    }
    else if (uVar3 == 0x40) {
      uVar2 = 0xf;
    }
    else if (uVar3 != 0) {
      uVar2 = 0x99;
    }
    *(undefined1 *)(BMP_PROCESSED_DATA + BMP_ROW_COUNTER) = uVar2;
    uVar1 = uVar1 + 2;
    BMP_ROW_COUNTER = BMP_ROW_COUNTER + 1;
  } while (uVar1 != 8);
  return;
}



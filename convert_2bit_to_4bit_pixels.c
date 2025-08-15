/*
 * Function: convert_2bit_to_4bit_pixels
 * Entry:    0003678c
 * Prototype: undefined __stdcall convert_2bit_to_4bit_pixels(undefined4 compressed_pixel_data, undefined4 max_pixel_count, undefined4 unused_param1, undefined4 unused_param2)
 */


void convert_2bit_to_4bit_pixels
               (int compressed_pixel_data,int max_pixel_count,undefined4 param_3,
               undefined4 unused_param2)

{
  uint bit_shift;
  undefined1 color_value;
  uint pixel_index;
  
  if (BMP_PROCESSED_DATA == 0) {
    BMP_PROCESSED_DATA = malloc_maybe(0x140);
    if (BMP_PROCESSED_DATA == 0) {
      DEBUG_PRINT("[%s-%d]malloc error \n","pixelto4bithex",0xa7,unused_param2);
      return;
    }
    fill_memory_buffer(BMP_PROCESSED_DATA,0,0x140);
  }
  bit_shift = 0;
  do {
    if (max_pixel_count <= BMP_PIXEL_COUNTER) {
      return;
    }
    BMP_PIXEL_COUNTER = BMP_PIXEL_COUNTER + 2;
    pixel_index = compressed_pixel_data << (bit_shift & 0xff) & 0xc0;
    if (pixel_index == 0xc0) {
      color_value = 0;
    }
    else if (pixel_index == 0x80) {
      color_value = 0xf;
    }
    else if (pixel_index == 0x40) {
      color_value = 0xf0;
    }
    else if (pixel_index == 0) {
      color_value = 0xff;
    }
    else {
      color_value = 0x99;
    }
    *(undefined1 *)(BMP_PROCESSED_DATA + BMP_ROW_COUNTER) = color_value;
    bit_shift = bit_shift + 2;
    BMP_ROW_COUNTER = BMP_ROW_COUNTER + 1;
  } while (bit_shift != 8);
  return;
}



/*
 * Function: get_display_dimensions_and_bitmap
 * Entry:    00047a84
 * Prototype: undefined __stdcall get_display_dimensions_and_bitmap(undefined4 bitmap_index, undefined4 width_ptr, undefined4 height_ptr)
 */


undefined4
get_display_dimensions_and_bitmap(int bitmap_index,undefined4 *width_ptr,undefined4 *height_ptr)

{
  *height_ptr = 200;
  if (DISPLAY_UPDATE_FLAG != '\0') {
    *width_ptr = 0x27e;
    *height_ptr = 199;
    return 0;
  }
  *width_ptr = 0x240;
  *height_ptr = 0x88;
  return *(undefined4 *)(&DAT_0008ac20 + bitmap_index * 4);
}



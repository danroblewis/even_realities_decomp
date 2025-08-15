/*
 * Function: get_bitmap_data_by_index
 * Entry:    00047a4c
 * Prototype: undefined __stdcall get_bitmap_data_by_index(undefined4 bitmap_index, undefined4 data_size, undefined4 unused_param1, undefined4 unused_param2)
 */


undefined *
get_bitmap_data_by_index(int bitmap_index,int data_size,undefined4 param_3,undefined4 unused_param2)

{
  if (bitmap_index == 4) {
    memcpy(&DAT_2001d142,&DAT_00088697,0x120);
  }
  else {
    if (data_size < 0) {
      data_size = data_size + 3;
    }
    apply_color_lookup_table
              (&DAT_000e123a + (data_size >> 2) * bitmap_index,data_size >> 2,&DAT_2001d142,
               &DAT_000e123a,unused_param2);
  }
  return &DAT_2001d142;
}



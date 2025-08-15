/*
 * Function: draw_bitmap_to_framebuffer
 * Entry:    0007d53a
 * Prototype: undefined __stdcall draw_bitmap_to_framebuffer(undefined4 framebuffer_addr, undefined4 bitmap_data, undefined4 bitmap_width, undefined4 bitmap_height, undefined4 x_pos, undefined4 y_pos)
 */


int draw_bitmap_to_framebuffer
              (int framebuffer_addr,int bitmap_data,int bitmap_width,int bitmap_height,int x_pos,
              int y_pos)

{
  int *piVar1;
  int iVar2;
  
  if (199 < y_pos) {
    y_pos = 200;
  }
  if (0x27f < x_pos) {
    x_pos = 0x280;
  }
  piVar1 = (int *)(framebuffer_addr + y_pos * 4);
  for (iVar2 = 0; iVar2 < bitmap_height; iVar2 = iVar2 + 1) {
    memcpy(*piVar1 + x_pos / 2,bitmap_data,bitmap_width);
    bitmap_data = bitmap_data + bitmap_width;
    piVar1 = piVar1 + 1;
  }
  return y_pos;
}



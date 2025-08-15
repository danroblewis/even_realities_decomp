/*
 * Function: draw_4bit_bitmap_to_framebuffer
 * Entry:    0007d586
 * Prototype: undefined __stdcall draw_4bit_bitmap_to_framebuffer(undefined4 framebuffer_addr, undefined4 bitmap_data, undefined4 bitmap_width, undefined4 bitmap_height, undefined4 x_pos, undefined4 y_pos)
 */


void draw_4bit_bitmap_to_framebuffer
               (int framebuffer_addr,int bitmap_data,int bitmap_width,int bitmap_height,int x_pos,
               int y_pos)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar2 = 0;
  if (199 < y_pos) {
    y_pos = 200;
  }
  if (0x27f < x_pos) {
    x_pos = 0x280;
  }
  iVar4 = 0;
  for (; iVar2 < bitmap_height; iVar2 = iVar2 + 1) {
    pbVar5 = (byte *)(bitmap_data + iVar4);
    for (iVar3 = 0; iVar3 < bitmap_width / 2; iVar3 = iVar3 + 1) {
      iVar1 = *(int *)(framebuffer_addr + y_pos * 4 + iVar2 * 4);
      iVar6 = x_pos / 2 + iVar3;
      *(byte *)(iVar1 + iVar6) = *pbVar5 | *(byte *)(iVar1 + iVar6);
      pbVar5 = pbVar5 + 1;
    }
    iVar4 = iVar4 + (bitmap_width / 2 & ~(bitmap_width - (bitmap_width >> 0x1f) >> 0x1f));
  }
  return;
}



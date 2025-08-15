/*
 * Function: process_chinese_character_bitmaps
 * Entry:    000361d8
 * Prototype: undefined process_chinese_character_bitmaps()
 */


undefined4 process_chinese_character_bitmaps(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  ushort local_3a;
  undefined4 local_38 [2];
  undefined2 local_30;
  undefined4 local_2c [3];
  
  local_38[0] = 0;
  local_38[1] = 0;
  local_30 = 0;
  iVar1 = convert_string_to_unicode_buffer(&DAT_000a8d20,&local_3a);
  for (iVar2 = 0; iVar2 < (int)(uint)local_3a; iVar2 = iVar2 + 1) {
    uVar5 = find_chinese_bitmap_by_unicode(*(undefined2 *)(iVar1 + iVar2 * 2),0xc,0x24);
    draw_bitmap_to_framebuffer(param_1 + 0x24,uVar5,0xc,0x24,iVar2 * 0xc + 6,0);
  }
  iVar1 = get_work_mode();
  iVar2 = 0;
  local_2c[0] = *(undefined4 *)(iVar1 + 0xef);
  local_2c[1] = *(undefined4 *)(iVar1 + 0xf3);
  puVar3 = local_2c;
  local_2c[2] = *(undefined4 *)(iVar1 + 0xf7);
  do {
    uVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    iVar1 = convert_float_to_string_with_sign(uVar5,local_38);
    iVar2 = iVar2 + 0x1e;
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar5 = find_chinese_bitmap_by_unicode(*(undefined1 *)((int)local_38 + iVar4),0xc,0x24);
      draw_bitmap_to_framebuffer(param_1 + 0x24,uVar5,0xc,0x24,iVar4 * 0xc + 6,iVar2);
    }
  } while (iVar2 != 0x5a);
  return 0;
}



/*
 * Function: animate_framebuffer_with_pattern
 * Entry:    0004382c
 * Prototype: undefined animate_framebuffer_with_pattern()
 */


undefined4
animate_framebuffer_with_pattern(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar4 = 0;
  do {
    iVar2 = MAIN_FRAMEBUFFER;
    uVar5 = 0;
    do {
      iVar3 = 0;
      do {
        iVar7 = *(int *)(iVar2 + uVar5 * 4);
        bVar1 = *(byte *)(iVar7 + iVar3);
        if (bVar1 != 0) {
          *(byte *)(iVar7 + iVar3) = bVar1 & (&DAT_000ab6e0)[iVar3 + (uVar5 % 0x1a) * 0xa00 + iVar4]
          ;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x140);
      uVar5 = uVar5 + 1;
    } while (uVar5 != 199);
    iVar2 = get_work_mode();
    uVar6 = *(undefined4 *)(iVar2 + 0xeb4);
    iVar2 = get_work_mode();
    _reflash_fb_data_to_lcd(uVar6,*(undefined4 *)(iVar2 + 0xeb8),0,0,0x280,199,param_3);
    iVar4 = iVar4 + -0x140;
    handle_ble_uart_packet_processing_completion(5000);
  } while (iVar4 != -0xa00);
  gui_screen_clear();
  return 0;
}



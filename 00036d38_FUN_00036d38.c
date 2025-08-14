/*
 * Function: FUN_00036d38
 * Entry:    00036d38
 * Prototype: undefined FUN_00036d38()
 */


void FUN_00036d38(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar1 = FUN_00023ee0();
  if (DAT_20004968 != uVar1) {
    DAT_20004968 = (byte)uVar1;
    iVar2 = get_work_mode();
    iVar3 = get_ui_x_offset();
    iVar4 = get_ui_y_offset();
    iVar5 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    _clean_fb_data(iVar2 + 0xb90,0,iVar3 + 0x10a,iVar4 + 0x1c,iVar5 + 0x232,iVar6 + 0x88);
    iVar2 = get_work_mode();
    uVar8 = *(undefined4 *)(iVar2 + 0xeb4);
    iVar2 = get_work_mode();
    uVar9 = *(undefined4 *)(iVar2 + 0xeb8);
    iVar2 = get_ui_x_offset();
    iVar3 = get_ui_y_offset();
    iVar4 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    _reflash_fb_data_to_lcd(uVar8,uVar9,iVar2 + 0x10a,iVar3 + 0x1c,iVar4 + 0x232,iVar5 + 0x88);
  }
  if (uVar1 == 6) {
    iVar2 = get_ui_x_offset();
    iVar3 = get_ui_y_offset();
    iVar4 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    gui_utf_draw(0,&LAB_000a8ec6,0,iVar2 + 0x134,iVar3 + 0x28,iVar4 + 0x236,iVar5 + 0x43,1,0,0,0,0);
    iVar2 = get_ui_x_offset();
    iVar3 = get_ui_y_offset();
    iVar4 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    puVar7 = &LAB_000a8edc_1;
    iVar2 = iVar2 + 0x15a;
  }
  else {
    iVar2 = get_ui_x_offset();
    iVar3 = get_ui_y_offset();
    iVar4 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    gui_utf_draw(0,&LAB_000a8ea0_1,0,iVar2 + 0x144,iVar3 + 0x28,iVar4 + 0x236,iVar5 + 0x43,1,0,0,0,0
                );
    iVar2 = get_ui_x_offset();
    iVar3 = get_ui_y_offset();
    iVar4 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    puVar7 = &LAB_000a8eb4_1;
    iVar2 = iVar2 + 0x150;
  }
  gui_utf_draw(0,puVar7,0,iVar2,iVar3 + 0x43,iVar4 + 0x236,iVar5 + 0x5e,1,0,0,0,0);
  return;
}



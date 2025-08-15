/*
 * Function: draw_template_translate_screen
 * Entry:    0003fd44
 * Prototype: undefined draw_template_translate_screen()
 */


undefined4 draw_template_translate_screen(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined2 local_1c;
  
  iVar1 = get_work_mode();
  set_work_mode_parameter(param_1 + 0x24);
  uVar8 = (uint)*(byte *)(iVar1 + 0xf0);
  if (((uVar8 < 9) && (uVar9 = *(byte *)(iVar1 + 0xef) - 1, (uVar9 & 0xff) < 8)) && (uVar8 != 0)) {
    local_24 = 0;
    uStack_20 = 0;
    local_1c = 0;
    FUN_00077914(&local_24,10,"%s>%s",*(undefined4 *)(&DAT_200024f4 + (uVar8 - 1) * 4),
                 *(undefined4 *)(&DAT_200024f4 + uVar9 * 4));
    uVar2 = get_ui_x_offset();
    iVar4 = get_ui_y_offset();
    iVar5 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_utf_draw(0,&local_24,3,uVar2,iVar4 + 0x6e,iVar5 + 0x50,iVar6 + 0x89,1,0,0,0,0);
  }
  else if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): translate language type error! trans_info->original_type %d trans_info->translation_type %d\n"
                  ,"draw_template_translate_screen",uVar8,(uint)*(byte *)(iVar1 + 0xef));
    }
    else {
      handle_heartbeat("%s(): translate language type error! trans_info->original_type %d trans_info->translation_type %d\n"
                       ,"draw_template_translate_screen");
    }
  }
  uVar2 = get_work_mode_timestamp();
  uVar3 = get_ui_x_offset();
  iVar4 = get_ui_y_offset();
  iVar5 = get_ui_x_offset();
  iVar6 = get_ui_y_offset();
  EVEN_DASHBOARD_CLOCK_32x_TTF(uVar2,uVar3,iVar4 + 2,iVar5 + 0x50,iVar6 + 0x1d,3,1);
  if (*(char *)(iVar1 + 0xf1) == '\x01') {
    uVar2 = get_ui_x_offset();
    iVar4 = get_ui_y_offset();
    uVar3 = 0x1b;
  }
  else {
    uVar2 = get_ui_x_offset();
    iVar4 = get_ui_y_offset();
    uVar3 = 0x33;
  }
  gui_bmp_bitmap_draw(uVar3,uVar2,iVar4 + 0x36,0,0,0);
  iVar4 = get_ui_x_offset();
  iVar5 = get_ui_y_offset();
  iVar6 = get_ui_x_offset();
  iVar7 = get_ui_y_offset();
  gui_utf_draw(0,iVar1 + 0xf5,0,iVar4 + 0x58,iVar5 + 1,iVar6 + 0x240,iVar7 + 0x88,5,0,0,0,0);
  return 0;
}



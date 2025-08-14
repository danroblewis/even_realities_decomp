/*
 * Function: navigation_direction_img_display
 * Entry:    0003dff8
 * Prototype: undefined navigation_direction_img_display()
 */


void navigation_direction_img_display(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 - 1U < 0x23) {
    uVar1 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    gui_bmp_bitmap_draw(param_1 + 0x55,uVar1,iVar2 + 0x39,0,0,0,param_3);
  }
  else if (1 < LOG_LEVEL) {
    if (IS_DEBUG != 0) {
      handle_heartbeat();
      return;
    }
    DEBUG_PRINT("%s(): navigation direction parampter error\n","navigation_direction_img_display");
    return;
  }
  return;
}



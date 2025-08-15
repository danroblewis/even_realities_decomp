/*
 * Function: navigation_direction_img_display
 * Entry:    0003dff8
 * Prototype: undefined navigation_direction_img_display()
 */


void navigation_direction_img_display(int param_1)

{
  undefined4 x_pos;
  int iVar1;
  
  if (param_1 - 1U < 0x23) {
    x_pos = get_ui_x_offset();
    iVar1 = get_ui_y_offset();
    gui_bmp_bitmap_draw(param_1 + 0x55,x_pos,iVar1 + 0x39,0,0,0);
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



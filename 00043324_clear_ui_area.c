/*
 * Function: clear_ui_area
 * Entry:    00043324
 * Prototype: undefined __stdcall clear_ui_area(undefined4 x_pos, undefined4 y_pos, undefined4 clear_mode)
 */


undefined4 clear_ui_area(int x_pos,int y_pos,undefined4 clear_mode)

{
  _clean_fb_data(DAT_2000a034,0,x_pos,y_pos,x_pos + 0x28,y_pos + 0x28,clear_mode);
  return 0;
}



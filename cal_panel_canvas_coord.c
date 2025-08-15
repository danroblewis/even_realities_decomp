/*
 * Function: cal_panel_canvas_coord
 * Entry:    00042fb0
 * Prototype: undefined cal_panel_canvas_coord()
 */


void cal_panel_canvas_coord(int *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    iVar3 = *param_1;
    iVar1 = get_work_mode();
    switch(*(undefined1 *)(iVar1 + 0xec1)) {
    case 1:
      iVar1 = 0x16;
      break;
    case 2:
      iVar1 = 8;
      break;
    default:
      iVar1 = 0;
      break;
    case 4:
      iVar1 = -4;
      break;
    case 5:
      iVar1 = -8;
      break;
    case 6:
      iVar1 = -10;
      break;
    case 7:
      iVar1 = -0xc;
      break;
    case 8:
      iVar1 = -0xe;
      break;
    case 9:
      iVar1 = -0x10;
    }
    *param_1 = iVar1;
    pcVar2 = (char *)get_work_mode();
    if (*pcVar2 == '\x01') {
      *param_1 = -*param_1;
    }
    if ((*param_1 != iVar3) && (1 < LOG_LEVEL)) {
      if (IS_DEBUG == 0) {
        iVar1 = get_work_mode();
        DEBUG_PRINT("%s(): canvas_distance_gear:%d, pos_x:%d\n","cal_panel_canvas_coord",
                    (uint)*(byte *)(iVar1 + 0xec1),*param_1);
      }
      else {
        iVar1 = get_work_mode();
        handle_heartbeat("%s(): canvas_distance_gear:%d, pos_x:%d\n","cal_panel_canvas_coord",
                         *(undefined1 *)(iVar1 + 0xec1),*param_1);
      }
    }
  }
  if (param_2 != (int *)0x0) {
    iVar3 = *param_2;
    iVar1 = get_work_mode();
    iVar1 = (8 - (uint)*(byte *)(iVar1 + 0xec0)) * 0x23;
    *param_2 = iVar1;
    if ((iVar1 - iVar3 != 0) && (1 < LOG_LEVEL)) {
      if (IS_DEBUG == 0) {
        iVar1 = get_work_mode();
        DEBUG_PRINT("%s(): raster_height_gear:%d, pos_y:%d\n","cal_panel_canvas_coord",
                    (uint)*(byte *)(iVar1 + 0xec0),*param_2);
        return;
      }
      iVar1 = get_work_mode();
      handle_heartbeat("%s(): raster_height_gear:%d, pos_y:%d\n","cal_panel_canvas_coord",
                       *(undefined1 *)(iVar1 + 0xec0),*param_2);
      return;
    }
  }
  return;
}



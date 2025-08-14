/*
 * Function: FUN_0003f2a8
 * Entry:    0003f2a8
 * Prototype: undefined FUN_0003f2a8()
 */


void FUN_0003f2a8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar1 = FUN_00023ee0();
  if (iVar1 == 6) {
    iVar1 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar4 = get_ui_x_offset();
    iVar3 = get_ui_y_offset();
    gui_utf_draw(0,"Navigation aufgrund einer",0,iVar1 + 0xa8,iVar2 + 0x37,iVar4 + 0x23a,
                 iVar3 + 0x52,1,0,0,0,0);
    iVar1 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar3 = get_ui_x_offset();
    iVar4 = get_ui_y_offset();
    iVar4 = iVar4 + 0x6d;
    iVar2 = iVar2 + 0x52;
    pcVar5 = "App-Trennung gestoppt.";
    iVar1 = iVar1 + 0xb4;
  }
  else {
    iVar1 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar3 = get_ui_x_offset();
    iVar4 = get_ui_y_offset();
    iVar4 = iVar4 + 0x88;
    iVar2 = iVar2 + 0x37;
    pcVar5 = "Navigate stopped due to app disconnection.";
    iVar1 = iVar1 + 0x58;
  }
  gui_utf_draw(0,pcVar5,0,iVar1,iVar2,iVar3 + 0x23a,iVar4,1,0,0,0,0);
  return;
}



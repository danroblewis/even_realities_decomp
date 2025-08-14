/*
 * Function: FUN_0003f380
 * Entry:    0003f380
 * Prototype: undefined FUN_0003f380()
 */


void FUN_0003f380(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar1 = FUN_00023ee0();
  if (iVar1 == 6) {
    iVar1 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar3 = get_ui_x_offset();
    iVar4 = get_ui_y_offset();
    puVar5 = &LAB_000aa090_1;
    iVar1 = iVar1 + 0xa4;
  }
  else {
    iVar1 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar3 = get_ui_x_offset();
    iVar4 = get_ui_y_offset();
    puVar5 = &DAT_000aa070;
    iVar1 = iVar1 + 0x92;
  }
  gui_utf_draw(0,puVar5,0,iVar1,iVar2 + 0x37,iVar3 + 0x23f,iVar4 + 0x6d,2,0,0,0,0);
  return;
}



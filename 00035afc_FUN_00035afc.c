/*
 * Function: FUN_00035afc
 * Entry:    00035afc
 * Prototype: undefined FUN_00035afc()
 */


void FUN_00035afc(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1ac;
  undefined1 auStack_1a8 [28];
  undefined4 local_18c;
  undefined1 auStack_188 [68];
  uint local_144;
  undefined1 auStack_140 [288];
  
  local_18c = 0;
  fill_memory_buffer(auStack_188,0,0x44);
  local_1ac = 0;
  fill_memory_buffer(auStack_1a8,0,0x1c);
  local_1b4 = 0;
  uStack_1b0 = 0;
  local_144 = 0;
  fill_memory_buffer(auStack_140,0,0x11f);
  if (param_2 == (undefined4 *)0x0) {
    if (IS_DEBUG != 0) {
      handle_heartbeat();
      return;
    }
    DEBUG_PRINT("[%s-%d]curMsg is NULL !\n","draw_message",0xdb);
    return;
  }
  FUN_00034390();
  iVar1 = FUN_0003483c();
  if (IS_DEBUG == 0) {
    DEBUG_PRINT("show msgType is %d unReadCount %d\n",iVar1,param_1);
  }
  else {
    handle_heartbeat();
  }
  puVar8 = param_2 + 0x24;
  switch(iVar1) {
  case 0:
    uVar5 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    uVar4 = 0x38;
    goto LAB_00035e0a;
  case 1:
    uVar5 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_bmp_bitmap_draw(0x37,uVar5,iVar6 + 4,0,0,0);
    fill_memory_buffer(&local_18c,0,0x48);
    puVar7 = puVar8;
    break;
  case 2:
    fill_memory_buffer(&local_18c,0,0x48);
    FUN_00077914(&local_18c,0x48,&DAT_000a8c37,puVar8);
    uVar5 = get_ui_x_offset();
    iVar1 = get_ui_y_offset();
    iVar6 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    gui_utf_draw_middle(0,&local_18c,0,uVar5,iVar1 + 0x36,iVar6 + 0x240,iVar2 + 0x51,1,0,0,0,0);
    uVar5 = get_ui_x_offset();
    iVar1 = get_ui_y_offset();
    gui_bmp_bitmap_draw(0x36,uVar5,iVar1 + 0x3a,0,0,0);
    fill_memory_buffer(&local_144,0,0x123);
    FUN_00077914(&local_144,0x123,&DAT_000a8c37,param_2 + 0x14);
    if ((local_144 & 0xff) == 0) {
      return;
    }
    uVar5 = get_ui_x_offset();
    iVar1 = get_ui_y_offset();
    iVar6 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    gui_utf_draw_middle(0,&local_144,0,uVar5,iVar1 + 0x51,iVar6 + 0x240,iVar2 + 0x51,1,0,0,0,0);
    return;
  case 3:
    uVar5 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_bmp_bitmap_draw(0x3a,uVar5,iVar6 + 4,0,0,0);
    fill_memory_buffer(&local_18c,0,0x48);
LAB_00035cba:
    FUN_00077914(&local_18c,0x48,"%s | %s",param_2 + 0xc,param_2 + 0x1c);
    goto LAB_00035cc4;
  case 4:
    uVar5 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    uVar4 = 0x39;
LAB_00035e0a:
    gui_bmp_bitmap_draw(uVar4,uVar5,iVar6 + 4,0,0,0);
    fill_memory_buffer(&local_18c,0,0x48);
    puVar7 = param_2 + 0xc;
    break;
  default:
    uVar5 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_bmp_bitmap_draw(0x38,uVar5,iVar6 + 4,0,0,0);
    fill_memory_buffer(&local_18c,0,0x48);
    puVar7 = param_2 + 0xc;
    if (*(char *)(param_2 + 0x1c) != '\0') goto LAB_00035cba;
  }
  FUN_00077914(&local_18c,0x48,&DAT_000a8c37,puVar7);
LAB_00035cc4:
  iVar6 = get_ui_x_offset();
  uVar5 = get_ui_y_offset();
  iVar2 = get_ui_x_offset();
  iVar3 = get_ui_y_offset();
  gui_utf_draw_truncate(0,&local_18c,0,iVar6 + 0x24,uVar5,iVar2 + 0x186,iVar3 + 0x1b,1,0,0,0,0);
  if (IS_DEBUG == 0) {
    DEBUG_PRINT("recvTime is %u,curMsg->message %s\n",*param_2,puVar8);
  }
  else {
    handle_heartbeat();
  }
  FUN_000357dc(&local_1ac,*param_2);
  iVar6 = get_ui_x_offset();
  uVar5 = get_ui_y_offset();
  gui_bmp_bitmap_draw(0x3c,iVar6 + 0x210,uVar5,0,0,0);
  local_1b4 = 0;
  uStack_1b0 = 0;
  FUN_00086f00(&local_1b4,0,8,"%u",param_1);
  iVar6 = get_ui_x_offset();
  uVar5 = get_ui_y_offset();
  iVar2 = get_ui_x_offset();
  iVar3 = get_ui_y_offset();
  gui_utf_draw(0,&local_1b4,0,iVar6 + 0x22c,uVar5,iVar2 + 0x244,iVar3 + 0x1b,1,0,0,0,0);
  fill_memory_buffer(&local_144,0,0x123);
  if (iVar1 == 1) {
    FUN_00077914(&local_144,0x123,&DAT_000a8c37,param_2 + 0x14);
  }
  else {
    if (iVar1 != 4) {
      if (*(char *)(param_2 + 0x14) == '\0') {
        FUN_00077914(&local_144,0x123,&DAT_000a8c37,puVar8);
      }
      else {
        FUN_00077914(&local_144,0x123,"%s - %s",param_2 + 0x14,puVar8);
      }
      if ((local_144 & 0xff) == 0) {
        return;
      }
      uVar5 = get_ui_x_offset();
      iVar1 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar2 = get_ui_y_offset();
      goto LAB_00035de8;
    }
    FUN_00077914(&local_144,0x123,&DAT_000a8c34,param_2 + 0x14,puVar8);
  }
  if ((local_144 & 0xff) == 0) {
    return;
  }
  uVar5 = get_ui_x_offset();
  iVar1 = get_ui_y_offset();
  iVar6 = get_ui_x_offset();
  iVar2 = get_ui_y_offset();
LAB_00035de8:
  gui_utf_Wordwrap_draw(0,&local_144,0,uVar5,iVar1 + 0x36,iVar6 + 0x240,iVar2 + 0x87,3,0,0,0,0);
  return;
}



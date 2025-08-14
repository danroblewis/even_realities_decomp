/*
 * Function: gui_bmp_bitmap_draw
 * Entry:    00043484
 * Prototype: undefined gui_bmp_bitmap_draw(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


undefined4
gui_bmp_bitmap_draw(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 local_24;
  int local_20;
  int local_1c;
  
  if (((param_4 == 0) && (param_5 == 0)) && (param_6 == 0)) {
    local_20 = param_6;
    local_1c = param_6;
    if (param_1 - 0x16 < 0x67) {
      iVar1 = _012_resource_manger_get(4,param_1,&local_20,&local_1c,&local_24,0);
      if (iVar1 < 0) {
        if (1 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): can\'t find resource,please check resource name !\n",
                        "gui_bmp_bitmap_draw");
          }
          else {
            handle_heartbeat();
          }
        }
        return 0xffffffff;
      }
      uVar2 = FUN_000431a8();
      if ((uVar2 & 2) != 0) {
        _clean_fb_data(DAT_2000a034,0,param_2,param_3,local_20 + 2 + param_2,local_1c + param_3);
      }
      FUN_0007d53a(DAT_2000a034,local_24,local_20 / 2,local_1c,param_2,param_3);
      iVar1 = FUN_000431a8();
      if (-1 < iVar1 << 0x1e) {
        return 0;
      }
      iVar1 = get_work_mode();
      uVar5 = *(undefined4 *)(iVar1 + 0xeb4);
      iVar1 = get_work_mode();
      iVar3 = local_1c + param_3;
      iVar4 = local_20 + 2 + param_2;
    }
    else {
      uVar6 = FUN_000431a8();
      iVar1 = (int)(uVar6 >> 0x20);
      if ((uVar6 & 2) != 0) {
        _clean_fb_data(DAT_2000a034,0,iVar1,param_3,iVar1 + 0x18,param_3 + 0x18);
      }
      local_24 = FUN_00047a4c(param_1 & 0xff,0x120);
      FUN_0007d53a(DAT_2000a034,local_24,0xc,0x18,param_2,param_3);
      iVar1 = FUN_000431a8();
      if (-1 < iVar1 << 0x1e) {
        return 0;
      }
      iVar1 = get_work_mode();
      uVar5 = *(undefined4 *)(iVar1 + 0xeb4);
      iVar1 = get_work_mode();
      iVar3 = param_3 + 0x18;
      iVar4 = param_2 + 0x18;
    }
    _reflash_fb_data_to_lcd(uVar5,*(undefined4 *)(iVar1 + 0xeb8),param_2,param_3,iVar4,iVar3);
  }
  return 0;
}



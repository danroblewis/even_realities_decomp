/*
 * Function: gui_4bit_bitmap_override
 * Entry:    00043d78
 * Prototype: undefined gui_4bit_bitmap_override()
 */


undefined4 gui_4bit_bitmap_override(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if ((param_2 < 0x281) && (param_3 < 0x1e1)) {
    iVar1 = _012_resource_manger_get(4,param_1,&local_1c,&local_18,&local_14,0);
    if (-1 < iVar1) {
      FUN_0007d586(DAT_2000a034,local_14,local_1c,local_18,param_2,param_3);
      iVar1 = FUN_000431a8();
      if (iVar1 << 0x1e < 0) {
        iVar1 = get_work_mode();
        uVar2 = *(undefined4 *)(iVar1 + 0xeb4);
        iVar1 = get_work_mode();
        _reflash_fb_data_to_lcd
                  (uVar2,*(undefined4 *)(iVar1 + 0xeb8),param_2,param_3,local_1c + param_2,
                   local_18 + param_3);
      }
      return 0;
    }
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): can\'t find resource,please check resource name !\n",
                    "gui_4bit_bitmap_override");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): gui_4bit_bitmap_override parampter overstep!!! stop draw bitmap !!! x= %d,y= %d\n"
                  ,"gui_4bit_bitmap_override",param_2,param_3);
    }
    else {
      handle_heartbeat("%s(): gui_4bit_bitmap_override parampter overstep!!! stop draw bitmap !!! x= %d,y= %d\n"
                       ,"gui_4bit_bitmap_override",param_2,param_3);
    }
  }
  return 0xffffffff;
}



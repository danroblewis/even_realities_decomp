/*
 * Function: gui_string_draw
 * Entry:    000455cc
 * Prototype: undefined __stdcall gui_string_draw(undefined4 param_1, undefined4 str_buffer, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 */


undefined4
gui_string_draw(int param_1,byte *str_buffer,int param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *format_string;
  undefined4 uVar4;
  byte *pbVar5;
  int local_34;
  undefined4 local_30;
  int local_2c [2];
  
  local_34 = 0;
  local_30 = 0;
  local_2c[0] = 0;
  iVar1 = calculate_string_length(str_buffer);
  iVar2 = get_display_config_flags();
  if (iVar2 << 0x1e < 0) {
    _clean_fb_data(MAIN_FRAMEBUFFER,0,param_3,param_4,param_5,param_6);
  }
  iVar2 = param_3;
  pbVar5 = str_buffer;
  do {
    if (str_buffer + iVar1 == pbVar5) {
      iVar1 = get_display_config_flags();
      if (iVar1 << 0x1e < 0) {
        iVar1 = get_work_mode();
        uVar4 = *(undefined4 *)(iVar1 + 0xeb4);
        iVar1 = get_work_mode();
        _reflash_fb_data_to_lcd
                  (uVar4,*(undefined4 *)(iVar1 + 0xeb8),param_3,param_4,param_5,param_6);
      }
      if (param_7 != (int *)0x0) {
        *param_7 = iVar2 - param_3;
      }
      return 0;
    }
    if (*str_buffer < 0x20) {
      if (0 < LOG_LEVEL) {
        format_string = "%s(): non-ascii characters\n";
LAB_00045688:
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(format_string,"gui_string_draw");
        }
        else {
          handle_heartbeat();
        }
      }
    }
    else {
      iVar3 = _012_resource_manger_get(param_1,*pbVar5,&local_34,&local_30,local_2c,0);
      if ((local_2c[0] == 0) || (iVar3 != 0)) {
        if (1 < LOG_LEVEL) {
          format_string = "%s(): find ascii postion failed\n";
          goto LAB_00045688;
        }
      }
      else {
        draw_bitmap_to_framebuffer(MAIN_FRAMEBUFFER,local_2c[0],local_34 / 2,local_30,iVar2,param_4)
        ;
        if ((*pbVar5 - 0x20 < 0x5f) && (param_1 == 3)) {
          iVar2 = local_34 + iVar2 + 3;
        }
        else {
          iVar2 = iVar2 + local_34;
          iVar3 = count_matching_data_entries((uint)*pbVar5,pbVar5[1]);
          iVar2 = iVar2 + iVar3;
        }
      }
    }
    pbVar5 = pbVar5 + 1;
  } while( true );
}



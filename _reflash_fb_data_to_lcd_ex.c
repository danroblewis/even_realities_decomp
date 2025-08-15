/*
 * Function: _reflash_fb_data_to_lcd_ex
 * Entry:    000473c8
 * Prototype: undefined _reflash_fb_data_to_lcd_ex(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 */


undefined4
_reflash_fb_data_to_lcd_ex
          (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 local_38 [4];
  uint local_34;
  undefined4 local_30;
  undefined1 local_2c;
  
  local_38[0] = 0;
  iVar2 = jbd_get_manager();
  if (*(int *)(iVar2 + 0x35c) == 0) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): c->init_done = 0,init failed, can\'t write data!\n",
                    "_reflash_fb_data_to_lcd_ex");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0x140;
    if (199 < param_6) {
      param_6 = 200;
    }
    if (0x27f < param_5) {
      param_5 = 0x280;
    }
    iVar9 = (5 - param_3 / 2) + param_5 / 2;
    uVar5 = param_3 + param_1 & 0x3ff;
    for (; param_4 <= param_6; param_4 = param_4 + 1) {
      iVar10 = *(int *)(iVar2 + 0x344);
      iVar8 = param_4 * 0x140 + param_7 * 0x140 + param_3 / 2 + -5;
      iVar7 = iVar10 + iVar8;
      local_2c = *(undefined1 *)(iVar7 + 4);
      local_30 = *(undefined4 *)(iVar10 + iVar8);
      uVar6 = (param_4 + param_2) * 0x400 & 0x7fc00;
      local_34 = uVar6 | uVar5;
      *(undefined1 *)(iVar10 + iVar8) = 2;
      *(char *)(iVar7 + 1) = (char)(uVar6 >> 0x10);
      *(char *)(iVar7 + 2) = (char)(local_34 >> 8);
      *(char *)(iVar7 + 3) = (char)uVar5;
      *(undefined1 *)(iVar7 + 4) = 0xff;
      uVar1 = *(undefined1 *)(iVar7 + iVar9);
      *(undefined1 *)(iVar7 + iVar9) = 0;
      resource_mutex_acquire(&JBD_DISPLAY_CONFIG,uVar3,0xffffffff,0xffffffff);
      iVar4 = (**(code **)(*(int *)(iVar2 + 0x374) + 8))
                        (*(int *)(iVar2 + 0x374),iVar7,iVar9,local_38,1);
      mutex_unlock(&JBD_DISPLAY_CONFIG);
      uVar3 = extraout_r1;
      if ((iVar4 != 0) && (0 < LOG_LEVEL)) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): spi transfer error....\n","_reflash_fb_data_to_lcd_ex");
          uVar3 = extraout_r1_01;
        }
        else {
          handle_heartbeat();
          uVar3 = extraout_r1_00;
        }
      }
      *(undefined1 *)(iVar7 + iVar9) = uVar1;
      *(undefined4 *)(iVar10 + iVar8) = local_30;
      *(undefined1 *)(iVar7 + 4) = local_2c;
    }
    manage_jbd_display_power_state(0x97);
    multiply_by_1000_and_jump(1);
    uVar3 = 0;
  }
  return uVar3;
}



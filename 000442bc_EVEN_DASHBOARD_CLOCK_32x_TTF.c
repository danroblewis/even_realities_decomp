/*
 * Function: EVEN_DASHBOARD_CLOCK_32x_TTF
 * Entry:    000442bc
 * Prototype: undefined EVEN_DASHBOARD_CLOCK_32x_TTF(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined1 param_7)
 */


undefined4
EVEN_DASHBOARD_CLOCK_32x_TTF
          (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,char param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 uStack_40;
  ushort local_3e;
  uint local_3c;
  byte local_38 [20];
  
  local_44 = 0;
  uStack_40 = 0;
  local_3e = 0;
  local_3c = 0;
  unix_timestamp_to_datetime(param_1,&local_44);
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  uVar4 = (uint)local_3e;
  if (param_7 == '\0') {
    if (uVar4 < 0xd) {
      if (uVar4 == 0) {
        local_3e = 0xc;
      }
    }
    else {
      local_3e = local_3e - 0xc;
    }
    uVar4 = local_3e / 10;
    sVar5 = local_3e + (short)uVar4 * -10;
  }
  else {
    uVar4 = uVar4 / 10;
    sVar5 = local_3e + (short)uVar4 * -10;
  }
  FUN_00086f00(local_38,0,0x10,"%d%d%s%d%d",uVar4,sVar5,":",(local_3c & 0xffff) / 10,
               (local_3c & 0xffff) % 10);
  iVar1 = FUN_0000ef12(local_38);
  switch(param_6) {
  case 0:
    uVar6 = 0;
    break;
  case 1:
    iVar2 = FUN_000431a8();
    if (iVar2 << 0x1e < 0) {
      _clean_fb_data(DAT_2000a034,0,param_2,param_3,param_4,param_5);
    }
    pbVar7 = local_38;
    iVar2 = param_2;
    for (iVar8 = 0; iVar1 != iVar8; iVar8 = iVar8 + 1) {
      local_50 = 0;
      iVar3 = _012_resource_manger_get(1,*pbVar7,&local_4c,&local_48,&local_50,0);
      if ((iVar3 == 0) && (local_50 != 0)) {
        FUN_0007d53a(DAT_2000a034,local_50,local_4c / 2,local_48,iVar2,param_3);
        iVar2 = iVar2 + local_4c + 6;
      }
      else if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): The content cannot be found in the current font library,unicode content = %2d,font libray is %s\n"
                      ,"gui_clock_draw",(uint)*pbVar7,"EVEN_DASHBOARD_CLOCK_32x_TTF");
        }
        else {
          handle_heartbeat("%s(): The content cannot be found in the current font library,unicode content = %2d,font libray is %s\n"
                           ,"gui_clock_draw",(uint)*pbVar7,"EVEN_DASHBOARD_CLOCK_32x_TTF");
        }
      }
      pbVar7 = pbVar7 + 1;
    }
    goto LAB_000443e4;
  case 2:
    iVar2 = FUN_000431a8();
    if (iVar2 << 0x1e < 0) {
      _clean_fb_data(DAT_2000a034,0,param_2,param_3,param_4,param_5);
    }
    iVar8 = 0;
    pbVar7 = local_38;
    iVar2 = param_2;
    while (iVar1 != iVar8) {
      local_50 = 0;
      iVar3 = _012_resource_manger_get(2,*pbVar7,&local_4c,&local_48,&local_50,0);
      iVar8 = iVar8 + 1;
      if ((iVar3 == 0) && (local_50 != 0)) {
        FUN_0007d53a(DAT_2000a034,local_50,local_4c / 2,local_48,iVar2,param_3);
        if (pbVar7[1] == 0x3a) {
          iVar3 = local_4c + 7;
        }
        else {
          iVar3 = local_4c + 2;
        }
        iVar2 = iVar2 + iVar3;
        if (*pbVar7 == 0x3a) {
          iVar2 = iVar2 + 7;
        }
      }
      else if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): The content cannot be found in the current font library,unicode content = %2d,font libray is %s\n"
                      ,"gui_clock_draw",(uint)*pbVar7,"EVEN_DASHBOARD_CLOCK_32x_TTF");
        }
        else {
          handle_heartbeat("%s(): The content cannot be found in the current font library,unicode content = %2d,font libray is %s\n"
                           ,"gui_clock_draw",(uint)*pbVar7,"EVEN_DASHBOARD_CLOCK_32x_TTF");
        }
      }
      pbVar7 = pbVar7 + 1;
    }
LAB_000443e4:
    iVar1 = FUN_000431a8();
    if (-1 < iVar1 << 0x1e) {
      return 0;
    }
    iVar1 = get_work_mode();
    uVar6 = *(undefined4 *)(iVar1 + 0xeb4);
    iVar1 = get_work_mode();
    _reflash_fb_data_to_lcd(uVar6,*(undefined4 *)(iVar1 + 0xeb8),param_2,param_3,param_4,param_5);
    return 0;
  case 3:
    uVar6 = 3;
    break;
  default:
    goto switchD_0004432c_caseD_4;
  }
  gui_utf_draw(0,local_38,uVar6,param_2,param_3,param_4,param_5,1,0,0,0,0);
switchD_0004432c_caseD_4:
  return 0;
}



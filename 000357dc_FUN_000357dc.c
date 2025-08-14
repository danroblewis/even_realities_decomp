/*
 * Function: FUN_000357dc
 * Entry:    000357dc
 * Prototype: undefined FUN_000357dc()
 */


void FUN_000357dc(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  
  iVar2 = get_work_mode();
  iVar3 = FUN_0007d224();
  uVar10 = iVar3 - param_2;
  fill_memory_buffer(param_1,0,0x20);
  uVar9 = uVar10 & ~((int)uVar10 >> 0x1f);
  if (IS_DEBUG == 0) {
    DEBUG_PRINT("currentTime is %d,recvTime is %d,unReadTime is %d \n",iVar3,param_2,uVar9);
  }
  else {
    handle_heartbeat("currentTime is %d,recvTime is %d,unReadTime is %d \n",iVar3,param_2,uVar9);
  }
  iVar3 = FUN_00023ee0();
  if (iVar3 == 6) {
    if (uVar10 - 0x3c < 0x7fffffc4) {
      if (uVar9 - 0x3c < 0xdd4) {
        uVar9 = uVar9 / 0x3c;
        pcVar7 = "Vor %d Min.";
      }
      else {
        if (0x1c1f < uVar9 - 0xe10) {
          if (&DAT_0001274f < (undefined *)(uVar9 - 0x2a30)) {
            if (uVar9 - 0x15180 < 0x15180) {
              pcVar7 = "Gestern";
              goto LAB_0003582e;
            }
            if (uVar9 - 0x2a300 < 0x69780) goto LAB_00035948;
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
            unix_timestamp_to_datetime(param_2,&local_2c);
            uVar8 = (ushort)local_28;
            uVar1 = local_2c._2_2_;
LAB_0003596a:
            uVar9 = (uint)uVar1;
            pcVar7 = "%02d/%02d";
          }
          else {
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
            unix_timestamp_to_datetime(param_2,&local_2c);
            uVar9 = local_24 & 0xffff;
LAB_0003591e:
            pcVar7 = "%02d:%02d";
            uVar8 = local_28._2_2_;
          }
LAB_00035920:
          FUN_0007797c(param_1,pcVar7,uVar8,uVar9);
          goto LAB_0003585e;
        }
        pcVar7 = "Vor %d Std.";
        uVar9 = uVar9 / 0xe10;
      }
      goto LAB_00035858;
    }
    pcVar7 = "Jetzt";
  }
  else {
    if (uVar10 - 0x3c < 0x7fffffc4) {
      if (uVar9 - 0x3c < 0xdd4) {
        pcVar7 = "%dm ago";
        uVar9 = uVar9 / 0x3c;
      }
      else {
        if (0x1c1f < uVar9 - 0xe10) {
          if ((undefined *)(uVar9 - 0x2a30) < &UNK_00012750) {
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
            unix_timestamp_to_datetime(param_2,&local_2c);
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("date: %u: %04d/%02d/%02d-%02d:%02d:%02d",param_2,local_2c & 0xffff,
                          local_2c >> 0x10,local_28 & 0xffff,local_28 >> 0x10,local_24 & 0xffff,
                          local_24 >> 0x10);
            }
            else {
              handle_heartbeat("date: %u: %04d/%02d/%02d-%02d:%02d:%02d",param_2,local_2c & 0xffff,
                               local_2c >> 0x10);
            }
            if (IS_DEBUG == 0) {
              iVar3 = get_work_mode();
              DEBUG_PRINT("time_disp_mode is %d \n",(uint)*(byte *)(*(int *)(iVar3 + 0xfec) + 0x5e))
              ;
            }
            else {
              iVar3 = get_work_mode();
              handle_heartbeat("time_disp_mode is %d \n",
                               *(undefined1 *)(*(int *)(iVar3 + 0xfec) + 0x5e));
            }
            iVar3 = get_work_mode();
            uVar9 = local_24 & 0xffff;
            if (*(char *)(*(int *)(iVar3 + 0xfec) + 0x5e) != '\0') {
              if (local_28._2_2_ < 0xd) {
                uVar8 = local_28._2_2_;
                if (local_28._2_2_ == 0) {
                  uVar8 = 0xc;
                  local_28 = CONCAT22(0xc,(ushort)local_28);
                }
                pcVar7 = "%02d:%02dam";
              }
              else {
                uVar8 = local_28._2_2_ - 0xc;
                pcVar7 = "%02d:%02dpm";
                local_28 = CONCAT22(local_28._2_2_ - 0xc,(ushort)local_28);
              }
              goto LAB_00035920;
            }
            goto LAB_0003591e;
          }
          if (uVar9 - 0x15180 < 0x15180) {
            pcVar7 = "Yesterday";
          }
          else {
            if (0x6977f < uVar9 - 0x2a300) {
              local_2c = 0;
              local_28 = 0;
              local_24 = 0;
              unix_timestamp_to_datetime(param_2,&local_2c);
              uVar8 = local_2c._2_2_;
              uVar1 = (ushort)local_28;
              goto LAB_0003596a;
            }
LAB_00035948:
            pcVar7 = (char *)FUN_0004a2a4(param_2);
          }
          goto LAB_0003582e;
        }
        pcVar7 = "%dh ago";
        uVar9 = uVar9 / 0xe10;
      }
LAB_00035858:
      FUN_0007797c(param_1,pcVar7,uVar9);
      goto LAB_0003585e;
    }
    pcVar7 = "Now";
  }
LAB_0003582e:
  strcpy_safe(param_1,pcVar7);
LAB_0003585e:
  iVar3 = get_ui_x_offset();
  uVar4 = get_ui_y_offset();
  iVar5 = get_ui_x_offset();
  iVar6 = get_ui_y_offset();
  _clean_fb_data(iVar2 + 0xb90,0,iVar3 + 0x196,uVar4,iVar5 + 0x200,iVar6 + 0x1b);
  iVar2 = get_ui_x_offset();
  uVar4 = get_ui_y_offset();
  iVar3 = get_ui_x_offset();
  iVar5 = get_ui_y_offset();
  gui_utf_draw_align_right(0,param_1,0,iVar2 + 0x196,uVar4,iVar3 + 0x200,iVar5 + 0x1b,1,0,0,0,0);
  if (IS_DEBUG != 0) {
    uVar4 = get_ui_x_offset();
    handle_heartbeat("gui_getScreenoffset_x=%d,timeDiffBuf is %s \n",uVar4,param_1);
    return;
  }
  uVar4 = get_ui_x_offset();
  DEBUG_PRINT("gui_getScreenoffset_x=%d,timeDiffBuf is %s \n",uVar4,param_1);
  return;
}



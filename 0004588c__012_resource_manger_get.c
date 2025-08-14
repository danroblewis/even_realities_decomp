/*
 * Function: _012_resource_manger_get
 * Entry:    0004588c
 * Prototype: undefined __stdcall _012_resource_manger_get(undefined4 resource_type, undefined4 resource_id, undefined4 width, undefined4 height, undefined4 resource_data, undefined4 color_depth)
 */


undefined4
_012_resource_manger_get
          (uint resource_type,uint resource_id,uint *width,uint *height,int *resource_data,
          undefined1 *color_depth)

{
  uint uVar1;
  ulonglong uVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *format_str;
  undefined *puVar9;
  code *pcVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar11 = CONCAT44(resource_id,resource_type);
  local_28 = resource_type;
  local_24 = resource_id;
  switch(resource_type) {
  case 0:
    if ((int)resource_id < 0x2714) {
      uVar11 = FUN_00045840(resource_id & 0xffff,&local_28,&local_24);
      *resource_data = (int)uVar11;
      if ((int)uVar11 != 0) {
        *width = local_28;
        *height = local_24;
        return 0;
      }
    }
    if (0xff41 < resource_id - 0xa4) goto LAB_00045caa;
    iVar8 = get_work_mode();
    pcVar10 = *(code **)(iVar8 + 0x1030);
    uVar4 = get_work_mode();
    iVar8 = (resource_id - 0xa4) * 4;
    uVar5 = (*pcVar10)(uVar4,iVar8 + 0x140000,&local_24);
    if (uVar5 == 0) {
      uVar1 = local_24 >> 0x10;
      if (uVar1 == 0xffff) {
        if (resource_id - 0x1100 < 0xfa) {
          local_28 = uVar5;
          local_24 = uVar5;
          iVar6 = get_work_mode(0,0);
          pcVar10 = *(code **)(iVar6 + 0x1030);
          uVar4 = get_work_mode();
          iVar8 = (*pcVar10)(uVar4,iVar8 + 0xa1be90,&local_24);
          if (iVar8 != 0) goto LAB_00045902;
          uVar5 = (local_24._2_2_ & 0xff) << 8 | (uint)(local_24._2_2_ >> 8);
          local_28 = CONCAT22((short)uVar5,(ushort)local_24 << 8 | (ushort)local_24 >> 8);
          if (local_24._2_2_ != 0xffff) {
            fill_memory_buffer(&DAT_2001ce57,0,0x138);
            iVar8 = get_work_mode();
            pcVar10 = *(code **)(iVar8 + 0x1030);
            uVar4 = get_work_mode();
            resource_id = (*pcVar10)(uVar4,uVar5 * 0x138 + 0xa40000,&DAT_2001ce57,0x138);
LAB_000459fc:
            if (resource_id == 0) {
              uVar5 = 0x18;
              goto LAB_0004597a;
            }
            goto LAB_00045958;
          }
LAB_00045cb8:
          if (0x5d < resource_id - 0xff01) {
            if (0x2e < resource_id - 0x2010) goto LAB_00045b4e;
            uVar12 = get_work_mode(0,0);
            uVar2 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),(int)uVar12 + 0x1000);
            if (*(int *)((int)uVar12 + 0x1030) != 0) {
              iVar8 = get_work_mode();
              pcVar10 = *(code **)(iVar8 + 0x1030);
              uVar4 = get_work_mode();
              iVar8 = (*pcVar10)(uVar4,(resource_id - 0x2010) * 4 + 0x500000,&local_24);
              goto LAB_00045dfa;
            }
            goto LAB_00045e48;
          }
          uVar12 = get_work_mode(0,0);
          uVar2 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),(int)uVar12 + 0x1000);
          if (*(int *)((int)uVar12 + 0x1030) != 0) {
            iVar8 = get_work_mode();
            pcVar10 = *(code **)(iVar8 + 0x1030);
            uVar4 = get_work_mode();
            iVar8 = (*pcVar10)(uVar4,resource_id * 4 + 0x9eba14,&local_24);
            if (iVar8 != 0) goto LAB_00045902;
            uVar3 = local_24._2_2_;
            uVar5 = (uint)local_24._2_2_;
            if (uVar5 != 0xffff) {
              fill_memory_buffer(&DAT_2001ce57,0,0x138);
              iVar8 = get_work_mode();
              pcVar10 = *(code **)(iVar8 + 0x1030);
              uVar4 = get_work_mode();
              resource_id = (*pcVar10)(uVar4,((uVar5 & 0xff) << 8 | (uint)(uVar3 >> 8)) * 0x138 +
                                             0xa40000,&DAT_2001ce57,0x138);
              goto LAB_000459fc;
            }
            uVar11 = 0;
            uVar2 = 0;
            if (0x19c < resource_id - 0x3231) goto LAB_00045c68;
            goto LAB_00045d4a;
          }
LAB_00045e4e:
          iVar8 = get_work_mode((int)uVar2,(int)(uVar2 >> 0x20));
          if (*(int *)(iVar8 + 0x1030) != 0) {
            iVar8 = get_work_mode();
            pcVar10 = *(code **)(iVar8 + 0x1030);
            uVar4 = get_work_mode();
            iVar8 = (*pcVar10)(uVar4,resource_id * 4 + 0x4d58f8,&local_24);
            if (iVar8 != 0) goto LAB_00045902;
            uVar5 = (local_24._2_2_ & 0xff) << 8 | (uint)(local_24._2_2_ >> 8);
            if (local_24._2_2_ != 0xffff) {
              fill_memory_buffer(&DAT_2001ce57,0,0x138);
              iVar8 = get_work_mode();
              pcVar10 = *(code **)(iVar8 + 0x1030);
              uVar4 = get_work_mode();
LAB_00045db4:
              resource_id = (*pcVar10)(uVar4,uVar5 * 0xd0 + 0x520000,&DAT_2001ce57);
              goto LAB_00045e3c;
            }
          }
        }
        else {
          if (resource_id - 0x302e < 2) {
            uVar12 = get_work_mode(0,0);
            iVar6 = (int)((ulonglong)uVar12 >> 0x20);
            iVar7 = (int)uVar12 + 0x1000;
            if (*(int *)((int)uVar12 + 0x1030) != 0) {
              iVar6 = get_work_mode();
              pcVar10 = *(code **)(iVar6 + 0x1030);
              uVar4 = get_work_mode();
              iVar8 = (*pcVar10)(uVar4,iVar8 + 0xa145c0,&local_24);
              if (iVar8 != 0) goto LAB_00045902;
              uVar5 = local_24 >> 0x10;
              if (uVar5 != 0xffff) goto LAB_00045a8a;
LAB_00045b4e:
              iVar7 = 0;
              uVar11 = 0;
              iVar6 = iVar7;
              if (0xfd < resource_id - 0x3001) goto LAB_00045caa;
            }
            uVar12 = get_work_mode(iVar7,iVar6);
            uVar2 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),(int)uVar12 + 0x1000);
            if (*(int *)((int)uVar12 + 0x1030) == 0) goto LAB_00045e48;
            iVar8 = get_work_mode();
            pcVar10 = *(code **)(iVar8 + 0x1030);
            uVar4 = get_work_mode();
            iVar8 = (*pcVar10)(uVar4,resource_id * 4 + 0x4f40b8,&local_24);
LAB_00045dfa:
            if (iVar8 != 0) goto LAB_00045902;
            uVar3 = local_24._2_2_;
            uVar5 = (uint)local_24._2_2_;
            uVar2 = 0;
            if (uVar5 == 0xffff) goto LAB_00045e48;
            fill_memory_buffer(&DAT_2001ce57,0,0x138);
            iVar8 = get_work_mode();
            pcVar10 = *(code **)(iVar8 + 0x1030);
            uVar4 = get_work_mode();
            resource_id = (*pcVar10)(uVar4,((uVar5 & 0xff) << 8 | (uint)(uVar3 >> 8)) * 0xd0 +
                                           0x520000,&DAT_2001ce57);
LAB_00045e3c:
            if (resource_id == 0) {
              uVar5 = 0x10;
LAB_0004597a:
              *width = uVar5;
              *height = 0x1a;
              *resource_data = (int)&DAT_2001ce57;
              return 0;
            }
            goto LAB_00045958;
          }
          if (resource_id - 0x3131 < 0x5e) {
            uVar12 = get_work_mode(0,0);
            uVar11 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),(int)uVar12 + 0x1000);
            if (*(int *)((int)uVar12 + 0x1030) != 0) {
              iVar6 = get_work_mode();
              pcVar10 = *(code **)(iVar6 + 0x1030);
              uVar4 = get_work_mode();
              iVar8 = (*pcVar10)(uVar4,iVar8 + 0xa141bc,&local_24);
              if (iVar8 == 0) {
                uVar3 = local_24._2_2_;
                uVar5 = (uint)local_24._2_2_;
                if (uVar5 == 0xffff) goto LAB_00045b4e;
                fill_memory_buffer(&DAT_2001ce57,0,0x138);
                iVar8 = get_work_mode();
                pcVar10 = *(code **)(iVar8 + 0x1030);
                uVar4 = get_work_mode();
                resource_id = (*pcVar10)(uVar4,((uVar5 & 0xff) << 8 | (uint)(uVar3 >> 8)) * 0x138 +
                                               0xa40000,&DAT_2001ce57,0x138);
                if (resource_id == 0) {
                  *width = 0x18;
                  *height = 0x1a;
                  *resource_data = (int)&DAT_2001ce57;
                  return 0;
                }
                goto LAB_00045958;
              }
              goto LAB_00045902;
            }
LAB_00045caa:
            if (resource_id - 0x3231 < 0x19d) {
LAB_00045d4a:
              uVar12 = get_work_mode((int)uVar11,(int)(uVar11 >> 0x20));
              uVar2 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),(int)uVar12 + 0x1000);
              if (*(int *)((int)uVar12 + 0x1030) == 0) goto LAB_00045e48;
              iVar8 = get_work_mode();
              pcVar10 = *(code **)(iVar8 + 0x1030);
              uVar4 = get_work_mode();
              iVar8 = 0x4f3bf0;
            }
            else {
LAB_00045c26:
              uVar2 = uVar11;
              if (0x5177 < resource_id - 0x4e00) goto LAB_00045c68;
              uVar12 = get_work_mode((int)uVar11,(int)(uVar11 >> 0x20));
              uVar2 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),(int)uVar12 + 0x1000);
              if (*(int *)((int)uVar12 + 0x1030) == 0) goto LAB_00045e48;
              iVar8 = get_work_mode();
              pcVar10 = *(code **)(iVar8 + 0x1030);
              uVar4 = get_work_mode();
              iVar8 = 0x4ed328;
            }
LAB_00045d74:
            iVar8 = (*pcVar10)(uVar4,iVar8 + resource_id * 4,&local_24);
            if (iVar8 != 0) goto LAB_00045902;
            uVar3 = local_24._2_2_;
            uVar5 = (uint)local_24._2_2_;
            if (uVar5 != 0xffff) {
              fill_memory_buffer(&DAT_2001ce57,0,0x138);
              iVar8 = get_work_mode();
              pcVar10 = *(code **)(iVar8 + 0x1030);
              uVar4 = get_work_mode();
              uVar5 = (uVar5 & 0xff) << 8 | (uint)(uVar3 >> 8);
              goto LAB_00045db4;
            }
          }
          else {
            if (resource_id - 0x3200 < 0x80) {
              uVar12 = get_work_mode(0,0);
              uVar11 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),(int)uVar12 + 0x1000);
              if (*(int *)((int)uVar12 + 0x1030) != 0) {
                iVar6 = get_work_mode();
                pcVar10 = *(code **)(iVar6 + 0x1030);
                uVar4 = get_work_mode();
                uVar11 = (*pcVar10)(uVar4,iVar8 + 0xa13ff8,&local_24);
                if ((int)uVar11 != 0) goto LAB_00045902;
                uVar5 = local_24 >> 0x10;
                uVar11 = uVar11 & 0xffffffff00000000;
                if (uVar5 != 0xffff) {
LAB_00045a8a:
                  fill_memory_buffer(&DAT_2001ce57,0,0x138);
                  iVar8 = get_work_mode();
                  pcVar10 = *(code **)(iVar8 + 0x1030);
                  uVar4 = get_work_mode();
                  resource_id = (*pcVar10)(uVar4,((uVar5 & 0xff) << 8 | uVar5 >> 8) * 0x138 +
                                                 0xa40000,&DAT_2001ce57,0x138);
                  goto LAB_000459fc;
                }
              }
              goto LAB_00045caa;
            }
            if (0x2bab < resource_id - 0xac00) goto LAB_00045cb8;
            uVar12 = get_work_mode(0,0);
            uVar2 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),(int)uVar12 + 0x1000);
            if (*(int *)((int)uVar12 + 0x1030) != 0) {
              iVar6 = get_work_mode();
              pcVar10 = *(code **)(iVar6 + 0x1030);
              uVar4 = get_work_mode();
              uVar11 = (*pcVar10)(uVar4,iVar8 + 0x9f59f8,&local_24);
              if ((int)uVar11 != 0) goto LAB_00045902;
              uVar5 = local_24 >> 0x10;
              if (uVar5 != 0xffff) goto LAB_00045a8a;
              uVar11 = uVar11 & 0xffffffff00000000;
              goto LAB_00045c26;
            }
LAB_00045c68:
            if (resource_id - 0xe001 < 0xfd) {
              iVar8 = get_work_mode((int)uVar2,(int)(uVar2 >> 0x20));
              if (*(int *)(iVar8 + 0x1030) != 0) {
                iVar8 = get_work_mode();
                pcVar10 = *(code **)(iVar8 + 0x1030);
                uVar4 = get_work_mode();
                iVar8 = 0x4dd104;
                goto LAB_00045d74;
              }
            }
            else {
LAB_00045e48:
              if (resource_id - 0xff01 < 0x9f) goto LAB_00045e4e;
            }
          }
        }
        if (LOG_LEVEL < 3) {
          return 0xffffffff;
        }
        format_str = "%s(): *************** can\'t find resEncode = 0x%02x*****************\n";
      }
      else {
        fill_memory_buffer(&DAT_2001ce57,0,0x138);
        iVar8 = get_work_mode();
        pcVar10 = *(code **)(iVar8 + 0x1030);
        uVar4 = get_work_mode();
        resource_id = (*pcVar10)(uVar4,uVar1 * 0xea + 0x200000,&DAT_2001ce57);
        if (resource_id == 0) {
          uVar5 = 0x12;
          goto LAB_0004597a;
        }
LAB_00045958:
        if (LOG_LEVEL < 1) {
          return 0xffffffff;
        }
        format_str = "%s(): read flash fail: %d\n\n";
      }
      if (IS_DEBUG == 0) {
        DEBUG_PRINT(format_str,"resource_manger_get",resource_id);
        return 0xffffffff;
      }
      handle_heartbeat();
      return 0xffffffff;
    }
LAB_00045902:
    if (LOG_LEVEL < 1) {
      return 0xffffffff;
    }
    format_str = "%s(): read flash fail\n\n";
    goto LAB_00045912;
  case 1:
    iVar8 = FUN_000457b0(resource_id & 0xffff,&local_28,&local_24);
    *resource_data = iVar8;
    if (iVar8 != 0) {
      *width = local_28;
      *height = local_24;
      return 0;
    }
    break;
  case 2:
    iVar8 = FUN_00045764(resource_id & 0xffff,&local_28,&local_24);
    *resource_data = iVar8;
    if (iVar8 != 0) {
      *width = local_28;
      *height = local_24;
      return 0;
    }
    break;
  case 3:
    iVar8 = FUN_000457f4(resource_id & 0xffff,&local_28,&local_24);
    *resource_data = iVar8;
    *width = local_28;
    *height = local_24;
    return 0;
  case 4:
    if (resource_id - 0x16 < 0x67) {
      switch(resource_id) {
      case 0x16:
        *resource_data = (int)&DAT_000c81a3;
        *width = 0x18;
        *height = 0x1a;
        return 0;
      case 0x17:
        *resource_data = (int)&DAT_000c8162;
        *width = 10;
        *height = 0xd;
        return 0;
      case 0x18:
        *resource_data = (int)&DAT_000c8f47;
        *width = 0x14;
        *height = 0x14;
        return 0;
      case 0x19:
        *resource_data = (int)&DAT_000c8e7f;
        *width = 0x14;
        *height = 0x14;
        return 0;
      case 0x1a:
        *resource_data = (int)&DAT_000c8db7;
        *width = 0x14;
        *height = 0x14;
        return 0;
      case 0x1b:
        *resource_data = (int)&DAT_000c805e;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x1c:
        *resource_data = (int)&DAT_000bc613;
        *width = 0x12;
        *height = 0x1a;
        return 0;
      case 0x1d:
        *resource_data = (int)&DAT_000bc529;
        *width = 0x12;
        *height = 0x1a;
        return 0;
      case 0x1e:
        *resource_data = (int)&DAT_000bc43f;
        *width = 0x12;
        *height = 0x1a;
        return 0;
      case 0x1f:
        *resource_data = (int)&DAT_000bc355;
        *width = 0x12;
        *height = 0x1a;
        return 0;
      case 0x20:
        *resource_data = (int)&DAT_000bc26b;
        *width = 0x12;
        *height = 0x1a;
        return 0;
      case 0x21:
        *resource_data = (int)&DAT_000bc181;
        *width = 0x12;
        *height = 0x1a;
        return 0;
      case 0x22:
        *resource_data = (int)"";
        *width = 0x12;
        *height = 0x1a;
        return 0;
      case 0x23:
        *resource_data = (int)&DAT_000ca04f;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x24:
        *resource_data = (int)&DAT_000c9f4b;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x25:
        *resource_data = (int)&DAT_000c9e47;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x26:
        *resource_data = (int)&DAT_000c9d43;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x27:
        *resource_data = (int)&DAT_000c9c3f;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x28:
        *resource_data = (int)&DAT_000c9b3b;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x29:
        *resource_data = (int)&DAT_000c9a37;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x2a:
        *resource_data = (int)&DAT_000c9933;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x2b:
        *resource_data = (int)&DAT_000c982f;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x2c:
        *resource_data = (int)&DAT_000c972b;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x2d:
        *resource_data = (int)&DAT_000c9627;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x2e:
        *resource_data = (int)&DAT_000c9523;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x2f:
        *resource_data = (int)&DAT_000c941f;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x30:
        *resource_data = (int)&DAT_000c931b;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x31:
        *resource_data = (int)&DAT_000c9217;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x32:
        *resource_data = (int)&DAT_000c9113;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x33:
        *resource_data = (int)&DAT_000c900f;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      default:
        return 0xffffffff;
      case 0x36:
        *resource_data = (int)&DAT_000c8cef;
        *width = 0x14;
        *height = 0x14;
        return 0;
      case 0x37:
        *resource_data = (int)&DAT_000c8c27;
        *width = 0x14;
        *height = 0x14;
        return 0;
      case 0x38:
        *resource_data = (int)&DAT_000c8b5f;
        *width = 0x14;
        *height = 0x14;
        return 0;
      case 0x39:
        *resource_data = (int)&DAT_000c8a97;
        *width = 0x14;
        *height = 0x14;
        return 0;
      case 0x3a:
        *resource_data = (int)&DAT_000c89cf;
        *width = 0x14;
        *height = 0x14;
        return 0;
      case 0x3b:
        *resource_data = (int)&DAT_000c88cb;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x3c:
        *resource_data = (int)&DAT_000c87c7;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x3e:
        *resource_data = (int)&DAT_000c7f5a;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x3f:
        *resource_data = (int)&DAT_000c7e92;
        *width = 0x14;
        *height = 0x14;
        return 0;
      case 0x41:
        *resource_data = (int)&DAT_000c7c22;
        *width = 0x30;
        *height = 0x1a;
        return 0;
      case 0x42:
        *resource_data = (int)&DAT_000c86c3;
        *width = 0x14;
        *height = 0x1a;
        return 0;
      case 0x43:
        *resource_data = (int)&DAT_000c85fb;
        *width = 0x14;
        *height = 0x14;
        return 0;
      case 0x44:
        *resource_data = (int)&DAT_000c8533;
        *width = 0x14;
        *height = 0x14;
        return 0;
      case 0x45:
        *resource_data = (int)&DAT_000c846b;
        *width = 0x14;
        *height = 0x14;
        return 0;
      case 0x46:
        *resource_data = (int)&DAT_000c83a3;
        *width = 0x14;
        *height = 0x14;
        return 0;
      case 0x47:
        *resource_data = (int)&DAT_000c82db;
        *width = 0x14;
        *height = 0x14;
        return 0;
      case 0x48:
        *resource_data = (int)&DAT_000c74c2;
        *width = 0x14;
        *height = 0x14;
        return 0;
      case 0x49:
        *resource_data = (int)&DAT_000c73fa;
        *width = 0x14;
        *height = 0x14;
        return 0;
      case 0x4a:
        *resource_data = (int)&DAT_000c7a90;
        *width = 0x192;
        *height = 2;
        return 0;
      case 0x4b:
        *resource_data = (int)&DAT_000c7956;
        *width = 0x13a;
        *height = 2;
        return 0;
      case 0x4c:
        *resource_data = (int)&DAT_000c77c4;
        *width = 0x192;
        *height = 2;
        return 0;
      case 0x4d:
        *resource_data = (int)&DAT_000c768a;
        *width = 0x13a;
        *height = 2;
        return 0;
      case 0x4e:
        *resource_data = (int)&DAT_000c760a;
        *width = 2;
        *height = 0x80;
        return 0;
      case 0x4f:
        *resource_data = (int)&DAT_000c758a;
        *width = 2;
        *height = 0x80;
        return 0;
      case 0x50:
        *resource_data = (int)"\"\"\"\"\"\"\"\"\"\"\"";
        *width = 10;
        *height = 10;
        return 0;
      case 0x51:
        *resource_data = (int)&DAT_000c733b;
        *width = 10;
        *height = 10;
        return 0;
      case 0x52:
        *resource_data = (int)"\"\"\"\"\"\"\"\"\"\"";
        *width = 10;
        *height = 10;
        return 0;
      case 0x53:
        *resource_data = (int)&DAT_000c72d7;
        *width = 10;
        *height = 10;
        return 0;
      case 0x54:
        *resource_data = (int)&DAT_000c739f;
        *width = 0xe;
        *height = 0xd;
        return 0;
      case 0x56:
        *resource_data = (int)&DAT_000c6df5;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x57:
        *resource_data = (int)&DAT_000c6913;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x58:
        *resource_data = (int)&DAT_000c6431;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x59:
        *resource_data = (int)&DAT_000c5f4f;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x5a:
        *resource_data = (int)&DAT_000c5a6d;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x5b:
        *resource_data = (int)&DAT_000c558b;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x5c:
        *resource_data = (int)&DAT_000c50a9;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x5d:
        *resource_data = (int)&DAT_000c4bc7;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x5e:
        *resource_data = (int)&DAT_000c46e5;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x5f:
        *resource_data = (int)&DAT_000c4203;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x60:
        *resource_data = (int)&DAT_000c3d21;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x61:
        *resource_data = (int)&DAT_000c383f;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x62:
        *resource_data = (int)&DAT_000c335d;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 99:
        *resource_data = (int)&DAT_000c2e7b;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 100:
        *resource_data = (int)&DAT_000c2999;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x65:
        *resource_data = (int)&DAT_000c24b7;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x66:
        *resource_data = (int)&DAT_000c1fd5;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x67:
        *resource_data = (int)&DAT_000c1af3;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x68:
        *resource_data = (int)&DAT_000c1611;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x69:
        *resource_data = (int)&DAT_000c112f;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x6a:
        *resource_data = (int)&DAT_000c0c4d;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x6b:
        *resource_data = (int)&DAT_000c076b;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x6c:
        *resource_data = (int)&DAT_000c0289;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x6d:
        *resource_data = (int)&DAT_000bfda7;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x6e:
        *resource_data = (int)&DAT_000bf8c5;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x6f:
        *resource_data = (int)&DAT_000bf3e3;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x70:
        *resource_data = (int)&DAT_000bef01;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x71:
        *resource_data = (int)&DAT_000bea1f;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x72:
        *resource_data = (int)&DAT_000be53d;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x73:
        *resource_data = (int)&DAT_000be05b;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x74:
        *resource_data = (int)&DAT_000bdb79;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x75:
        *resource_data = (int)&DAT_000bd697;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x76:
        *resource_data = (int)&DAT_000bd1b5;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x77:
        *resource_data = (int)&DAT_000bccd3;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x78:
        *resource_data = (int)&DAT_000bc7f1;
        *width = 0x32;
        *height = 0x32;
        return 0;
      case 0x7a:
        *resource_data = (int)&DAT_000bc7e0;
        *width = 0x22;
        *height = 1;
        return 0;
      case 0x7b:
        *resource_data = (int)&DAT_000bc7ca;
        *width = 0x2c;
        *height = 1;
        return 0;
      case 0x7c:
        *resource_data = (int)&DAT_000bc6fd;
        *width = 0x19a;
        *height = 1;
        return 0;
      }
    }
    if (LOG_LEVEL < 2) {
      return 0xffffffff;
    }
    format_str = "%s(): can\'t find resource ,exit .....\n";
LAB_00045912:
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(format_str,"resource_manger_get");
    }
    else {
      handle_heartbeat();
    }
    break;
  case 5:
    switch(resource_id) {
    case 1:
      *resource_data = (int)&DAT_000d43bf;
      *width = 0x14;
      *height = 0x1a;
      if (color_depth != (undefined1 *)0x0) {
        *color_depth = 0x2d;
      }
      break;
    case 2:
      puVar9 = &DAT_000d328f;
      goto LAB_00046816;
    case 3:
      puVar9 = &DAT_000d215f;
LAB_00046816:
      *resource_data = (int)puVar9;
      *width = 0x14;
      *height = 0x14;
      if (color_depth != (undefined1 *)0x0) {
        *color_depth = 0x16;
      }
      break;
    case 4:
      *resource_data = (int)&DAT_000d15a7;
      *width = 0x14;
      *height = 0x14;
      if (color_depth != (undefined1 *)0x0) {
        *color_depth = 0xf;
      }
      break;
    case 5:
      *resource_data = (int)&DAT_000d0e9f;
      *width = 0x14;
      goto LAB_00046850;
    case 6:
      *resource_data = (int)&DAT_000d06cf;
      *width = 0x14;
      *height = 0x14;
      if (color_depth != (undefined1 *)0x0) {
        *color_depth = 10;
      }
      break;
    case 7:
      *resource_data = (int)&DAT_000cff13;
      *width = 0x16;
LAB_00046850:
      *height = 0x14;
      if (color_depth != (undefined1 *)0x0) {
        *color_depth = 9;
      }
      break;
    case 8:
      *resource_data = (int)&DAT_000ce483;
      *width = 0x14;
      *height = 0x14;
      if (color_depth != (undefined1 *)0x0) {
        *color_depth = 0x22;
      }
      break;
    case 9:
      *resource_data = (int)&DAT_000cd5ab;
      *width = 0x14;
      *height = 0x14;
      if (color_depth != (undefined1 *)0x0) {
        *color_depth = 0x13;
      }
      break;
    case 10:
      *resource_data = (int)&DAT_000cc863;
      *width = 0x14;
      *height = 0x14;
      if (color_depth != (undefined1 *)0x0) {
        *color_depth = 0x11;
      }
      break;
    case 0xb:
      *resource_data = (int)&DAT_000cb7fb;
      *width = 0x14;
      *height = 0x14;
      if (color_depth != (undefined1 *)0x0) {
        *color_depth = 0x15;
      }
      break;
    case 0xc:
      *resource_data = (int)&DAT_000ca153;
      *width = 0x14;
      *height = 0x14;
      if (color_depth != (undefined1 *)0x0) {
        *color_depth = 0x1d;
      }
      break;
    default:
      goto switchD_0004589e_caseD_6;
    }
    return 0;
  }
switchD_0004589e_caseD_6:
  return 0xffffffff;
}



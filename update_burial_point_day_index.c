/*
 * Function: update_burial_point_day_index
 * Entry:    0004a5b0
 * Prototype: undefined update_burial_point_day_index()
 */


undefined4
update_burial_point_day_index
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  
  local_24 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  uVar2 = get_work_mode_timestamp();
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  unix_timestamp_to_datetime(uVar2,&local_24);
  if ((local_24 & 0xffff) < 0x7e9) {
    if ((local_24._2_2_ | (ushort)local_20) < 2) {
      if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): burial point date was not init!\n","update_burial_point_day_index",
                      local_20 & 0xffff,0,param_1);
        }
        else {
          handle_heartbeat();
        }
      }
      return 0xffffffff;
    }
  }
  iVar3 = get_work_mode();
  if (6 < *(byte *)(iVar3 + 0x10db)) {
    iVar3 = get_work_mode();
    *(undefined1 *)(iVar3 + 0x10db) = 0;
  }
  iVar3 = get_work_mode();
  iVar4 = get_work_mode();
  if (*(short *)((uint)*(byte *)(iVar4 + 0x10db) * 0xc + iVar3 + 0x10de) == (short)local_24) {
    iVar3 = get_work_mode();
    iVar4 = get_work_mode();
    if (*(byte *)((uint)*(byte *)(iVar4 + 0x10db) * 0xc + iVar3 + 0x10e0) == local_24._2_2_) {
      iVar3 = get_work_mode();
      iVar4 = get_work_mode();
      if ((uint)*(byte *)((uint)*(byte *)(iVar4 + 0x10db) * 0xc + iVar3 + 0x10e1) ==
          (local_20 & 0xffff)) {
        return 0;
      }
    }
  }
  uVar5 = 0;
  do {
    iVar3 = get_work_mode();
    if ((uint)*(byte *)(iVar3 + 0x10db) != (uVar5 & 0xff)) {
      iVar3 = get_work_mode();
      iVar4 = uVar5 * 0xc;
      if (*(short *)(iVar3 + iVar4 + 0x10de) == (short)local_24) {
        iVar3 = get_work_mode();
        if ((*(byte *)(iVar3 + iVar4 + 0x10e0) == local_24._2_2_) &&
           (iVar3 = get_work_mode(), (uint)*(byte *)(iVar3 + iVar4 + 0x10e1) == (local_20 & 0xffff))
           ) {
          iVar3 = get_work_mode();
          *(char *)(iVar3 + 0x10db) = (char)uVar5;
          goto LAB_0004a6b2;
        }
      }
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == 7) {
      iVar3 = get_work_mode();
      *(char *)(iVar3 + 0x10db) = *(char *)(iVar3 + 0x10db) + '\x01';
      iVar3 = get_work_mode();
      if (6 < *(byte *)(iVar3 + 0x10db)) {
        iVar3 = get_work_mode();
        *(undefined1 *)(iVar3 + 0x10db) = 0;
      }
LAB_0004a6b2:
      iVar3 = get_work_mode();
      iVar4 = get_work_mode();
      uVar5 = local_24;
      *(short *)((uint)*(byte *)(iVar4 + 0x10db) * 0xc + iVar3 + 0x10de) = (short)local_24;
      iVar3 = get_work_mode();
      iVar4 = get_work_mode();
      uVar1 = local_20;
      *(char *)((uint)*(byte *)(iVar4 + 0x10db) * 0xc + iVar3 + 0x10e0) = (char)(uVar5 >> 0x10);
      iVar3 = get_work_mode();
      iVar4 = get_work_mode();
      *(char *)((uint)*(byte *)(iVar4 + 0x10db) * 0xc + iVar3 + 0x10e1) = (char)uVar1;
      iVar4 = get_work_mode();
      iVar3 = get_work_mode();
      iVar4 = (uint)*(byte *)(iVar3 + 0x10db) * 0xc + iVar4;
      *(undefined2 *)(iVar4 + 0x10e2) = 0;
      *(undefined2 *)(iVar4 + 0x10e4) = 0;
      iVar4 = get_work_mode();
      iVar3 = get_work_mode();
      iVar4 = (uint)*(byte *)(iVar3 + 0x10db) * 0xc + iVar4;
      *(undefined2 *)(iVar4 + 0x10e6) = 0;
      *(undefined2 *)(iVar4 + 0x10e8) = 0;
      iVar3 = get_work_mode();
      iVar4 = get_work_mode();
      uVar5 = local_24;
      *(short *)((uint)*(byte *)(iVar4 + 0x10db) * 0xc + iVar3 + 0x1132) = (short)local_24;
      iVar3 = get_work_mode();
      iVar4 = get_work_mode();
      uVar1 = local_20;
      *(char *)((uint)*(byte *)(iVar4 + 0x10db) * 0xc + iVar3 + 0x1134) = (char)(uVar5 >> 0x10);
      iVar3 = get_work_mode();
      iVar4 = get_work_mode();
      *(char *)((uint)*(byte *)(iVar4 + 0x10db) * 0xc + iVar3 + 0x1135) = (char)uVar1;
      iVar4 = get_work_mode();
      iVar3 = get_work_mode();
      iVar4 = (uint)*(byte *)(iVar3 + 0x10db) * 0xc + iVar4;
      *(undefined2 *)(iVar4 + 0x1136) = 0;
      *(undefined2 *)(iVar4 + 0x1138) = 0;
      iVar4 = get_work_mode();
      iVar3 = get_work_mode();
      iVar4 = (uint)*(byte *)(iVar3 + 0x10db) * 0xc + iVar4;
      *(undefined2 *)(iVar4 + 0x113a) = 0;
      *(undefined2 *)(iVar4 + 0x113c) = 0;
      return 0;
    }
  } while( true );
}



/*
 * Function: bt_receive_cb
 * Entry:    00017f70
 * Prototype: undefined bt_receive_cb()
 */


void bt_receive_cb(undefined4 param_1,byte *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined4 local_158;
  undefined1 auStack_154 [16];
  undefined4 local_144;
  undefined1 auStack_140 [28];
  undefined1 local_124;
  undefined1 auStack_123 [259];
  
  local_144 = 0;
  fill_memory_buffer(auStack_140,0,0x1a);
  fill_memory_buffer(&local_124,0,0x101);
  puVar3 = (undefined1 *)FUN_00081526(param_1);
  switch(*puVar3) {
  case 0:
    pcVar5 = "public";
    break;
  case 1:
    pcVar5 = "random";
    break;
  case 2:
    pcVar5 = "public-id";
    break;
  case 3:
    pcVar5 = "random-id";
    break;
  default:
    FUN_0007ddbe(&local_158,10,"0x%02x");
    goto LAB_00017fb6;
  }
  strcpy_safe(&local_158,pcVar5);
LAB_00017fb6:
  uVar6 = (uint)(byte)puVar3[1];
  uVar7 = (uint)(byte)puVar3[2];
  uVar8 = (uint)(byte)puVar3[3];
  uVar9 = (uint)(byte)puVar3[4];
  uVar10 = (uint)(byte)puVar3[5];
  puVar11 = &local_158;
  FUN_0007ddbe(&local_144,0x1e,"%02X:%02X:%02X:%02X:%02X:%02X (%s)",puVar3[6],uVar10,uVar9,uVar8,
               uVar7,uVar6,&local_158);
  if (0 < LOG_LEVEL) {
    uVar10 = (uint)*param_2;
    uVar9 = (uint)param_2[1];
    uVar8 = (uint)param_2[2];
    uVar7 = (uint)param_2[3];
    uVar6 = (uint)param_2[4];
    puVar11 = (undefined4 *)(uint)param_2[5];
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): **Received data from: %s, len=%d,cmd 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x,receiver_thd_is_running is %d\n"
                  ,"bt_receive_cb",&local_144,param_3,uVar10,uVar9,uVar8,uVar7,uVar6,puVar11,
                  (uint)*(byte *)(BLUETOOTH_MANAGER + 0x248));
    }
    else {
      handle_heartbeat();
    }
  }
  iVar1 = BLUETOOTH_MANAGER;
  lVar12 = thunk_FUN_00074f68();
  iVar2 = BLUETOOTH_MANAGER;
  *(uint *)(iVar1 + 0x368) =
       (uint)(lVar12 * 1000) >> 0xf | (int)((ulonglong)(lVar12 * 1000) >> 0x20) * 0x20000;
  iVar1 = BLUETOOTH_MANAGER;
  if ((*(char *)(iVar2 + 0x248) == '\0') && (*(int *)(iVar2 + 0x220) == 0)) {
    if (param_3 < 0x15) {
      memcpy(*(undefined4 *)(BLUETOOTH_MANAGER + 0x254),param_2,param_3);
      fill_memory_buffer(*(int *)(iVar1 + 0x254) + param_3,0,0x14 - param_3);
      *(undefined4 *)(iVar1 + 0x358) = 0;
      *(uint *)(iVar1 + 0x360) = param_3;
    }
    else {
      if (0x100 < param_3) {
        if (IS_DEBUG == 0) {
          uVar4 = 0x6a;
          goto LAB_000180e2;
        }
        uVar4 = 0x6a;
        goto LAB_000180d4;
      }
      memcpy(BLUETOOTH_MANAGER + 600,param_2,param_3);
      *(uint *)(iVar1 + 0x358) = param_3;
    }
    *(undefined4 *)(iVar1 + 0x35c) = 1;
    z_spin_lock_valid(iVar1 + 0x218);
  }
  else {
    local_158 = 0;
    fill_memory_buffer(auStack_154,0,0x10);
    if (*param_2 == 0x18) {
      uVar4 = get_work_mode();
      handle_work_mode_finish(uVar4,0);
      local_158._0_2_ = CONCAT11(0xc9,(undefined1)local_158);
      (**(code **)(BLUETOOTH_MANAGER + 0xc))(&local_158,0x14);
      return;
    }
    if (param_3 < 0x101) {
      local_124 = (undefined1)param_3;
      fill_memory_buffer(auStack_123,0,0x100);
      memcpy(auStack_123,param_2,param_3);
      FUN_00017eec(auStack_123,param_3 & 0xff);
      if (LOG_LEVEL < 1) {
        return;
      }
      if (IS_DEBUG != 0) {
        handle_heartbeat();
        return;
      }
      DEBUG_PRINT("%s(): enqueue because busy\n","bt_receive_cb");
      return;
    }
    if (IS_DEBUG == 0) {
      uVar4 = 0x59;
LAB_000180e2:
      DEBUG_PRINT("[%s-%d]len is %d, too large ! \n","bt_receive_cb",uVar4,param_3,uVar10,uVar9,
                  uVar8,uVar7,uVar6,puVar11);
      return;
    }
    uVar4 = 0x59;
LAB_000180d4:
    handle_heartbeat("[%s-%d]len is %d, too large ! \n","bt_receive_cb",uVar4,param_3);
  }
  return;
}



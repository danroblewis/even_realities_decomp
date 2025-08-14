/*
 * Function: sett_handler
 * Entry:    00022218
 * Prototype: undefined sett_handler()
 */


int sett_handler(undefined4 param_1,undefined4 param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  
  iVar1 = FUN_0000eefe(param_1,"ble_whitelist_app");
  if (iVar1 == 0) {
    uVar2 = FUN_00034bcc();
    uVar3 = 0x15e2;
LAB_00022232:
    iVar1 = (*param_3)(param_4,uVar2,uVar3);
    if (-1 < iVar1) {
      return 0;
    }
LAB_00022270:
    if (LOG_LEVEL < 2) {
      return iVar1;
    }
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): Failed to read %s, error: %d\n","sett_handler",param_1,iVar1);
      return iVar1;
    }
    handle_heartbeat("%s(): Failed to read %s, error: %d\n","sett_handler",param_1,iVar1);
    return iVar1;
  }
  iVar1 = FUN_0000eefe(param_1,"dashboard_ts");
  if (iVar1 == 0) {
    iVar1 = get_work_mode();
    if (*(int *)(iVar1 + 0xfec) == 0) {
      return 0;
    }
    iVar1 = get_work_mode();
    iVar1 = (*param_3)(param_4,*(undefined4 *)(iVar1 + 0xfec),0x6a);
    if (iVar1 < 0) goto LAB_00022270;
    if (LOG_LEVEL < 3) {
      return 0;
    }
    if (IS_DEBUG == 0) {
      iVar1 = get_work_mode();
      puVar4 = *(uint **)(iVar1 + 0xfec);
LAB_000222b4:
      uVar5 = *puVar4;
LAB_000222b6:
      DEBUG_PRINT("%s(): key:%s, val=%d\n","sett_handler",param_1,uVar5);
      return 0;
    }
    iVar1 = get_work_mode();
    puVar4 = *(uint **)(iVar1 + 0xfec);
  }
  else {
    iVar1 = FUN_0000eefe(param_1,"countdown_ts");
    if (iVar1 != 0) {
      iVar1 = FUN_0000eefe(param_1,"first_enter_flag");
      if (iVar1 == 0) {
        iVar1 = get_work_mode();
        iVar1 = (*param_3)(param_4,iVar1 + 0x1050,4);
        if (iVar1 < 0) goto LAB_00022270;
        if (LOG_LEVEL < 3) {
          return 0;
        }
        if (IS_DEBUG != 0) {
          iVar1 = get_work_mode();
          uVar5 = *(uint *)(iVar1 + 0x1050);
          goto LAB_000222a0;
        }
        iVar1 = get_work_mode();
        uVar5 = *(uint *)(iVar1 + 0x1050);
        goto LAB_000222b6;
      }
      iVar1 = FUN_0000eefe(param_1,"brightness_level");
      if (iVar1 == 0) {
        iVar1 = get_work_mode();
        iVar1 = (*param_3)(param_4,iVar1 + 0xed5,1);
        if (iVar1 < 0) goto LAB_00022270;
        if (LOG_LEVEL < 3) {
          return 0;
        }
        if (IS_DEBUG == 0) {
          iVar1 = get_work_mode();
          uVar5 = (uint)*(byte *)(iVar1 + 0xed5);
          goto LAB_000222b6;
        }
        iVar1 = get_work_mode();
        uVar5 = (uint)*(byte *)(iVar1 + 0xed5);
        goto LAB_000222a0;
      }
      iVar1 = FUN_0000eefe(param_1,"3dof_enable");
      if (iVar1 == 0) {
        iVar1 = get_work_mode();
        iVar1 = (*param_3)(param_4,iVar1 + 0xf60,1);
        if (iVar1 < 0) goto LAB_00022270;
        if (LOG_LEVEL < 3) {
          return 0;
        }
        if (IS_DEBUG == 0) {
          iVar1 = get_work_mode();
          uVar5 = (uint)*(byte *)(iVar1 + 0xf60);
          goto LAB_000222b6;
        }
        iVar1 = get_work_mode();
        uVar5 = (uint)*(byte *)(iVar1 + 0xf60);
        goto LAB_000222a0;
      }
      iVar1 = FUN_0000eefe(param_1,"display_mode");
      if (iVar1 == 0) {
        iVar1 = get_work_mode();
        iVar1 = (*param_3)(param_4,iVar1 + 0xfea,1);
        if (iVar1 < 0) goto LAB_00022270;
        if (LOG_LEVEL < 3) {
          return 0;
        }
        if (IS_DEBUG == 0) {
          iVar1 = get_work_mode();
          uVar5 = (uint)*(byte *)(iVar1 + 0xfea);
          goto LAB_000222b6;
        }
        iVar1 = get_work_mode();
        uVar5 = (uint)*(byte *)(iVar1 + 0xfea);
        goto LAB_000222a0;
      }
      iVar1 = FUN_0000eefe(param_1,"runtime_mode");
      if (iVar1 == 0) {
        iVar1 = get_work_mode();
        iVar1 = (*param_3)(param_4,iVar1 + 1);
        if (iVar1 < 0) goto LAB_00022270;
        if (LOG_LEVEL < 3) {
          return 0;
        }
        if (IS_DEBUG == 0) {
          iVar1 = get_work_mode();
          uVar5 = (uint)*(byte *)(iVar1 + 1);
          goto LAB_000222b6;
        }
        iVar1 = get_work_mode();
        uVar5 = (uint)*(byte *)(iVar1 + 1);
        goto LAB_000222a0;
      }
      iVar1 = FUN_0000eefe(param_1,"user_sched_info");
      if (iVar1 != 0) {
        iVar1 = FUN_0000eefe(param_1,"wakeup_angle");
        if (iVar1 != 0) {
          return 0;
        }
        iVar1 = get_work_mode();
        iVar1 = (*param_3)(param_4,iVar1 + 0xef4,1);
        if (iVar1 < 0) goto LAB_00022270;
        if (LOG_LEVEL < 3) {
          return 0;
        }
        if (IS_DEBUG == 0) {
          iVar1 = get_work_mode();
          uVar5 = (uint)*(byte *)(iVar1 + 0xef4);
          goto LAB_000222b6;
        }
        iVar1 = get_work_mode();
        uVar5 = (uint)*(byte *)(iVar1 + 0xef4);
        goto LAB_000222a0;
      }
      iVar1 = get_work_mode();
      if (*(int *)(iVar1 + 0xff4) == 0) {
        return 0;
      }
      iVar1 = get_work_mode();
      uVar3 = 0x16a;
      uVar2 = *(undefined4 *)(iVar1 + 0xff4);
      goto LAB_00022232;
    }
    iVar1 = get_work_mode();
    if (*(int *)(iVar1 + 0xff0) == 0) {
      return 0;
    }
    iVar1 = get_work_mode();
    iVar1 = (*param_3)(param_4,*(undefined4 *)(iVar1 + 0xff0),7);
    if (iVar1 < 0) goto LAB_00022270;
    if (LOG_LEVEL < 3) {
      return 0;
    }
    if (IS_DEBUG == 0) {
      iVar1 = get_work_mode();
      puVar4 = *(uint **)(iVar1 + 0xff0);
      goto LAB_000222b4;
    }
    iVar1 = get_work_mode();
    puVar4 = *(uint **)(iVar1 + 0xff0);
  }
  uVar5 = *puVar4;
LAB_000222a0:
  handle_heartbeat("%s(): key:%s, val=%d\n","sett_handler",param_1,uVar5);
  return 0;
}



/*
 * Function: not_disturb_sync_data
 * Entry:    0003ce04
 * Prototype: undefined not_disturb_sync_data()
 */


undefined4 not_disturb_sync_data(undefined1 *param_1,uint param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 local_14;
  undefined4 uStack_10;
  
  if (param_1 == (undefined1 *)0x0) {
    return 0xffffffff;
  }
  puVar5 = param_1;
  local_14 = param_2;
  uStack_10 = param_3;
  pcVar1 = (char *)get_work_mode();
  if (*pcVar1 != '\x01') {
    local_14 = CONCAT22(local_14._2_2_,5);
    if (param_2 != 0) {
      param_2 = 1;
      local_14._0_2_ = CONCAT11(*param_1,5);
    }
    uVar2 = get_work_mode();
    uVar4 = FUN_00027448(uVar2,0xd,&local_14,param_2 + 1 & 0xff,puVar5);
    if (uVar4 < 2000) {
      return 0;
    }
    if (LOG_LEVEL < 1) {
      return 0xffffffff;
    }
    pcVar1 = "%s(): not_disturb SYNC TO master failed...\n";
    goto LAB_0003ce56;
  }
  local_14 = 5;
  if (param_2 < 4) {
    if (param_2 != 0) goto LAB_0003ce22;
  }
  else {
    param_2 = 3;
LAB_0003ce22:
    memcpy((int)&local_14 + 1,param_1,param_2);
  }
  uVar2 = get_work_mode();
  iVar3 = sync_to_slave(uVar2,6,&local_14,param_2 + 1 & 0xff);
  if (iVar3 < 5000) {
    return 0;
  }
  if (LOG_LEVEL < 1) {
    return 0xffffffff;
  }
  pcVar1 = "%s(): not_disturb SYNC TO Slave failed...\n";
LAB_0003ce56:
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(pcVar1,"not_disturb_sync_data");
  }
  else {
    handle_heartbeat();
  }
  return 0xffffffff;
}



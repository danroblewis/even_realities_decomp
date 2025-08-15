/*
 * Function: get_dashboard_sum_time
 * Entry:    0004a960
 * Prototype: undefined get_dashboard_sum_time()
 */


longlong get_dashboard_sum_time(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar7 = convert_ble_timing_to_milliseconds();
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  iVar1 = get_work_mode();
  iVar3 = *(int *)(iVar1 + 0x1098);
  bVar6 = *(uint *)(iVar1 + 0x1094) < (uint)uVar7;
  if ((int)((iVar3 - iVar2) - (uint)bVar6) < 0 ==
      (SBORROW4(iVar3,iVar2) != SBORROW4(iVar3 - iVar2,(uint)bVar6))) {
    iVar1 = get_work_mode();
    uVar4 = *(uint *)(iVar1 + 0x1094);
    iVar1 = *(int *)(iVar1 + 0x1098);
    uVar7 = convert_ble_timing_to_milliseconds();
    lVar8 = CONCAT44((iVar1 - (int)((ulonglong)uVar7 >> 0x20)) - (uint)(uVar4 < (uint)uVar7),
                     uVar4 - (uint)uVar7);
  }
  else {
    lVar8 = convert_ble_timing_to_milliseconds();
    iVar1 = get_work_mode();
    lVar8 = lVar8 - *(longlong *)(iVar1 + 0x1094);
  }
  uVar5 = (undefined4)((ulonglong)lVar8 >> 0x20);
  if (1 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): get_dashboard_sum_time is %d\n","get_dashboard_sum_time",(int)lVar8,uVar5);
    }
    else {
      handle_heartbeat("%s(): get_dashboard_sum_time is %d\n","get_dashboard_sum_time",(int)lVar8,
                       uVar5);
    }
  }
  return lVar8;
}



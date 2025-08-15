/*
 * Function: enter_dashboard_burial_point
 * Entry:    0004a9ec
 * Prototype: undefined enter_dashboard_burial_point()
 */


void enter_dashboard_burial_point(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  iVar1 = get_work_mode();
  if ((*(char *)(iVar1 + 0x1092) != '\x01') && (uVar2 = get_burial_point_status_value(), uVar2 < 7))
  {
    iVar1 = get_work_mode();
    *(undefined1 *)(iVar1 + 0x1092) = 1;
    iVar1 = get_work_mode();
    *(char *)(iVar1 + 0x1093) = (char)uVar2;
    iVar1 = get_work_mode();
    uVar3 = convert_ble_timing_to_milliseconds();
    *(undefined8 *)(iVar1 + 0x1094) = uVar3;
    iVar1 = get_work_mode();
    iVar1 = uVar2 * 0xc + iVar1;
    *(int *)(iVar1 + 0x113a) = *(int *)(iVar1 + 0x113a) + 1;
    iVar1 = get_work_mode();
    *(int *)(iVar1 + 0x10d6) = *(int *)(iVar1 + 0x10d6) + 1;
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG != 0) {
        iVar1 = get_work_mode();
        handle_heartbeat("%s(): [enter_dashboard_burial_point] start_time is %d\n",
                         "enter_dashboard_burial_point",*(undefined4 *)(iVar1 + 0x1094),
                         *(undefined4 *)(iVar1 + 0x1098));
        return;
      }
      iVar1 = get_work_mode();
      DEBUG_PRINT("%s(): [enter_dashboard_burial_point] start_time is %d\n",
                  "enter_dashboard_burial_point",*(undefined4 *)(iVar1 + 0x1094),
                  *(undefined4 *)(iVar1 + 0x1098));
      return;
    }
  }
  return;
}



/*
 * Function: process_memory_management_with_timing_control
 * Entry:    0004d594
 * Prototype: undefined process_memory_management_with_timing_control()
 */


int process_memory_management_with_timing_control(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;
  longlong lVar6;
  
  if (DAT_2001d44b == '\0') {
    return 0;
  }
  iVar1 = process_memory_allocation_with_priority_control();
  if (iVar1 != 0) {
    DAT_2000a0d8 = DAT_2000a0d8 + -1;
    puVar4 = &DAT_000882a0;
    while( true ) {
      if (&DAT_000882b0 < puVar4) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","backend <= _log_backend_list_end",
                     "WEST_TOPDIR/zephyr/subsys/logging/log_core.c",0x1c5);
        DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
        assertion_failure("WEST_TOPDIR/zephyr/subsys/logging/log_core.c",0x1c5);
      }
      if (&UNK_000882af < puVar4) break;
      if (*(char *)(puVar4[1] + 5) != '\0') {
        (**(code **)*puVar4)(puVar4,iVar1);
      }
      puVar4 = puVar4 + 4;
    }
    process_memory_deallocation_with_priority_control(iVar1);
  }
  if (0 < DAT_2000a0d4) {
    lVar6 = thunk_FUN_00074f68();
    uVar2 = (uint)((ulonglong)(lVar6 * 1000) >> 0x20);
    uVar3 = (uint)(lVar6 * 1000) >> 0xf | uVar2 * 0x20000;
    uVar2 = ((uVar2 >> 0xf) - DAT_200056a4) - (uint)(uVar3 < DAT_200056a0);
    bVar5 = 1000 < uVar3 - DAT_200056a0;
    if (uVar2 != 0 || uVar2 < bVar5) {
      process_system_callbacks_with_flag_reset(DAT_200056a4,uVar2 - !bVar5);
    }
  }
  bVar5 = 0xfffffc17 < DAT_200056a0;
  DAT_200056a0 = DAT_200056a0 + 1000;
  DAT_200056a4 = DAT_200056a4 + (uint)bVar5;
  if ((DAT_20003658 << 0x1c < 0) || (uVar2 = DAT_2000364c, DAT_2000364c < DAT_20003650)) {
    uVar2 = DAT_2000366c;
  }
  iVar1 = uVar2 - DAT_20003650;
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}



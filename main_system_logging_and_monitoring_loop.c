/*
 * Function: main_system_logging_and_monitoring_loop
 * Entry:    0004d6ec
 * Prototype: undefined main_system_logging_and_monitoring_loop()
 */


/* WARNING: Removing unreachable block (ram,0x0004d6fa) */

void main_system_logging_and_monitoring_loop(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  iVar1 = process_system_tasks_with_priority_management(0);
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
    uVar7 = 0xffffffff;
  }
  else {
    uVar6 = 0x667;
    uVar7 = 0;
  }
  DAT_2000a0d0 = process_ble_data_with_callback_validation();
  if ((DAT_2000a0d0 != 0) && (9 < DAT_2000a0d8)) {
    z_spin_lock_valid(&DAT_200039f8);
  }
  iVar2 = 0;
  do {
    do {
      iVar4 = iVar2;
      if ((iVar1 != 0) && (iVar1 = process_bit_flags_with_callback_execution(iVar1), iVar1 == 0)) {
        uVar6 = 0xffffffff;
        uVar7 = 0xffffffff;
      }
      uVar8 = process_memory_management_with_timing_control();
      uVar3 = (undefined4)((ulonglong)uVar8 >> 0x20);
      iVar2 = (int)uVar8;
    } while (iVar2 != 0);
    if (iVar4 != 0) {
      piVar5 = &DAT_000882a0;
      while( true ) {
        if (&DAT_000882b0 < piVar5) {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","backend <= _log_backend_list_end",
                       "WEST_TOPDIR/zephyr/subsys/logging/log_core.c",0x350);
          DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
          assertion_failure("WEST_TOPDIR/zephyr/subsys/logging/log_core.c",0x350);
        }
        if (&UNK_000882af < piVar5) break;
        if (*(code **)(*piVar5 + 0x18) != (code *)0x0) {
          (**(code **)(*piVar5 + 0x18))(piVar5,0);
          uVar3 = extraout_r1;
        }
        piVar5 = piVar5 + 4;
      }
    }
    manage_ble_connection_state_comprehensive(&DAT_200039f8,uVar3,uVar6,uVar7);
  } while( true );
}



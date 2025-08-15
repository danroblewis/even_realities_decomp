/*
 * Function: configure_sensor_timing_and_interrupts
 * Entry:    0004c418
 * Prototype: undefined __stdcall configure_sensor_timing_and_interrupts(undefined4 sensor_context, undefined4 timing_config, undefined4 sensor_flags)
 */


void configure_sensor_timing_and_interrupts
               (int sensor_context,undefined4 timing_config,uint sensor_flags)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  pcVar4 = *(code **)(*(int *)(sensor_context + 8) + 0x10);
  if ((pcVar4 == (code *)0x0) ||
     (iVar2 = (*pcVar4)(sensor_context,timing_config,0,pcVar4,sensor_context,timing_config,
                        sensor_flags), iVar2 != 0)) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","err == 0",
                 "WEST_TOPDIR/zephyr/soc/arm/nordic_nrf/nrf53/sync_rtc.c",0xcb);
    uVar3 = 0xcb;
    pcVar1 = "WEST_TOPDIR/zephyr/soc/arm/nordic_nrf/nrf53/sync_rtc.c";
  }
  else {
    uVar6 = (sensor_flags << 0x10) >> 0x18;
    iVar2 = get_timer_interrupt_value(uVar6);
    uVar7 = sensor_flags & 0xff;
    manage_sensor_interrupt_configuration(uVar7,uVar6,sensor_flags >> 0x18,0);
    uVar3 = configure_timer_interrupt_settings(uVar6);
    uVar5 = (sensor_flags << 8) >> 0x18;
    if (uVar5 < 0x10) {
      *(uint *)((uVar5 & 0x3f) * 4 + 0x5002a080) = uVar7 | 0x80000000;
      set_sensor_interrupt_flags(uVar7,uVar3);
      handle_timer_interrupt_callback
                (uVar6,extraout_r1,(iVar2 + 0x32) * 2,0,&LAB_0004c38c_1,sensor_flags);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","index < 16",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_ipc.h",0x1e1);
    uVar3 = 0x1e1;
    pcVar1 = "WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_ipc.h";
  }
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call(pcVar1,uVar3);
}



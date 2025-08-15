/*
 * Function: setup_interrupt_timing_configuration
 * Entry:    00067d84
 * Prototype: undefined __stdcall setup_interrupt_timing_configuration(undefined4 timer_config, undefined4 timing_parameters)
 */


void setup_interrupt_timing_configuration(int *timer_config,undefined4 *timing_parameters)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar3 = (uint)timing_parameters[1] >> 0x11;
  uVar4 = handle_unsigned_division(timing_parameters[1] << 0xf,uVar3,1000,0);
  if (999 < uVar3) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","ticks <= (0xffffffffUL)",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_wdt.c",0x3f);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_wdt.c",0x3f);
  }
  iVar2 = *timer_config;
  *(undefined4 *)(iVar2 + 0x50c) = *timing_parameters;
  *(int *)(iVar2 + 0x504) = (int)uVar4;
  bVar1 = *(byte *)(timer_config + 1);
  if ((&DAT_2000b420)[(uint)bVar1 * 2] != 0) {
    iVar2 = *timer_config;
    *(undefined4 *)(iVar2 + 0x100) = 0;
    process_data_with_parameter_validation_alt4
              ((iVar2 << 0xc) >> 0x18,(int)((ulonglong)uVar4 >> 0x20),(uint)bVar1,
               *(undefined4 *)(iVar2 + 0x100));
    *(undefined4 *)(iVar2 + 0x304) = 1;
  }
  return;
}



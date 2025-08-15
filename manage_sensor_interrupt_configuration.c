/*
 * Function: manage_sensor_interrupt_configuration
 * Entry:    0004c278
 * Prototype: undefined __stdcall manage_sensor_interrupt_configuration(undefined4 interrupt_mask, undefined4 sensor_config, undefined4 sensor_index, undefined4 enable_flag)
 */


void manage_sensor_interrupt_configuration
               (uint interrupt_mask,undefined4 sensor_config,uint sensor_index,int enable_flag)

{
  undefined4 uVar1;
  uint *puVar2;
  
  if (0xf < sensor_index) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","index < 16",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_ipc.h",0x1e7,enable_flag);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_ipc.h",0x1e7);
  }
  uVar1 = manage_timer_interrupt_state(sensor_config);
  puVar2 = (uint *)(sensor_index * 4 + 0x5002a180);
  if (enable_flag == 0) {
    FUN_00064fd4(interrupt_mask,uVar1);
    *puVar2 = 0;
  }
  else {
    FUN_00064f78();
    *puVar2 = interrupt_mask | 0x80000000;
  }
  return;
}



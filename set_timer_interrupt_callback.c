/*
 * Function: set_timer_interrupt_callback
 * Entry:    00067f1c
 * Prototype: undefined set_timer_interrupt_callback()
 */


void set_timer_interrupt_callback(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((&DAT_2000b41c)[(uint)*(byte *)(param_1 + 1) * 8] != '\x02') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "m_cb[p_instance->drv_inst_idx].state == NRFX_DRV_STATE_POWERED_ON",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_wdt.c",0xb8,param_4);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_wdt.c",0xb8);
  }
  *(undefined4 *)(*param_1 + (param_2 + 0x180) * 4) = 0x6e524635;
  return;
}



/*
 * Function: activate_timer_interrupt_state
 * Entry:    00067e30
 * Prototype: undefined activate_timer_interrupt_state()
 */


void activate_timer_interrupt_state
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 1);
  if ((&DAT_2000b41d)[uVar2 * 8] == '\0') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_cb->alloc_index != 0",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_wdt.c",0x8c,param_4);
    uVar1 = 0x8c;
  }
  else {
    if ((&DAT_2000b41c)[uVar2 * 8] == '\x01') {
      *(undefined4 *)*param_1 = 1;
      (&DAT_2000b41c)[uVar2 * 8] = 2;
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_cb->state == NRFX_DRV_STATE_INITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_wdt.c",0x8d,param_4);
    uVar1 = 0x8d;
  }
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_wdt.c",uVar1);
}



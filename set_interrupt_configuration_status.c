/*
 * Function: set_interrupt_configuration_status
 * Entry:    00067884
 * Prototype: undefined set_interrupt_configuration_status()
 */


void set_interrupt_configuration_status
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 1);
  if ((&DAT_2000b3ee)[(uint)bVar1 * 0x28] != '\x01') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_cb->state == NRFX_DRV_STATE_INITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_twim.c",0x16b,param_4);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_twim.c",0x16b)
    ;
  }
  *(undefined4 *)(*param_1 + 0x500) = 6;
  (&DAT_2000b3ee)[(uint)bVar1 * 0x28] = 2;
  return;
}



/*
 * Function: enable_interrupt_sources_and_cleanup_config
 * Entry:    00067248
 * Prototype: undefined enable_interrupt_sources_and_cleanup_config()
 */


void enable_interrupt_sources_and_cleanup_config
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = (uint)*(byte *)(param_1 + 1);
  if ((&DAT_2000b3a0)[uVar2 * 0x24] == '\0') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_cb->state != NRFX_DRV_STATE_UNINITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_spim.c",0x255,param_4);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_spim.c",0x255)
    ;
  }
  process_data_with_callback_and_parameter_alt3((*param_1 << 0xc) >> 0x18);
  if ((&INTERRUPT_CONFIGURATION_STRUCTURE)[uVar2 * 9] != 0) {
    *(undefined4 *)(*param_1 + 0x308) = 0x80152;
    handle_ble_uart_packet_completion_with_retry
              (*param_1,&INTERRUPT_CONFIGURATION_STRUCTURE + uVar2 * 9);
  }
  iVar1 = *param_1;
  uVar3 = *(undefined4 *)(iVar1 + 0x50c);
  uVar4 = *(undefined4 *)(iVar1 + 0x510);
  if (-1 < (int)((uint)(byte)(&DAT_2000b3a2)[uVar2 * 0x24] << 0x1f)) {
    enable_interrupt_source(*(undefined4 *)(iVar1 + 0x508));
    enable_interrupt_source(uVar4);
    enable_interrupt_source(uVar3);
    enable_interrupt_source((&INTERRUPT_SOURCE_ENABLE_CONFIGURATION)[uVar2 * 9]);
    if ((char)param_1[1] != '\0') {
      uVar3 = *(undefined4 *)(*param_1 + 0x514);
      enable_interrupt_source(*(undefined4 *)(*param_1 + 0x56c));
      enable_interrupt_source(uVar3);
    }
  }
  (&DAT_2000b3a0)[uVar2 * 0x24] = 0;
  return;
}



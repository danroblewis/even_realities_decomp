/*
 * Function: reset_interrupt_configuration
 * Entry:    000678d0
 * Prototype: undefined reset_interrupt_configuration()
 */


void reset_interrupt_configuration
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (uint)*(byte *)(param_1 + 1) * 0x28;
  if ((&DAT_2000b3ee)[iVar1] == '\0') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_cb->state != NRFX_DRV_STATE_UNINITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_twim.c",0x176,param_4);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_twim.c",0x176)
    ;
  }
  *(undefined4 *)(&DAT_2000b3d4 + iVar1) = 0;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x308) = 0x19c0202;
  *(uint *)(iVar2 + 0x200) = *(uint *)(iVar2 + 0x200) & 0xffffe87f;
  *(undefined4 *)(iVar2 + 0x500) = 0;
  (&DAT_2000b3f0)[iVar1] = 0;
  (&DAT_2000b3ee)[iVar1] = 1;
  return;
}



/*
 * Function: setup_interrupt_configuration
 * Entry:    000671d8
 * Prototype: undefined setup_interrupt_configuration()
 */


int setup_interrupt_configuration(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_config",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_spim.c",0x1ff,param_4);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_spim.c",0x1ff)
    ;
  }
  uVar2 = (uint)*(byte *)(param_1 + 4);
  iVar3 = uVar2 * 0x24;
  if ((&DAT_2000b3a0)[iVar3] == '\0') {
    (&INTERRUPT_CONFIGURATION_STRUCTURE)[uVar2 * 9] = param_3;
    (&DAT_2000b388)[uVar2 * 9] = param_4;
    iVar1 = validate_interrupt_configuration_parameters();
    if (iVar1 == 0xbad0000) {
      configure_comprehensive_interrupt_settings(param_1);
      (&DAT_2000b3a1)[iVar3] = 0;
      (&DAT_2000b3a0)[iVar3] = 1;
    }
  }
  else {
    iVar1 = 0xbad0005;
  }
  return iVar1;
}



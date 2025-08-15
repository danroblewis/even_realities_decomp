/*
 * Function: initialize_hardware_configuration
 * Entry:    00066994
 * Prototype: undefined initialize_hardware_configuration()
 */


int initialize_hardware_configuration
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = DAT_2000b378;
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_config",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",0x19b,param_4);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",0x19b)
    ;
  }
  if (DAT_2000b378 == '\0') {
    DAT_2000b348 = param_2;
    DAT_2000b34c = param_3;
    iVar2 = validate_and_configure_hardware_parameters();
    if (iVar2 == 0xbad0000) {
      DAT_2000b378 = '\x01';
      DAT_2000b380 = cVar1;
      DAT_2000b350 = 0;
      DAT_2000b354 = 0;
    }
  }
  else {
    iVar2 = 0xbad0005;
  }
  return iVar2;
}



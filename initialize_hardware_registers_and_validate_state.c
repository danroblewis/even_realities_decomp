/*
 * Function: initialize_hardware_registers_and_validate_state
 * Entry:    000651d8
 * Prototype: undefined initialize_hardware_registers_and_validate_state()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_hardware_registers_and_validate_state(void)

{
  int iVar1;
  undefined4 in_r3;
  
  if (DAT_2000b320 == '\0') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_clock_cb.module_initialized",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_clock.c",0x12e,in_r3);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call
              ("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_clock.c",0x12e);
  }
  iVar1 = process_data_with_validation_and_parameter_alt3(5);
  if (iVar1 == 0) {
    process_data_with_parameter_validation_alt4(5);
  }
  _DAT_50005518 = 1;
  _DAT_50005514 = 1;
  _DAT_50005580 = 1;
  return;
}



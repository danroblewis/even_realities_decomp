/*
 * Function: validate_address_and_perform_hardware_operations_alt
 * Entry:    00065f80
 * Prototype: undefined validate_address_and_perform_hardware_operations_alt()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void validate_address_and_perform_hardware_operations_alt
               (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_1 < 0x100000) || (param_1 - 0xff8000 < 0x1000)) {
    if ((param_1 & 3) == 0) {
      _DAT_50039584 = 1;
      _DAT_50039504 = 1;
      wait_for_hardware_flag_and_write_with_barrier();
      clear_hardware_control_registers();
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","nrfx_is_word_aligned((void const *)addr)",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_nvmc.c",0x196,param_4);
    uVar1 = 0x196;
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","is_valid_address(addr, 1)",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_nvmc.c",0x195,param_4);
    uVar1 = 0x195;
  }
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_nvmc.c",uVar1);
}



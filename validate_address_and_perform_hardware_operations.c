/*
 * Function: validate_address_and_perform_hardware_operations
 * Entry:    00065f1c
 * Prototype: undefined __stdcall validate_address_and_perform_hardware_operations(undefined4 address_pointer, undefined4 unused_param1, undefined4 unused_param2, undefined4 debug_parameter)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
validate_address_and_perform_hardware_operations
          (undefined4 *address_pointer,undefined4 param_2,undefined4 param_3,
          undefined4 debug_parameter)

{
  undefined4 uVar1;
  
  if (address_pointer < (undefined4 *)0x100000) {
    if (((uint)address_pointer & 0xfff) == 0) {
      _DAT_50039584 = 2;
      _DAT_50039504 = 2;
      *address_pointer = 0xffffffff;
      do {
      } while (-1 < _DAT_50039400 << 0x1f);
      clear_hardware_control_registers();
      uVar1 = 0xbad0000;
    }
    else {
      uVar1 = 0xbad000a;
    }
    return uVar1;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","is_valid_address(addr, 0)",
               "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_nvmc.c",0x107,debug_parameter);
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_nvmc.c",0x107);
}



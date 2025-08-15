/*
 * Function: validate_and_initialize_system_state
 * Entry:    00065190
 * Prototype: undefined __stdcall validate_and_initialize_system_state(undefined4 initialization_value, undefined4 debug_arg1, undefined4 debug_arg2, undefined4 debug_arg3)
 */


undefined4
validate_and_initialize_system_state
          (int initialization_value,undefined4 param_2,undefined4 param_3,undefined4 debug_arg3)

{
  undefined4 uVar1;
  
  if (initialization_value == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","event_handler",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_clock.c",0x115,debug_arg3);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call
              ("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_clock.c",0x115);
  }
  if (HARDWARE_REGISTER_INITIALIZATION_BUFFER == '\0') {
    uVar1 = 0xbad0000;
    HARDWARE_REGISTER_INITIALIZATION_BUFFER = '\x01';
    SYSTEM_STATE_VALIDATION_AND_INITIALIZATION_STATE = initialization_value;
  }
  else {
    uVar1 = 0xbad000c;
  }
  return uVar1;
}



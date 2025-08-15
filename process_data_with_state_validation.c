/*
 * Function: process_data_with_state_validation
 * Entry:    00065d3c
 * Prototype: undefined __stdcall process_data_with_state_validation(undefined4 unused_parameter, undefined4 data_value, undefined4 additional_data)
 */


undefined4
process_data_with_state_validation(undefined4 param_1,int data_value,undefined4 additional_data)

{
  undefined4 uVar1;
  
  if (data_value == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","handler",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_ipc.c",0x34);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_ipc.c",0x34);
  }
  if (DAT_2000b328 == '\0') {
    process_data_with_parameter_validation_alt4(0x2a);
    uVar1 = 0xbad0000;
    DAT_2000b328 = '\x01';
    DAT_2000b324 = data_value;
    DAT_2000b32c = additional_data;
  }
  else {
    uVar1 = 0xbad000c;
  }
  return uVar1;
}



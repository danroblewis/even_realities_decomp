/*
 * Function: execute_callback_function
 * Entry:    000681cc
 * Prototype: undefined execute_callback_function()
 */


void execute_callback_function(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 4), iVar1 != 0)) {
    if (*(code **)(iVar1 + 0xc) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000681f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(iVar1,param_1);
      return;
    }
    return;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","device && device->bus",
               "WEST_TOPDIR/modules/hal/libmetal/libmetal/lib/device.c",0x51);
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/modules/hal/libmetal/libmetal/lib/device.c",0x51);
}



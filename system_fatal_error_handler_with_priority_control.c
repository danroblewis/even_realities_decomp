/*
 * Function: system_fatal_error_handler_with_priority_control
 * Entry:    0004c0a8
 * Prototype: undefined __stdcall system_fatal_error_handler_with_priority_control(undefined4 error_code)
 */


void system_fatal_error_handler_with_priority_control(undefined4 error_code)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  FUN_00063954();
  process_data_with_validation_and_callback_alt5(error_code);
  DEBUG_PRINT("Failed to reboot: spinning endlessly...\n");
  do {
    process_data_with_state_management_alt3();
  } while( true );
}



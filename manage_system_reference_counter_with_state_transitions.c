/*
 * Function: manage_system_reference_counter_with_state_transitions
 * Entry:    0007a464
 * Prototype: undefined manage_system_reference_counter_with_state_transitions()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 manage_system_reference_counter_with_state_transitions(int param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_20002f14)(SYSTEM_REFERENCE_COUNTER_AND_EVENT_MANAGEMENT);
  if (iVar1 != 0) {
    return 0xffff8fe9;
  }
  if (param_1 == 0) {
    if (SYSTEM_REFERENCE_COUNTER_MANAGEMENT == 0) {
      _DAT_50844500 = 1;
      do {
      } while (_DAT_50845910 != 0);
    }
    SYSTEM_REFERENCE_COUNTER_MANAGEMENT = SYSTEM_REFERENCE_COUNTER_MANAGEMENT + 1;
  }
  else if (SYSTEM_REFERENCE_COUNTER_MANAGEMENT != 0) {
    if (SYSTEM_REFERENCE_COUNTER_MANAGEMENT == 1) {
      do {
      } while (_DAT_50845910 != 0);
      _DAT_50844500 = _DAT_50845910;
      set_system_parameter_simple(0x1ffffff);
    }
    SYSTEM_REFERENCE_COUNTER_MANAGEMENT = SYSTEM_REFERENCE_COUNTER_MANAGEMENT + -1;
    (*SYSTEM_EVENT_FUNCTION_POINTER_TABLE)(SYSTEM_REFERENCE_COUNTER_AND_EVENT_MANAGEMENT);
    return 0;
  }
  (*SYSTEM_EVENT_FUNCTION_POINTER_TABLE)(SYSTEM_REFERENCE_COUNTER_AND_EVENT_MANAGEMENT);
  return 0;
}



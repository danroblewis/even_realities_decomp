/*
 * Function: manage_system_reference_counter_with_state_transitions
 * Entry:    0007a464
 * Prototype: undefined manage_system_reference_counter_with_state_transitions()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 manage_system_reference_counter_with_state_transitions(int param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_20002f14)(DAT_20002f08);
  if (iVar1 != 0) {
    return 0xffff8fe9;
  }
  if (param_1 == 0) {
    if (DAT_2000d3ac == 0) {
      _DAT_50844500 = 1;
      do {
      } while (_DAT_50845910 != 0);
    }
    DAT_2000d3ac = DAT_2000d3ac + 1;
  }
  else if (DAT_2000d3ac != 0) {
    if (DAT_2000d3ac == 1) {
      do {
      } while (_DAT_50845910 != 0);
      _DAT_50844500 = _DAT_50845910;
      set_system_parameter_simple(0x1ffffff);
    }
    DAT_2000d3ac = DAT_2000d3ac + -1;
    (*DAT_20002f18)(DAT_20002f08);
    return 0;
  }
  (*DAT_20002f18)(DAT_20002f08);
  return 0;
}



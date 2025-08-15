/*
 * Function: process_interrupt_data_with_state_management
 * Entry:    00066270
 * Prototype: undefined process_interrupt_data_with_state_management()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 process_interrupt_data_with_state_management(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (INTERRUPT_CONFIGURATION_AND_STATE_MANAGEMENT == '\0') {
    uVar2 = 0xbad0005;
  }
  else if (INTERRUPT_CONFIGURATION_AND_STATE_STRUCTURE == '\x03') {
    uVar2 = 0xbad000b;
  }
  else if ((param_1 == 0) || (param_2 << 0x10 < 0)) {
    uVar2 = 0xbad0004;
  }
  else {
    process_data_with_callback_and_parameter_alt3(0x26);
    if (INTERRUPT_CONFIGURATION_AND_STATE_STRUCTURE == '\x02') {
      uVar1 = 0;
    }
    else {
      uVar1 = ~(uint)(byte)DAT_2000b342 & 1;
    }
    if ((&DAT_2000b334)[uVar1] == 0) {
      *(short *)(&DAT_2000b33c + uVar1 * 2) = (short)param_2;
      (&DAT_2000b334)[uVar1] = param_1;
      if (INTERRUPT_CONFIGURATION_AND_STATE_MANAGEMENT != '\x02') {
        INTERRUPT_CONFIGURATION_AND_STATE_MANAGEMENT = '\x02';
        _DAT_50026500 = 1;
        _DAT_50026000 = 1;
      }
      uVar2 = 0xbad0000;
      _DAT_50026560 = param_1;
      _DAT_50026564 = param_2;
    }
    else {
      uVar2 = 0xbad000b;
    }
    process_data_with_parameter_validation_alt4(0x26);
  }
  return uVar2;
}



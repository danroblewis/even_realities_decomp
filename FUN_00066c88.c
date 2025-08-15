/*
 * Function: FUN_00066c88
 * Entry:    00066c88
 * Prototype: undefined FUN_00066c88()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066c88(void)

{
  if (_DAT_5002b100 == 0) {
    return;
  }
  _DAT_5002b100 = 0;
  if (DAT_2000b380 == '\0') {
    if (DAT_2000b378 == '\x03') {
      DAT_2000b380 = 1;
      _DAT_5002b004 = 1;
      _DAT_5002b100 = 0;
      return;
    }
    if (DAT_2000b378 != '\x04') {
      if (DAT_2000b378 != '\x02') {
        DAT_2000b380 = 1;
        _DAT_5002b100 = 0;
        return;
      }
      DAT_2000b380 = 1;
      _DAT_5002b008 = 1;
      _DAT_5002b100 = 0;
      return;
    }
    DAT_2000b380 = 1;
    _DAT_5002b00c = 1;
    _DAT_5002b100 = 0;
    return;
  }
  if (DAT_2000b378 == '\x03') {
    DAT_2000b368 = 2;
  }
  else {
    if (DAT_2000b378 == '\x04') {
      DAT_2000b368 = 3;
      DAT_2000b36c = _DAT_5002b51c;
      DAT_2000b370._0_1_ = (undefined1)_DAT_5002b520;
      goto LAB_00066cd8;
    }
    if (DAT_2000b378 != '\x02') goto LAB_00066cd8;
    DAT_2000b368 = 1;
  }
  FUN_00066644();
LAB_00066cd8:
  if (DAT_2000b350 == 0) {
    DAT_2000b378 = '\x01';
  }
  if (DAT_2000b381 == '\0') {
    (*DAT_2000b348)(0,DAT_2000b34c);
  }
  DAT_2000b368 = 0;
  return;
}



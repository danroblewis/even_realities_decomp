/*
 * Function: read_device_property_value
 * Entry:    000839a6
 * Prototype: undefined read_device_property_value()
 */


uint read_device_property_value(undefined4 param_1)

{
  uint uVar1;
  byte local_1d;
  byte *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_1d = 0xff;
  local_1c = &local_1d;
  local_18 = 1;
  local_14 = 5;
  uVar1 = validate_device_properties_and_state(param_1,&local_14);
  if (-1 < (int)uVar1) {
    uVar1 = (uint)local_1d;
  }
  return uVar1;
}



/*
 * Function: calculate_bluetooth_privacy_flags
 * Entry:    0008115c
 * Prototype: undefined calculate_bluetooth_privacy_flags()
 */


uint calculate_bluetooth_privacy_flags(uint param_1)

{
  uint uVar1;
  
  if ((param_1 & 0x8000) == 0) {
    uVar1 = 7;
  }
  else {
    uVar1 = 6;
  }
  if ((int)(param_1 << 0xf) < 0) {
    uVar1 = uVar1 & 5;
  }
  if ((int)(param_1 << 0xe) < 0) {
    uVar1 = uVar1 & 0xfb;
  }
  return uVar1;
}



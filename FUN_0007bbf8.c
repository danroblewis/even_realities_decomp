/*
 * Function: FUN_0007bbf8
 * Entry:    0007bbf8
 * Prototype: undefined FUN_0007bbf8()
 */


undefined4 FUN_0007bbf8(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if (0x7f < param_1) {
    return 0xf70001;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (2 < param_2 - 1U) {
    return 0xf70003;
  }
  if (param_1 == 0x7f) {
    uVar1 = 0xf70001;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



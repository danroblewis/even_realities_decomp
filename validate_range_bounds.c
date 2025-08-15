/*
 * Function: validate_range_bounds
 * Entry:    000839dc
 * Prototype: undefined validate_range_bounds()
 */


undefined4 validate_range_bounds(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = get_constant_value_0x100000();
  if (((int)param_1 < 0) || (uVar1 <= param_1)) {
    uVar2 = 0;
  }
  else if (uVar1 - param_1 < param_2) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



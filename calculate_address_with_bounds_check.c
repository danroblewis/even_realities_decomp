/*
 * Function: calculate_address_with_bounds_check
 * Entry:    0007f51a
 * Prototype: undefined calculate_address_with_bounds_check()
 */


uint calculate_address_with_bounds_check(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_1 + 0x1c;
  if ((param_2 != 0) && (bVar2 = param_2 < uVar1, uVar1 = param_2, bVar2)) {
    return 0;
  }
  uVar1 = uVar1 + 8;
  if (param_1 + *(int *)(param_1 + 0x134) * 8 + 0x1cU <= uVar1) {
    uVar1 = 0;
  }
  return uVar1;
}



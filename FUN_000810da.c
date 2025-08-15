/*
 * Function: FUN_000810da
 * Entry:    000810da
 * Prototype: undefined FUN_000810da()
 */


int FUN_000810da(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    if ((param_2 != 0) && (iVar1 = find_ble_attribute_by_properties(), iVar1 != 0)) {
      param_2 = iVar1 + 1;
    }
  }
  else {
    param_2 = 0;
  }
  return param_2;
}



/*
 * Function: handle_bluetooth_attribute_properties
 * Entry:    000810da
 * Prototype: undefined handle_bluetooth_attribute_properties()
 */


int handle_bluetooth_attribute_properties(int param_1,int param_2)

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



/*
 * Function: lookup_device_property_from_table
 * Entry:    00060990
 * Prototype: undefined lookup_device_property_from_table()
 */


int lookup_device_property_from_table(int param_1)

{
  int iVar1;
  
  if (param_1 + 0xf4530000U < 0xb) {
    iVar1 = (int)*(short *)(&UNK_0009902c + (param_1 + 0xf4530000U) * 2);
  }
  else {
    iVar1 = -0x10;
  }
  return iVar1;
}



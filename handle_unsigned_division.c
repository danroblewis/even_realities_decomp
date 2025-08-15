/*
 * Function: handle_unsigned_division
 * Entry:    0000e244
 * Prototype: undefined handle_unsigned_division()
 */


undefined8 handle_unsigned_division(int param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((param_4 == 0) && (param_3 == 0)) {
    if (param_2 != 0 || param_1 != 0) {
      param_2 = -1;
      param_1 = -1;
    }
    return CONCAT44(param_2,param_1);
  }
  uVar1 = perform_complex_division();
  return uVar1;
}



/*
 * Function: validate_parameter_conditions
 * Entry:    00084d70
 * Prototype: undefined validate_parameter_conditions()
 */


uint validate_parameter_conditions(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 == 4) {
    return 1;
  }
  if (param_1 == 5) {
    uVar1 = param_2 - 1;
    if (uVar1 != 0) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return (uint)(param_1 == param_2);
}



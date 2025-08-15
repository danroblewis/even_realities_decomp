/*
 * Function: select_sha256_parameter_with_switch_logic
 * Entry:    0007b0b8
 * Prototype: undefined select_sha256_parameter_with_switch_logic()
 */


undefined4 select_sha256_parameter_with_switch_logic(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 1:
    uVar1 = *param_2;
    break;
  case 2:
    uVar1 = param_2[1];
    break;
  default:
    return 0xf10c31;
  case 4:
    param_2[9] = param_2[2];
    return 0;
  case 8:
    uVar1 = param_2[3];
  }
  param_2[9] = uVar1;
  return 0;
}



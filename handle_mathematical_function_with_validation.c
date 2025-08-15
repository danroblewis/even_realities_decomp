/*
 * Function: handle_mathematical_function_with_validation
 * Entry:    00075d5c
 * Prototype: undefined handle_mathematical_function_with_validation()
 */


undefined4 * handle_mathematical_function_with_validation(float param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calculate_natural_logarithm_function();
  if ((DAT_200035af != -1) && (param_1 <= 0.0)) {
    if (param_1 != 0.0) {
      puVar1 = (undefined4 *)thunk_FUN_00071678();
      *puVar1 = 0x21;
      return (undefined4 *)&LAB_000a8ea0;
    }
    puVar1 = (undefined4 *)thunk_FUN_00071678();
    *puVar1 = 0x22;
  }
  return puVar1;
}



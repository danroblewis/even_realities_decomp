/*
 * Function: handle_complex_mathematical_function
 * Entry:    00075acc
 * Prototype: undefined handle_complex_mathematical_function()
 */


undefined4
handle_complex_mathematical_function
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_r3;
  undefined4 uVar3;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  
  uVar3 = calculate_complex_mathematical_function_comprehensive();
  if (DAT_200035af == -1) {
    return uVar3;
  }
  iVar1 = check_float_nan(param_3,param_4,param_3,param_4,in_r3);
  if (iVar1 != 0) {
    return uVar3;
  }
  iVar1 = check_float_nan();
  if (iVar1 == 0) {
    iVar1 = float_compare_boolean();
    if (iVar1 == 0) {
      iVar1 = check_high_bit_set(uVar3);
      if (((iVar1 == 0) && (iVar1 = check_high_bit_set(param_1), iVar1 != 0)) &&
         (iVar1 = check_high_bit_set(param_3), iVar1 != 0)) {
        iVar1 = check_float_nan(uVar3,extraout_s1,uVar3,extraout_s1);
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)thunk_FUN_00071678();
          *puVar2 = 0x21;
          uVar3 = float_multiply_64bit(0,0);
          return uVar3;
        }
        puVar2 = (undefined4 *)thunk_FUN_00071678();
        *puVar2 = 0x22;
        iVar1 = float_compare_boolean_inverted();
        if (iVar1 != 0) {
          uVar3 = calculate_mathematical_function_with_64bit_float_operations(param_3);
          iVar1 = float_compare_boolean(uVar3,extraout_s1_00,param_3,param_4);
          if (iVar1 == 0) {
            return 0;
          }
        }
        return 0;
      }
      iVar1 = float_compare_boolean(uVar3,extraout_s1,0,0);
      if (iVar1 == 0) {
        return uVar3;
      }
      iVar1 = check_high_bit_set(param_1);
      if (iVar1 != 0) {
        iVar1 = check_high_bit_set(param_3);
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)thunk_FUN_00071678();
          *puVar2 = 0x22;
          return 0;
        }
        return uVar3;
      }
      return uVar3;
    }
    iVar1 = float_compare_boolean(param_3,param_4,0,0);
    if (iVar1 == 0) {
      iVar1 = check_high_bit_set(param_3);
      if (iVar1 == 0) {
        return uVar3;
      }
      iVar1 = float_compare_boolean_inverted(param_3,param_4,0,0);
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)thunk_FUN_00071678();
        *puVar2 = 0x21;
        return 0;
      }
      return uVar3;
    }
  }
  else {
    iVar1 = float_compare_boolean(param_3,param_4,0,0);
    if (iVar1 == 0) {
      return uVar3;
    }
  }
  return 0;
}



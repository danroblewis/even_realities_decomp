/*
 * Function: validate_data_and_execute_callback_with_counter
 * Entry:    00082712
 * Prototype: undefined validate_data_and_execute_callback_with_counter(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 */


undefined4
validate_data_and_execute_callback_with_counter
          (undefined4 *param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,
          short *param_7,code *param_8,undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 <= param_4) {
    if (((param_2 < param_3) ||
        ((param_5 != 0 &&
         (iVar2 = compare_data_structures(param_5,*param_1,param_3,param_4,param_4), iVar2 != 0))))
       || ((param_6 != 0 && (param_1[3] != param_6)))) {
      return 1;
    }
    *param_7 = *param_7 + -1;
    uVar1 = (*param_8)(param_1,param_2,param_9);
    if (*param_7 != 0) {
      return uVar1;
    }
  }
  return 0;
}



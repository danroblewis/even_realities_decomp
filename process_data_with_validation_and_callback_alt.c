/*
 * Function: process_data_with_validation_and_callback_alt
 * Entry:    0004f198
 * Prototype: undefined process_data_with_validation_and_callback_alt()
 */


int process_data_with_validation_and_callback_alt
              (undefined4 *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 8) = param_2;
  param_1[5] = 0x7f5ef;
  param_1[9] = param_3;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_1 + 2);
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  param_1[7] = param_1 + 10;
  iVar1 = FUN_0005c22c(*param_1,param_1 + 5,param_3,param_1 + 10,param_4);
  if (iVar1 != 0) {
    FUN_0007f5d8(param_1 + 1,2);
  }
  return iVar1;
}



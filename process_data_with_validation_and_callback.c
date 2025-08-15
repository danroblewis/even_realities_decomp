/*
 * Function: process_data_with_validation_and_callback
 * Entry:    0004def8
 * Prototype: undefined process_data_with_validation_and_callback()
 */


void process_data_with_validation_and_callback
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  iVar1 = FUN_0007ef1c(&DAT_00087bc0,(int)&uStack_c + 3,param_3,param_4,param_1);
  if ((iVar1 == 0) && (uStack_c._3_1_ == '\x01')) {
    process_data_with_callback_and_parameter(&DAT_00087bc0);
  }
  DAT_2001d44e = 1;
  FUN_0007eece(&DAT_0008ad08);
  return;
}



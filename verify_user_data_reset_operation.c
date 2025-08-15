/*
 * Function: verify_user_data_reset_operation
 * Entry:    000230bc
 * Prototype: undefined verify_user_data_reset_operation()
 */


undefined4
verify_user_data_reset_operation
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = fill_memory_buffer(param_1 + 0x10c6,0xff,0xc0,param_1 + 0x10c6,param_4);
  handle_data_verification(0x135000,uVar1,0xc0);
  return 0;
}



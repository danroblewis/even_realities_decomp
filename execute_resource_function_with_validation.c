/*
 * Function: execute_resource_function_with_validation
 * Entry:    0004b17c
 * Prototype: undefined execute_resource_function_with_validation()
 */


undefined4
execute_resource_function_with_validation(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_2;
  iVar1 = validate_parameter_and_set_error();
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = execute_resource_callback_function
                      (*(undefined4 *)(&DAT_2000254c + param_1 * 0x28),
                       *(undefined4 *)(&DAT_20002548 + param_1 * 0x28),0x101,param_2,param_3,uVar2);
  }
  return uVar2;
}



/*
 * Function: execute_resource_function_with_mutex_and_cleanup
 * Entry:    0004b130
 * Prototype: undefined execute_resource_function_with_mutex_and_cleanup()
 */


undefined4
execute_resource_function_with_mutex_and_cleanup
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = validate_parameter_and_set_error();
  if ((int)uVar3 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = param_1 * 0x28;
    resource_mutex_acquire
              (iVar2 + 0x20002554,(int)((ulonglong)uVar3 >> 0x20),0xffffffff,0xffffffff,param_4);
    uVar1 = (**(code **)(*(int *)(&DAT_2000254c + iVar2) + 8))
                      (*(undefined4 *)(&DAT_20002548 + iVar2));
    mutex_unlock(iVar2 + 0x20002554);
    decrement_reference_count(param_1);
  }
  return uVar1;
}



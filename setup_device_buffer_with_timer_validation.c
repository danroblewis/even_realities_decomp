/*
 * Function: setup_device_buffer_with_timer_validation
 * Entry:    00084e72
 * Prototype: undefined setup_device_buffer_with_timer_validation()
 */


undefined4
setup_device_buffer_with_timer_validation
          (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  local_c = param_2;
  iVar1 = setup_device_buffer_with_validation(param_1 & 0xff,&local_c,param_3,param_4,param_1);
  if (iVar1 == 0) {
    uVar2 = validate_timer_interrupt_data_and_parameters(local_c,param_2);
    no_operation(local_c);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



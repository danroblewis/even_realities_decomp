/*
 * Function: validate_timer_interrupt_data_and_parameters
 * Entry:    0006403c
 * Prototype: undefined validate_timer_interrupt_data_and_parameters()
 */


undefined4 validate_timer_interrupt_data_and_parameters(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  byte local_21;
  undefined1 auStack_20 [20];
  
  iVar1 = call_callback_function_with_bounds_validation
                    (param_1,*(int *)(param_1 + 8) + -0x10,auStack_20,0x10);
  if (-1 < iVar1) {
    iVar1 = validate_buffer_all_bytes_match(param_1,auStack_20,0x10);
    if (iVar1 == 0) {
      iVar1 = memcmp_byte_arrays(auStack_20,&TIMER_INTERRUPT_DATA_VALIDATION_AND_PROCESSING,0x10);
      if (iVar1 == 0) {
        uVar3 = 1;
      }
      else {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 3;
    }
    *param_2 = uVar3;
    uVar2 = calculate_timer_data_size_or_offset(param_1);
    iVar1 = call_callback_function_with_bounds_validation(param_1,uVar2,&local_21,1);
    if (-1 < iVar1) {
      param_2[1] = local_21 & 0xf;
      param_2[4] = local_21 >> 4;
      iVar1 = validate_buffer_all_bytes_match(param_1,&local_21,1);
      if ((iVar1 != 0) || (4 < (byte)param_2[1])) {
        param_2[1] = 1;
        param_2[4] = 0;
      }
      iVar1 = process_buffer_validation_and_set_status
                        (param_1,param_2 + 2,(*(int *)(param_1 + 8) - 0x18U & 0xfffffff8) - 8);
      if (iVar1 == 0) {
        uVar2 = process_buffer_validation_wrapper(param_1,param_2 + 3);
        return uVar2;
      }
    }
  }
  return 1;
}



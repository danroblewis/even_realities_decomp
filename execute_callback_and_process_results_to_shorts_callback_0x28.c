/*
 * Function: execute_callback_and_process_results_to_shorts_callback_0x28
 * Entry:    0007fae4
 * Prototype: undefined execute_callback_and_process_results_to_shorts_callback_0x28()
 */


void execute_callback_and_process_results_to_shorts_callback_0x28(undefined4 param_1,short *param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_1;
  local_c = param_2;
  execute_callback_function_with_parameter(param_1,0x28,&local_10,6);
  *param_2 = (ushort)(byte)local_10 + (ushort)local_10._1_1_ * 0x100;
  param_2[1] = (ushort)local_10._2_1_ + (ushort)local_10._3_1_ * 0x100;
  param_2[2] = (ushort)(byte)local_c + (ushort)local_c._1_1_ * 0x100;
  return;
}



/*
 * Function: process_callback_results_and_bit_manipulation
 * Entry:    0007fe72
 * Prototype: undefined process_callback_results_and_bit_manipulation()
 */


int process_callback_results_and_bit_manipulation
              (undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  byte *local_1c;
  undefined4 uStack_18;
  
  local_1c = param_2;
  uStack_18 = param_3;
  iVar1 = call_function_pointer_with_bit_manipulation(param_1,1,param_3,param_4,param_1);
  if (iVar1 == 0) {
    iVar1 = execute_callback_function_with_parameter(param_1,0x14,&local_1c,1);
    *param_2 = (byte)((uint)((int)local_1c << 0x1d) >> 0x1f);
    iVar2 = call_function_pointer_with_bit_manipulation(param_1,0);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}



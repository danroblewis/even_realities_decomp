/*
 * Function: process_buffer_data
 * Entry:    00086f5a
 * Prototype: undefined process_buffer_data()
 */


void process_buffer_data(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  
  if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x17) < 0) {
    execute_resource_function_with_error_handling(param_1,(int)*(short *)(param_2 + 0xe),0,2);
  }
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xefff;
  MEMORY_ERROR_CODE = 0;
  iVar1 = execute_resource_function_with_mutex_alt
                    ((int)*(short *)(param_2 + 0xe),param_3,param_4,param_4,param_4,unaff_r4,
                     unaff_r5,unaff_lr);
  if ((iVar1 == -1) && (MEMORY_ERROR_CODE != 0)) {
    *param_1 = MEMORY_ERROR_CODE;
  }
  return;
}



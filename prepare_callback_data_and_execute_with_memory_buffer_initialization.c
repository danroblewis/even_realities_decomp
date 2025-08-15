/*
 * Function: prepare_callback_data_and_execute_with_memory_buffer_initialization
 * Entry:    0008484e
 * Prototype: undefined prepare_callback_data_and_execute_with_memory_buffer_initialization()
 */


void prepare_callback_data_and_execute_with_memory_buffer_initialization
               (int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  iVar1 = *(int *)(param_1 + 0x10);
  fill_memory_buffer(local_24,0,0x14);
  local_24[0] = 2;
  iVar1 = *(int *)(iVar1 + 0xc);
  local_20 = *(undefined4 *)(iVar1 + 0x58);
  local_1c = *(undefined4 *)(iVar1 + 0x60);
  uStack_18 = param_2;
  execute_callback_function_pointer_if_valid(param_1,local_24);
  return;
}


